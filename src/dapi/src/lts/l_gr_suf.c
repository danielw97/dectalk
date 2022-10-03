/*
 ***********************************************************************
 *
 *                           Coryright (c)
 *    � Digital Equipment Corporation 1996, 1997 All rights reserved.
 *
 *    Restricted Rights: Use, duplication, or disclosure by the U.S.
 *    Government is subject to restrictions as set forth in subparagraph
 *    (c) (1) (ii) of DFARS 252.227-7013, or in FAR 52.227-19, or in FAR
 *    52.227-14 Alt. III, as applicable.
 *
 *    This software is proprietary to and embodies the confidential
 *    technology of Digital Equipment Corporation and other parties.
 *    Possession, use, or copying of this software and media is authorized
 *    only pursuant to a valid written license from Digital or an
 *    authorized sublicensor.
 *
 ***********************************************************************
 *    File Name:     l_gr_suf.c
 *    Author:        JDB
 *    Creation Date: 06/19/96
 *
 *    Functionality: 
 *    German suffix table
 *
 ***********************************************************************
 *    Revision History:
 *
 * Rev	Who		Date		Description                    
 * ---	-----	-----------	---------------------------------------                        
 * 001	GL		01/02/1997	Use U16 to replace "unsigned int" for suffix_index
 * 002	GL		04/21/1997	BATS#357  Change the code for __osf__ build 
 * 003  GL      08/26/1997  BATS#455 add 0x00, 0x00 at the end of table to fix the
 *                          16 bits crash.  Also need to fix the compiler.
 * 004  GL      11/06/1997  rule update
 * 005  GL      04/16/1998  for BATS#656, fix -ie rule phoneme
 */ 
/*
 *  Suffix stripping rule file.
 *  Generated from : suff_gr.tab
 *  Written to file : l_gr_suf.c
 *  Created on : 04/16/98 at 11:51:42
 */
const U32 suffix_index[] = {
  0xFFFF,  0xFFFF,  0xFFFF,  0x0350,  0x01C0,
  0xFFFF,  0x02A8,  0x0020,  0xFFFF,  0xFFFF,
  0x00A0,  0x0180,  0x0470,  0x0060,  0x0530,
  0xFFFF,  0xFFFF,  0x01A0,  0x00E0,  0x0040,
  0x0000,  0x0668,  0xFFFF,  0xFFFF,  0xFFFF,
  0xFFFF,  0xFFFF };

