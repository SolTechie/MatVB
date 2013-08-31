/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Jun 14 04:54:08 2009
 */
/* Compiler settings for C:/MATLAB6p5/work/mydatafit/src\mydatafit_idl.idl:
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

const IID IID_Imydatafit = {0xCF135276,0x2276,0x4C0D,{0x95,0x3E,0xFA,0xEB,0x04,0xCB,0x6B,0x1C}};


const IID LIBID_mydatafit = {0x92BC9978,0xA6C3,0x4C14,{0xBC,0xA4,0xA1,0x20,0xBF,0x40,0x42,0xEA}};


const CLSID CLSID_mydatafit = {0x7143C8D8,0xEA3A,0x4AC6,{0x8C,0xC6,0x3A,0x5C,0xDE,0x3E,0xB9,0x2A}};


#ifdef __cplusplus
}
#endif

