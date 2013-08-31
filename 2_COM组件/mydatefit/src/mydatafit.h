/*
 * MATLAB Compiler: 3.0
 * Date: Sun Jun 14 04:54:04 2009
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-M" "-silentsetup" "-d"
 * "C:/MATLAB6p5/work/mydatafit/src" "-B" "csglcom:mydatafit,mydatafit,1.0"
 * "-B" "sgl" "-m" "-W" "main" "-L" "C" "-t" "-T" "link:exe" "-h"
 * "libmmfile.mlib" "-W" "mainhg" "libmwsglm.mlib" "-t" "-W"
 * "comhg:mydatafit,mydatafit,1.0" "-T" "link:lib" "-h" "libmmfile.mlib" "-i"
 * "-i" "C:/MATLAB6p5/work/conv2num.m" "C:/MATLAB6p5/work/conv2str.m"
 * "C:/MATLAB6p5/work/mypolyfit.m" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#ifndef __mydatafit_h
#define __mydatafit_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_mydatafit(void);
extern void TerminateModule_mydatafit(void);
extern mxArray * mlfConv2num(mxArray * x);
extern void mlxConv2num(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern mxArray * mlfConv2str(mxArray * * n, mxArray * x);
extern void mlxConv2str(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern mxArray * mlfMypolyfit(mxArray * x, mxArray * y, mxArray * n);
extern void mlxMypolyfit(int nlhs,
                         mxArray * plhs[],
                         int nrhs,
                         mxArray * prhs[]);
extern void mydatafitInitialize(void);
extern void mydatafitTerminate(void);

#ifdef __cplusplus
}
#endif

#endif
