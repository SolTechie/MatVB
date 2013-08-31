/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Jun 14 18:30:57 2009
 */
/* Compiler settings for C:/MATLAB6p5/work/mywav/src\mywav_idl.idl:
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

const IID IID_Imywav = {0x42F76964,0xECDA,0x4680,{0x84,0x1E,0x28,0xEB,0x92,0x3B,0x45,0xF1}};


const IID LIBID_mywav = {0x7C4A4DAE,0x9B47,0x4C26,{0x8A,0xF3,0x09,0x5D,0x94,0xA9,0x77,0x48}};


const CLSID CLSID_mywav = {0x386F0C0A,0x26E5,0x4B8B,{0x98,0xAF,0xF2,0xD1,0x0B,0xF4,0x04,0x0E}};


#ifdef __cplusplus
}
#endif

