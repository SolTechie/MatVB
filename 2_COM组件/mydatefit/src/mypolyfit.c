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
#include "mypolyfit.h"
#include "libmatlbm.h"
#include "libmmfile.h"

static mxChar _array1_[1] = { '-' };
static mxArray * _mxarray0_;

static mxChar _array3_[1] = { 'o' };
static mxArray * _mxarray2_;

void InitializeModule_mypolyfit(void) {
    _mxarray0_ = mclInitializeString(1, _array1_);
    _mxarray2_ = mclInitializeString(1, _array3_);
}

void TerminateModule_mypolyfit(void) {
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mmypolyfit(int nargout_,
                            mxArray * x,
                            mxArray * y,
                            mxArray * n);

_mexLocalFunctionTable _local_function_table_mypolyfit
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfMypolyfit" contains the normal interface for the
 * "mypolyfit" M-function from file "c:\matlab6p5\work\mypolyfit.m" (lines
 * 1-8). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfMypolyfit(mxArray * x, mxArray * y, mxArray * n) {
    int nargout = 1;
    mxArray * z = NULL;
    mlfEnterNewContext(0, 3, x, y, n);
    z = Mmypolyfit(nargout, x, y, n);
    mlfRestorePreviousContext(0, 3, x, y, n);
    return mlfReturnValue(z);
}

/*
 * The function "mlxMypolyfit" contains the feval interface for the "mypolyfit"
 * M-function from file "c:\matlab6p5\work\mypolyfit.m" (lines 1-8). The feval
 * function calls the implementation version of mypolyfit through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxMypolyfit(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: mypolyfit Line: 1 Column:"
            " 1 The function \"mypolyfit\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: mypolyfit Line: 1 Column:"
            " 1 The function \"mypolyfit\" was called with m"
            "ore than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mmypolyfit(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mmypolyfit" is the implementation version of the "mypolyfit"
 * M-function from file "c:\matlab6p5\work\mypolyfit.m" (lines 1-8). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function z=mypolyfit(x,y,n)
 */
static mxArray * Mmypolyfit(int nargout_,
                            mxArray * x,
                            mxArray * y,
                            mxArray * n) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_mypolyfit);
    mxArray * z = NULL;
    mxArray * ans = NULL;
    mxArray * yy = NULL;
    mxArray * xx = NULL;
    mxArray * b = NULL;
    mxArray * a = NULL;
    mclCopyArray(&x);
    mclCopyArray(&y);
    mclCopyArray(&n);
    /*
     * z=polyfit(x,y,n);
     */
    mlfAssign(
      &z,
      mlfNPolyfit(1, NULL, NULL, mclVa(x, "x"), mclVa(y, "y"), mclVa(n, "n")));
    /*
     * a=min(x);
     */
    mlfAssign(&a, mlfMin(NULL, mclVa(x, "x"), NULL, NULL));
    /*
     * b=max(x);
     */
    mlfAssign(&b, mlfMax(NULL, mclVa(x, "x"), NULL, NULL));
    /*
     * xx=linspace(a,b);
     */
    mlfAssign(&xx, mlfLinspace(mclVv(a, "a"), mclVv(b, "b"), NULL));
    /*
     * yy=polyval(z,xx);
     */
    mlfAssign(
      &yy, mlfNPolyval(1, NULL, mclVv(z, "z"), mclVv(xx, "xx"), NULL, NULL));
    /*
     * plot(xx,yy,'-',x,y,'o');
     */
    mclAssignAns(
      &ans,
      mlfNPlot(
        0,
        mclVv(xx, "xx"),
        mclVv(yy, "yy"),
        _mxarray0_,
        mclVa(x, "x"),
        mclVa(y, "y"),
        _mxarray2_,
        NULL));
    mclValidateOutput(z, 1, nargout_, "z", "mypolyfit");
    mxDestroyArray(a);
    mxDestroyArray(b);
    mxDestroyArray(xx);
    mxDestroyArray(yy);
    mxDestroyArray(ans);
    mxDestroyArray(n);
    mxDestroyArray(y);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return z;
}
