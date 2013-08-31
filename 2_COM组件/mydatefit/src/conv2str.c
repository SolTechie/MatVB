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
#include "conv2str.h"
#include "libmatlbm.h"
#include "libmmfile.h"

void InitializeModule_conv2str(void) {
}

void TerminateModule_conv2str(void) {
}

static mxArray * Mconv2str(mxArray * * n, int nargout_, mxArray * x);

_mexLocalFunctionTable _local_function_table_conv2str
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfConv2str" contains the normal interface for the "conv2str"
 * M-function from file "c:\matlab6p5\work\conv2str.m" (lines 1-3). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfConv2str(mxArray * * n, mxArray * x) {
    int nargout = 1;
    mxArray * y = NULL;
    mxArray * n__ = NULL;
    mlfEnterNewContext(1, 1, n, x);
    if (n != NULL) {
        ++nargout;
    }
    y = Mconv2str(&n__, nargout, x);
    mlfRestorePreviousContext(1, 1, n, x);
    if (n != NULL) {
        mclCopyOutputArg(n, n__);
    } else {
        mxDestroyArray(n__);
    }
    return mlfReturnValue(y);
}

/*
 * The function "mlxConv2str" contains the feval interface for the "conv2str"
 * M-function from file "c:\matlab6p5\work\conv2str.m" (lines 1-3). The feval
 * function calls the implementation version of conv2str through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxConv2str(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: conv2str Line: 1 Column:"
            " 1 The function \"conv2str\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: conv2str Line: 1 Column:"
            " 1 The function \"conv2str\" was called with m"
            "ore than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mconv2str(&mplhs[1], nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mconv2str" is the implementation version of the "conv2str"
 * M-function from file "c:\matlab6p5\work\conv2str.m" (lines 1-3). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [y,n]=conv2str(x)
 */
static mxArray * Mconv2str(mxArray * * n, int nargout_, mxArray * x) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_conv2str);
    mxArray * y = NULL;
    mclCopyArray(&x);
    /*
     * y=num2str(x);
     */
    mlfAssign(&y, mlfNum2str(mclVa(x, "x"), NULL));
    /*
     * n=size(y);
     */
    mlfAssign(n, mlfSize(mclValueVarargout(), mclVv(y, "y"), NULL));
    mclValidateOutput(y, 1, nargout_, "y", "conv2str");
    mclValidateOutput(*n, 2, nargout_, "n", "conv2str");
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
