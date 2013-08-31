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
#include "mymagic.h"
#include "libmatlbm.h"
#include "libmmfile.h"

void InitializeModule_mymagic(void) {
}

void TerminateModule_mymagic(void) {
}

static mxArray * Mmymagic(int nargout_, mxArray * x);

_mexLocalFunctionTable _local_function_table_mymagic
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfMymagic" contains the normal interface for the "mymagic"
 * M-function from file "c:\matlab6p5\work\mymagic.m" (lines 1-2). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfMymagic(mxArray * x) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 1, x);
    y = Mmymagic(nargout, x);
    mlfRestorePreviousContext(0, 1, x);
    return mlfReturnValue(y);
}

/*
 * The function "mlxMymagic" contains the feval interface for the "mymagic"
 * M-function from file "c:\matlab6p5\work\mymagic.m" (lines 1-2). The feval
 * function calls the implementation version of mymagic through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxMymagic(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: mymagic Line: 1 Column: "
            "1 The function \"mymagic\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: mymagic Line: 1 Column:"
            " 1 The function \"mymagic\" was called with m"
            "ore than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mmymagic(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mmymagic" is the implementation version of the "mymagic"
 * M-function from file "c:\matlab6p5\work\mymagic.m" (lines 1-2). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function y=mymagic(x)
 */
static mxArray * Mmymagic(int nargout_, mxArray * x) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_mymagic);
    mxArray * y = NULL;
    mclCopyArray(&x);
    /*
     * y=magic(x);
     */
    mlfAssign(&y, mlfMagic(mclVa(x, "x")));
    mclValidateOutput(y, 1, nargout_, "y", "mymagic");
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
