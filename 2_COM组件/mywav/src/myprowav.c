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
#include "myprowav.h"
#include "awgn.h"
#include "libmatlbm.h"
#include "wavread.h"
#include "wavwrite.h"

void InitializeModule_myprowav(void) {
}

void TerminateModule_myprowav(void) {
}

static mxArray * Mmyprowav(int nargout_,
                           mxArray * opn,
                           mxArray * sav,
                           mxArray * spd,
                           mxArray * awg);

_mexLocalFunctionTable _local_function_table_myprowav
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfMyprowav" contains the normal interface for the "myprowav"
 * M-function from file "c:\matlab6p5\work\myprowav.m" (lines 1-5). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfMyprowav(mxArray * opn,
                      mxArray * sav,
                      mxArray * spd,
                      mxArray * awg) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 4, opn, sav, spd, awg);
    y = Mmyprowav(nargout, opn, sav, spd, awg);
    mlfRestorePreviousContext(0, 4, opn, sav, spd, awg);
    return mlfReturnValue(y);
}

/*
 * The function "mlxMyprowav" contains the feval interface for the "myprowav"
 * M-function from file "c:\matlab6p5\work\myprowav.m" (lines 1-5). The feval
 * function calls the implementation version of myprowav through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxMyprowav(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[4];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: myprowav Line: 1 Column:"
            " 1 The function \"myprowav\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: myprowav Line: 1 Column:"
            " 1 The function \"myprowav\" was called with m"
            "ore than the declared number of inputs (4)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 4 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 4; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mplhs[0] = Mmyprowav(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mmyprowav" is the implementation version of the "myprowav"
 * M-function from file "c:\matlab6p5\work\myprowav.m" (lines 1-5). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function y=myprowav(opn,sav,spd,awg)
 */
static mxArray * Mmyprowav(int nargout_,
                           mxArray * opn,
                           mxArray * sav,
                           mxArray * spd,
                           mxArray * awg) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_myprowav);
    mxArray * y = NULL;
    mxArray * ans = NULL;
    mxArray * fs = NULL;
    mclCopyArray(&opn);
    mclCopyArray(&sav);
    mclCopyArray(&spd);
    mclCopyArray(&awg);
    /*
     * [y fs]=wavread(opn);
     */
    mlfAssign(&y, mlfWavread(&fs, NULL, NULL, mclVa(opn, "opn"), NULL));
    /*
     * y=y+awgn(y,awg);
     */
    mlfAssign(
      &y,
      mclPlus(mclVv(y, "y"), mlfAwgn(mclVv(y, "y"), mclVa(awg, "awg"), NULL)));
    /*
     * wavwrite(y,spd*fs,sav);
     */
    mlfWavwrite(
      mclVv(y, "y"),
      mclMtimes(mclVa(spd, "spd"), mclVv(fs, "fs")),
      mclVa(sav, "sav"),
      NULL);
    mclValidateOutput(y, 1, nargout_, "y", "myprowav");
    mxDestroyArray(fs);
    mxDestroyArray(ans);
    mxDestroyArray(awg);
    mxDestroyArray(spd);
    mxDestroyArray(sav);
    mxDestroyArray(opn);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
