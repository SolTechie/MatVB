/*
 * MATLAB Compiler: 3.0
 * Date: Sun Jun 14 03:22:41 2009
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

#ifndef __stem_h
#define __stem_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_stem(void);
extern void TerminateModule_stem(void);
extern _mexLocalFunctionTable _local_function_table_stem;

extern mxArray * mlfNStem(int nargout, ...);
extern mxArray * mlfStem(mxArray * synthetic_varargin_argument, ...);
extern void mlfVStem(mxArray * synthetic_varargin_argument, ...);
extern void mlxStem(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
