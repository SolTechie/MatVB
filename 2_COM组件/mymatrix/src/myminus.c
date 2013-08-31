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
#include "myminus.h"
#include "libmatlbm.h"
#include "libmmfile.h"

static mxChar _array1_[3] = { 'r', 'a', 't' };
static mxArray * _mxarray0_;

void InitializeModule_myminus(void) {
    _mxarray0_ = mclInitializeString(3, _array1_);
}

void TerminateModule_myminus(void) {
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mmyminus(int nargout_, mxArray * a, mxArray * b);

_mexLocalFunctionTable _local_function_table_myminus
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfMyminus" contains the normal interface for the "myminus"
 * M-function from file "c:\matlab6p5\work\myminus.m" (lines 1-4). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfMyminus(mxArray * a, mxArray * b) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 2, a, b);
    y = Mmyminus(nargout, a, b);
    mlfRestorePreviousContext(0, 2, a, b);
    return mlfReturnValue(y);
}

/*
 * The function "mlxMyminus" contains the feval interface for the "myminus"
 * M-function from file "c:\matlab6p5\work\myminus.m" (lines 1-4). The feval
 * function calls the implementation version of myminus through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxMyminus(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: myminus Line: 1 Column: "
            "1 The function \"myminus\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: myminus Line: 1 Column:"
            " 1 The function \"myminus\" was called with m"
            "ore than the declared number of inputs (2)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    mplhs[0] = Mmyminus(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mmyminus" is the implementation version of the "myminus"
 * M-function from file "c:\matlab6p5\work\myminus.m" (lines 1-4). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function y=myminus(a,b)
 */
static mxArray * Mmyminus(int nargout_, mxArray * a, mxArray * b) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_myminus);
    mxArray * y = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&a);
    mclCopyArray(&b);
    /*
     * y=a-b;
     */
    mlfAssign(&y, mclMinus(mclVa(a, "a"), mclVa(b, "b")));
    /*
     * format rat;
     */
    mlfFormat(_mxarray0_, NULL);
    /*
     * y=rats(y);
     */
    mlfAssign(&y, mlfRats(mclVv(y, "y"), NULL));
    mclValidateOutput(y, 1, nargout_, "y", "myminus");
    mxDestroyArray(ans);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