const unsigned char suffix_table[] = {
  0xFF,  0xFF,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x75,  0x75,
  0x69,  0x68,  0x73,  0x73,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,
  0x00,  0x67,  0x30,  0x06,  0x2C,  0x0D,  0xF7,  0xFF,  0x00,  0x00,
  0x00,  0x00,  0x40,  0x01,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,
  0x68,  0x63,  0x69,  0x65,  0x72,  0x73,  0xFE,  0xFC,  0xFB,  0xFA,
  0xF8,  0x00,  0x00,  0x26,  0x1B,  0x12,  0x2A,  0xF7,  0xFF,  0x00,
  0x00,  0x00,  0x00,  0x00,  0x60,  0x01,  0x00,  0x00,  0x00,  0x04,
  0x00,  0x00,  0x74,  0x66,  0x61,  0x68,  0x63,  0x73,  0xFE,  0xFC,
  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x28,  0x01,  0x24,  0x2E,  0xF7,
  0xFF,  0x00,  0x00,  0x00,  0x00,  0x00,  0x80,  0x00,  0x00,  0x00,
  0x00,  0x00,  0x02,  0x00,  0x6E,  0x65,  0x73,  0x69,  0x65,  0x77,
  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x25,  0x12,  0x27,
  0x04,  0x1F,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0x00,  0xC0,  0x00,
  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x6E,  0x65,  0x6E,  0x6E,
  0x69,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x05,  0x1F,
  0x04,  0x1F,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
  0xC0,  0x02,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x6B,  0x69,
  0x74,  0x73,  0x69,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,
  0x05,  0x26,  0x2E,  0x05,  0x30,  0xF7,  0xFF,  0x00,  0x00,  0x00,
  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,
  0x6E,  0x69,  0x74,  0x73,  0x69,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,
  0x00,  0x00,  0x05,  0x26,  0x2E,  0x05,  0x1F,  0xF7,  0xFF,  0x00,
  0x00,  0x00,  0x00,  0x00,  0x20,  0x01,  0x00,  0x00,  0x00,  0x04,
  0x00,  0x00,  0x73,  0x75,  0x6D,  0x73,  0x69,  0xFE,  0xFC,  0xFB,
  0xFA,  0xF8,  0x00,  0x00,  0x05,  0x26,  0x1E,  0x08,  0x26,  0xF7,
  0xFF,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,
  0x00,  0x00,  0x02,  0x00,  0x6E,  0x65,  0x72,  0x65,  0x69,  0xFE,
  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x67,  0x0D,  0x1B,  0x04,
  0x1F,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0x00,  0x00,  0xE0,  0x01,
  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,  0x73,  0x67,  0x6E,  0x69,
  0x6C,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x1A,  0x05,
  0x20,  0x26,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
  0x60,  0x02,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x68,  0x63,
  0x69,  0x65,  0x72,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,
  0x1B,  0x12,  0x2A,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0x00,  0x00,
  0x00,  0x00,  0x18,  0x02,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,
  0x74,  0x72,  0x65,  0x77,  0x73,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,
  0x00,  0x00,  0x26,  0x25,  0x0B,  0x1C,  0x2E,  0xF7,  0xFF,  0x00,
  0x00,  0x00,  0x00,  0x00,  0xD8,  0x02,  0x00,  0x00,  0x01,  0x00,
  0x00,  0x00,  0x6C,  0x6C,  0x6F,  0x76,  0x73,  0xFE,  0xFC,  0xFB,
  0xFA,  0xF8,  0x00,  0x00,  0x34,  0x24,  0x06,  0x1A,  0xF7,  0xFF,
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xB0,  0x03,  0x00,  0x00,
  0x00,  0x20,  0x00,  0x00,  0x72,  0x65,  0x68,  0x6F,  0x77,  0xFE,
  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x25,  0x0E,  0x67,  0x1D,
  0x0B,  0x1C,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0x00,  0x98,  0x03,
  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,  0x65,  0x73,  0x69,  0x65,
  0x77,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x25,  0x12,
  0x27,  0x04,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
  0xF0,  0x02,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,  0x73,  0x74,
  0x72,  0x64,  0x77,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,
  0x25,  0x02,  0x1C,  0x34,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0x00,
  0x00,  0x00,  0x78,  0x02,  0x00,  0x00,  0x00,  0x04,  0x02,  0x00,
  0x6E,  0x65,  0x68,  0x63,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,
  0x00,  0x2A,  0x04,  0x1F,  0xF7,  0xFF,  0x30,  0x02,  0x00,  0x00,
  0x00,  0x04,  0x00,  0x00,  0x74,  0x69,  0x65,  0x6B,  0xFE,  0xFC,
  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x30,  0x12,  0x2E,  0xF7,  0xFF,
  0x48,  0x02,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x74,  0x69,
  0x65,  0x68,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x1D,
  0x12,  0x2E,  0xF7,  0xFF,  0xE0,  0x03,  0x00,  0x00,  0x01,  0x00,
  0x02,  0x00,  0x74,  0x72,  0x65,  0x69,  0xFE,  0xFC,  0xFB,  0xFA,
  0xF8,  0x00,  0x00,  0x0D,  0x1C,  0x2E,  0xF7,  0xFF,  0x90,  0x02,
  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x68,  0x63,  0x73,  0x69,
  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x05,  0x28,  0xF7,
  0xFF,  0x00,  0x20,  0x03,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,
  0x6E,  0x69,  0x65,  0x6C,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,
  0x00,  0x1A,  0x12,  0x1F,  0xF7,  0xFF,  0xFF,  0xFF,  0x00,  0x00,
  0x01,  0x00,  0x00,  0x00,  0x68,  0x63,  0x69,  0x6C,  0xFE,  0xFC,
  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x1A,  0x05,  0x2A,  0xF7,  0xFF,
  0xD0,  0x04,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x67,  0x6E,
  0x69,  0x6C,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x1A,
  0x05,  0x20,  0xF7,  0xFF,  0xA0,  0x04,  0x00,  0x00,  0x00,  0x04,
  0x00,  0x00,  0x6B,  0x65,  0x68,  0x74,  0xFE,  0xFC,  0xFB,  0xFA,
  0xF8,  0x00,  0x00,  0x2E,  0x0B,  0x30,  0xF7,  0xFF,  0x08,  0x03,
  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x6C,  0x6C,  0x6F,  0x76,
  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x24,  0x06,  0x1A,
  0xF7,  0xFF,  0xC8,  0x03,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,
  0x73,  0x69,  0x65,  0x77,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,
  0x00,  0x25,  0x12,  0x26,  0xF7,  0xFF,  0x68,  0x03,  0x00,  0x00,
  0x01,  0x00,  0x00,  0x00,  0x6C,  0x6C,  0x65,  0xFE,  0xFC,  0xFB,
  0xFA,  0xF8,  0x00,  0x00,  0x67,  0x02,  0x1A,  0xF7,  0xFF,  0x00,
  0x38,  0x03,  0x00,  0x00,  0x00,  0x00,  0x02,  0x00,  0x6E,  0x6C,
  0x65,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x04,  0x1A,
  0x1F,  0xF7,  0xFF,  0x00,  0x80,  0x03,  0x00,  0x00,  0x00,  0x00,
  0x02,  0x00,  0x6E,  0x72,  0x65,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,
  0x00,  0x00,  0x04,  0x1C,  0x1F,  0xF7,  0xFF,  0x00,  0xFF,  0xFF,
  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x64,  0x6E,  0x65,  0xFE,
  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x04,  0x1F,  0x2E,  0xF7,
  0xFF,  0x00,  0xF8,  0x03,  0x00,  0x00,  0x01,  0x04,  0x00,  0x00,
  0x6C,  0x61,  0x69,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,
  0x19,  0x67,  0x0A,  0x1A,  0xF7,  0xFF,  0x90,  0x05,  0x00,  0x00,
  0x00,  0x04,  0x00,  0x00,  0x6E,  0x6F,  0x69,  0xFE,  0xFC,  0xFB,
  0xFA,  0xF8,  0x00,  0x00,  0x19,  0x67,  0x0E,  0x1F,  0xF7,  0xFF,
  0x18,  0x05,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x65,  0x6E,
  0x69,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x67,  0x0D,
  0x1F,  0x04,  0xF7,  0xFF,  0x00,  0x05,  0x00,  0x00,  0x01,  0x00,
  0x00,  0x00,  0x72,  0x61,  0x62,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,
  0x00,  0x00,  0x2D,  0x0A,  0x1C,  0xF7,  0xFF,  0x00,  0x10,  0x04,
  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x73,  0x6F,  0x6C,  0xFE,
  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x1A,  0x0E,  0x26,  0xF7,
  0xFF,  0x00,  0x28,  0x04,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,
  0x74,  0x73,  0x6C,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,
  0x05,  0x26,  0x2E,  0xF7,  0xFF,  0x00,  0x58,  0x04,  0x00,  0x00,
  0x02,  0x04,  0x00,  0x00,  0x6C,  0x61,  0x6D,  0xFE,  0xFC,  0xFB,
  0xFA,  0xF8,  0x00,  0x00,  0x1E,  0x0A,  0x1A,  0xF7,  0xFF,  0x00,
  0x48,  0x05,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x73,  0x69,
  0x6E,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x1F,  0x05,
  0x26,  0xF7,  0xFF,  0x00,  0x40,  0x04,  0x00,  0x00,  0x00,  0x04,
  0x00,  0x00,  0x74,  0x61,  0x72,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,
  0x00,  0x00,  0x1B,  0x0A,  0x2E,  0xF7,  0xFF,  0x00,  0x08,  0x06,
  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x74,  0x6F,  0x72,  0xFE,
  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x1B,  0x0E,  0x2E,  0xF7,
  0xFF,  0x00,  0x88,  0x04,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,
  0x6C,  0x61,  0x73,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,
  0x27,  0x0A,  0x1A,  0xF7,  0xFF,  0x00,  0xB8,  0x04,  0x00,  0x00,
  0x01,  0x00,  0x00,  0x00,  0x6D,  0x61,  0x73,  0xFE,  0xFC,  0xFB,
  0xFA,  0xF8,  0x00,  0x00,  0x27,  0x0A,  0x1E,  0xF7,  0xFF,  0x00,
  0x20,  0x06,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x6C,  0x65,
  0x73,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x27,  0x04,
  0x1A,  0xF7,  0xFF,  0x00,  0xD8,  0x05,  0x00,  0x00,  0x00,  0x04,
  0x00,  0x00,  0x6B,  0x69,  0x74,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,
  0x00,  0x00,  0x2E,  0x05,  0x30,  0xF7,  0xFF,  0x00,  0x60,  0x05,
  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x6D,  0x75,  0x74,  0xFE,
  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x2E,  0x10,  0x1E,  0xF7,
  0xFF,  0x00,  0xE8,  0x04,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,
  0x67,  0x6E,  0x75,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,
  0x08,  0x20,  0xF7,  0xFF,  0x00,  0x00,  0x50,  0x06,  0x00,  0x00,
  0x00,  0x04,  0x00,  0x00,  0x67,  0x75,  0x7A,  0xFE,  0xFC,  0xFB,
  0xFA,  0xF8,  0x00,  0x00,  0x34,  0x10,  0x30,  0xF7,  0xFF,  0x00,
  0x78,  0x05,  0x00,  0x00,  0x00,  0x20,  0x00,  0x00,  0x72,  0x65,
  0x77,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x67,  0x25,
  0x0B,  0x1C,  0xF7,  0xFF,  0xF0,  0x05,  0x00,  0x00,  0x00,  0x20,
  0x00,  0x00,  0x65,  0x69,  0x77,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,
  0x00,  0x00,  0x67,  0x25,  0x0D,  0xF7,  0xFF,  0x00,  0xFF,  0xFF,
  0x00,  0x00,  0x00,  0x20,  0x00,  0x00,  0x6F,  0x77,  0xFE,  0xFC,
  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x67,  0x25,  0x0E,  0xF7,  0xFF,
  0x00,  0x00,  0xC0,  0x05,  0x00,  0x00,  0x00,  0x20,  0x00,  0x00,
  0x73,  0x61,  0x77,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,
  0x67,  0x25,  0x01,  0x26,  0xF7,  0xFF,  0xFF,  0xFF,  0x00,  0x00,
  0x00,  0x04,  0x00,  0x00,  0x6D,  0x75,  0xFE,  0xFC,  0xFB,  0xFA,
  0xF8,  0x00,  0x00,  0x08,  0x1E,  0xF7,  0xFF,  0x00,  0x00,  0x00,
  0xA8,  0x05,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x72,  0x61,
  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x0A,  0x1C,  0xF7,
  0xFF,  0x00,  0x00,  0x00,  0x38,  0x06,  0x00,  0x00,  0x00,  0x00,
  0x02,  0x00,  0x6E,  0x65,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,
  0x00,  0x04,  0x1F,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0xFF,  0xFF,
  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x72,  0x65,  0xFE,  0xFC,
  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x04,  0x1C,  0xF7,  0xFF,  0x00,
  0x00,  0x00,  0xB0,  0x06,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,
  0x73,  0x65,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x02,
  0x26,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0xFF,  0xFF,  0x00,  0x00,
  0x00,  0x04,  0x00,  0x00,  0x6B,  0x69,  0xFE,  0xFC,  0xFB,  0xFA,
  0xF8,  0x00,  0x00,  0x05,  0x30,  0xF7,  0xFF,  0x00,  0x00,  0x00,
  0x80,  0x06,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x65,  0x69,
  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x67,  0x0D,  0xF7,
  0xFF,  0x00,  0x00,  0x00,  0xFF,  0xFF,  0x00,  0x00,  0x00,  0x04,
  0x00,  0x00,  0x74,  0x61,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,
  0x00,  0x0A,  0x2E,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0xFF,  0xFF,
  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x6C,  0x61,  0xFE,  0xFC,
  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x67,  0x0A,  0x1A,  0xF7,  0xFF,
  0x00,  0x00,  0x98,  0x06,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,
  0x6E,  0x69,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x05,
  0x1F,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0xFF,  0xFF,  0x00,  0x00,
  0x01,  0x00,  0x00,  0x00,  0x67,  0x69,  0xFE,  0xFC,  0xFB,  0xFA,
  0xF8,  0x00,  0x00,  0x05,  0x2A,  0xF7,  0xFF,  0x00,  0x00,  0x00,
  0xFF,  0xFF,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x76,  0x69,
  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x0D,  0x24,  0xF7,
  0xFF,  0x00,  0x00,  0x00,  0xFF,  0xFF,  0x00,  0x00,  0x00,  0x04,
  0x00,  0x00,  0x65,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,
  0x04,  0xF7,  0xFF,  0x00,  0x00,  0x00,  0x00,  0x00,  0xFF,  0xFF,
  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x6E,  0xFE,  0xFC,  0xFB,
  0xFA,  0xF8,  0x00,  0x00,  0x1F,  0xF7,  0xFF,  0x00,  0x00,  0x00,
  0x00,  0x00,  0xFF,  0xFF,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,
  0x73,  0xFE,  0xFC,  0xFB,  0xFA,  0xF8,  0x00,  0x00,  0x26,  0xF7,
  0xFF,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00 };

