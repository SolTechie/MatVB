/*
 * MATLAB Compiler: 3.0
 * Date: Sun Jun 14 18:30:53 2009
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-M" "-silentsetup" "-d"
 * "C:/MATLAB6p5/work/mywav/src" "-B" "csglcom:mywav,mywav,1.0" "-B" "sgl" "-m"
 * "-W" "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W"
 * "mainhg" "libmwsglm.mlib" "-t" "-W" "comhg:mywav,mywav,1.0" "-T" "link:lib"
 * "-h" "libmmfile.mlib" "-i" "-i" "C:/MATLAB6p5/work/fzone.m"
 * "C:/MATLAB6p5/work/myprowav.m" "C:/MATLAB6p5/work/tzone.m" 
 */
#include "fzone.h"
#include "libmatlbm.h"
#include "wavread.h"

void InitializeModule_fzone(void) {
}

void TerminateModule_fzone(void) {
}

static mxArray * Mfzone(int nargout_, mxArray * x);

_mexLocalFunctionTable _local_function_table_fzone
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfFzone" contains the normal interface for the "fzone"
 * M-function from file "c:\matlab6p5\work\fzone.m" (lines 1-4). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
mxArray * mlfFzone(mxArray * x) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 1, x);
    y = Mfzone(nargout, x);
    mlfRestorePreviousContext(0, 1, x);
    return mlfReturnValue(y);
}

/*
 * The function "mlxFzone" contains the feval interface for the "fzone"
 * M-function from file "c:\matlab6p5\work\fzone.m" (lines 1-4). The feval
 * function calls the implementation version of fzone through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxFzone(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: fzone Line: 1 Column: 1 The function \"fzone"
            "\" was called with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: fzone Line: 1 Column: 1 The function \"fzone"
            "\" was called with more than the declared number of inputs (1)."),
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
    mplhs[0] = Mfzone(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mfzone" is the implementation version of the "fzone"
 * M-function from file "c:\matlab6p5\work\fzone.m" (lines 1-4). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function y=fzone(x)
 */
static mxArray * Mfzone(int nargout_, mxArray * x) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_fzone);
    mxArray * y = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&x);
    /*
     * y=wavread(x);
     */
    mlfAssign(&y, mlfWavread(NULL, NULL, NULL, mclVa(x, "x"), NULL));
    /*
     * y=fft(y);
     */
    mlfAssign(&y, mlfFft(mclVv(y, "y"), NULL, NULL));
    /*
     * plot(abs(y));
     */
    mclAssignAns(&ans, mlfNPlot(0, mlfAbs(mclVv(y, "y")), NULL));
    mclValidateOutput(y, 1, nargout_, "y", "fzone");
    mxDestroyArray(ans);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
