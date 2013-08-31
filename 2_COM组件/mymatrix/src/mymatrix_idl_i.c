/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sat Jun 13 16:15:25 2009
 */
/* Compiler settings for C:/MATLAB6p5/work/mymatrix/src\mymatrix_idl.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_Imymatrix = {0xAF0791E3,0x1D83,0x4AA1,{0x90,0x05,0x0E,0x7F,0x29,0x39,0x13,0xC6}};


const IID LIBID_mymatrix = {0x208EE527,0xC468,0x46DF,{0xBE,0x75,0xFC,0x9A,0x42,0x07,0xB4,0xE2}};


const CLSID CLSID_mymatrix = {0xE6FB83CF,0x05E0,0x4ADD,{0xA1,0xEB,0x1F,0x66,0x03,0x43,0x13,0xDF}};


#ifdef __cplusplus
}
#endif

