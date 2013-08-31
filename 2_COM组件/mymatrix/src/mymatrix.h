/*
 * MATLAB Compiler: 3.0
 * Date: Sat Jun 13 16:15:23 2009
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-M" "-silentsetup" "-d"
 * "C:/MATLAB6p5/work/mymatrix/src" "-B" "ccom:mymatrix,mymatrix,1.0" "-t" "-W"
 * "com:mymatrix,mymatrix,1.0" "-T" "link:lib" "-h" "libmmfile.mlib" "-i" "-i"
 * "C:/MATLAB6p5/work/conv2fraction.m" "C:/MATLAB6p5/work/conv2num.m"
 * "C:/MATLAB6p5/work/conv2str.m" "C:/MATLAB6p5/work/GuassSeidel.m"
 * "C:/MATLAB6p5/work/myeye.m" "C:/MATLAB6p5/work/mymagic.m"
 * "C:/MATLAB6p5/work/myminus.m" "C:/MATLAB6p5/work/mymultiply.m"
 * "C:/MATLAB6p5/work/mypascal.m" "C:/MATLAB6p5/work/myplus.m"
 * "C:/MATLAB6p5/work/myrot.m" "C:/MATLAB6p5/work/mysolve.m" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#ifndef __mymatrix_h
#define __mymatrix_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_mymatrix(void);
extern void TerminateModule_mymatrix(void);
extern mxArray * mlfConv2fraction(mxArray * x);
extern void mlxConv2fraction(int nlhs,
                             mxArray * plhs[],
                             int nrhs,
                             mxArray * prhs[]);
extern mxArray * mlfConv2num(mxArray * x);
extern void mlxConv2num(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern mxArray * mlfConv2str(mxArray * * n, mxArray * x);
extern void mlxConv2str(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern mxArray * mlfGuassseidel(mxArray * * cnt,
                                mxArray * A,
                                mxArray * b,
                                mxArray * e);
extern void mlxGuassseidel(int nlhs,
                           mxArray * plhs[],
                           int nrhs,
                           mxArray * prhs[]);
extern mxArray * mlfMyeye(mxArray * x);
extern void mlxMyeye(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern mxArray * mlfMymagic(mxArray * x);
extern void mlxMymagic(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern mxArray * mlfMyminus(mxArray * a, mxArray * b);
extern void mlxMyminus(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern mxArray * mlfMymultiply(mxArray * a, mxArray * b);
extern void mlxMymultiply(int nlhs,
                          mxArray * plhs[],
                          int nrhs,
                          mxArray * prhs[]);
extern mxArray * mlfMypascal(mxArray * x);
extern void mlxMypascal(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern mxArray * mlfMyplus(mxArray * a, mxArray * b);
extern void mlxMyplus(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern mxArray * mlfMyrot(mxArray * x);
extern void mlxMyrot(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern mxArray * mlfMysolve(mxArray * a, mxArray * b);
extern void mlxMysolve(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern void mymatrixInitialize(void);
extern void mymatrixTerminate(void);

#ifdef __cplusplus
}
#endif

#endif
