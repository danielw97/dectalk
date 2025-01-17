/* read a Phar-lap .EXP file and spit out a fastload file. */



#include "exes.h"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#include <sys\types.h>
#include <sys\stat.h>



#define LOAD_EXTENT (48)


struct EXP imageinfo;

#define TEMP_LEN    (256)
char	buff[TEMP_LEN];


char help_string[] =
  "exp2flr -i infile -o outfile -b base";

char prog_name[] = "exp2flr";

FILE	*outfile;
int	infile_s;
off_t	EXEsize;
struct stat inf;

long lmin(unsigned long a, unsigned long b);
void write_drec(unsigned char *ibuf, unsigned short length, FILE *fout);
void write_arec(unsigned long addr, FILE *fout);
void write_crec(unsigned long csum, FILE *fout);



unsigned long int     zbase;


main(int argc,char *argv[])
{
	int	argp;
	int 	index,i,j;
	char	infilename[80]="",
		outfilename[80]="";

	unsigned long	base, off, hiaddr, out_addr, start_addr;
	int	extent;

	char	*cp, *cp2;
	unsigned long	check_sum;

    /* random initialization.. */
    check_sum=0;
    zbase=0;

if (argc == 1)
    {
    printf("%s\n",help_string);
    exit(-1);
    }

/* loop thru all of the arguments.. */
for (argp=1;argp<argc;argp++)
    {
    if (argv[argp][0] != '-')
	{
	printf(" %s: can't parse argument %d: %s\n",
		prog_name,argp, argv[argp]);
	printf("%s\n",help_string);

	exit(-1);
	}
    switch (argv[argp][1])
	{
	int	tmp;
	case 'i':	/* in file name */
		argp++;	/* get to the filename */
		strcpy(infilename,argv[argp]);
	    break;
	/**/
	case 'o':	/* output file name */
		argp++;	/* get to the filename */
		strcpy(outfilename,argv[argp]);
	    break;
	/**/
        case 'b':
                argp++;
		sscanf(argv[argp], "%lx", &zbase);
            break;
	/**/
	default:
		printf(" %s: unknown switch: %s\n",prog_name,argv[argp]);
		printf("%s\n",help_string);
		exit(-3);
	/**/
	} /* end switch */
    } /* end for */

	if (infilename[0] == '\0')
		{
		printf (" %s: no input file.\n",prog_name);
		exit(-2);
		}

	/****************************************************************/
	/* open the files.. 						*/
	infile_s = open(infilename,O_RDONLY+O_BINARY);

	if (infile_s == -1)
	    {
	    printf(" %s: couldn't open file %s\n",prog_name,infilename);
	    exit(1);
	    }

	
	if (outfilename[0] == '\0')
		{
		printf (" %s: no output file.\n",prog_name);
		exit(-2);
		}


	outfile = fopen(outfilename,"w");

	if (outfile == NULL)
	    {
	    printf(" %s: couldn't open file %s\n",prog_name,outfilename);
	    exit(1);
	    }

    /* get the header info from the file.. */
    if (fstat(infile_s,&inf) == -1)
	{
	    printf("fseek() failed on input file.\n");
	    exit(-8);
	}
    EXEsize = inf.st_size;

    {
	int n;
	n = read(infile_s, &imageinfo, sizeof(imageinfo));
	if (n != sizeof(imageinfo))
	    {
		printf(" EXP header read failed. \n");
		exit(-4);
	    }
    }
    base = imageinfo.base_offset;
    off = imageinfo.image_off;
        {
        printf(" .. load file based at %08lx; load at offset 0x%08lx\n",
                zbase, base);
        }
    
	out_addr = 0;

	start_addr = zbase;
/*
 * write the initial address record
 */

   write_arec(start_addr,outfile);

   while((off < (long)EXEsize))
	{
	extent = (int)lmin((long)LOAD_EXTENT,(long)EXEsize - off);

	if(lseek(infile_s,off,SEEK_SET) == -1)
		{
		perror("Bad seek in dump_exe()");
		exit(1);
		}
	if(extent != read(infile_s,&buff,extent))
		{
		perror("Bad read in dump_exe()");
		exit(1);
		}
	off += extent;
	out_addr += extent;
	// add into the checksum..
	for (i=0;i<extent;i++)
		check_sum += (long)(buff[i]&0xFF);

	write_drec(buff,extent,outfile);	/* write it out. */


	}	/* the EXE file has now been processed */
/*
 * Zero fill up to the final byte (reserved for the checksum)
 */
   off -= base;			/* ROM relative address of next free loc */

	printf(" [ok]\n");
	printf("Wrote EXE data to ROM addresses 0x%04lx to 0x%04lx\n",
		start_addr,
		out_addr - 1);

   // spit out the checksum record..
   write_crec(check_sum,outfile);

   close(infile_s);
   fclose(outfile);



}  /*main*/



long lmin(a,b)
unsigned
   long
	a,b;
{
   if(a < b)
	return(a);
   return(b);
}


void write_arec(unsigned long addr, FILE *fout)
{

	// write a fastload address record.
	unsigned char temp[30];
	unsigned short i;
	unsigned long sum;

	// first, create the text we're about to send.
	sprintf(temp,"[A%06lx",addr);


	// sum over it..
	sum=0;
	for (i=0;temp[i]!='\0';i++)
		sum += temp[i];

	// and write it out.
	fprintf(fout,"%s%02X\n",temp,(sum&0xFF));


}

void write_crec(unsigned long csum, FILE *fout)
{

	// write a fastload checksum record.
	unsigned char temp[30];
	unsigned short i;
	unsigned long sum;

	// first, create the text we're about to send.
	sprintf(temp,"[C%08lX",csum);
	printf("Checksum= %s\\n",temp);

	// sum over it..
	sum=0;
	for (i=0;temp[i]!='\0';i++)
		sum += temp[i];

	// and write it out.
	fprintf(fout,"%s%02X\n",temp,(sum&0xFF));


}

void write_drec(unsigned char *ibuf, unsigned short length, FILE *fout)
{
	// write a data record.
	unsigned char dout[80];
	unsigned long sum, abuf;
	unsigned short i, in, out, numquads;

	// zero out the output record..
	for (i=0;i<80;i++)
		dout[i]='\0';

	// first, turn the bytes into a string of quads..
	// the record ID..
	dout[0]='[';
	dout[1]='D';
	// the length..
	dout[2] = 0x80|(length&0x3f);
	numquads = length/3;
	if (numquads*3 < length)
		numquads++;
	
	in = 0;	// the pointer into the input buffer.
	i = 0;	// 0123, how far we are into a quad

	for (out=0; out<numquads; out++)
		{
		// place the data in the buffer for processing..
		abuf = 0;
		abuf = ibuf[in++];
		if (in<length)
			abuf |= ((long)ibuf[in++])<<8;
		if (in<length)
			abuf |= ((long)ibuf[in++])<<16;
		// now, turn that into the appropriate characters..
		for (i=0;i<4;i++)
			{
			dout[(out*4+i)+3] = 0x80 | (abuf&0x3f);
			abuf = abuf>>6;
			}
		}

	// now, sum the string..
	sum=0;
	for (i=0;dout[i]!='\0';i++)
		sum += dout[i];

	// and write it out.
	fprintf(fout,"%s%02X\n",dout,(sum&0xFF));
 
}
