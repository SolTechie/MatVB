/*
 * MATLAB Compiler: 3.0
 * Date: Sun Jun 14 03:28:11 2009
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

#ifndef __subplot_h
#define __subplot_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_subplot(void);
extern void TerminateModule_subplot(void);
extern _mexLocalFunctionTable _local_function_table_subplot;

extern mxArray * mlfNSubplot(int nargout,
                             mxArray * nrows,
                             mxArray * ncols,
                             mxArray * thisPlot,
                             mxArray * replace);
extern mxArray * mlfSubplot(mxArray * nrows,
                            mxArray * ncols,
                            mxArray * thisPlot,
                            mxArray * replace);
extern void mlfVSubplot(mxArray * nrows,
                        mxArray * ncols,
                        mxArray * thisPlot,
                        mxArray * replace);
extern void mlxSubplot(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
