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
#include "wavwrite.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;

static mxChar _array5_[34] = { 'D', 'a', 't', 'a', ' ', 'a', 'r', 'r', 'a',
                               'y', ' ', 'c', 'a', 'n', 'n', 'o', 't', ' ',
                               'b', 'e', ' ', 'a', 'n', ' ', 'N', '-', 'D',
                               ' ', 'a', 'r', 'r', 'a', 'y', '.' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;
static mxArray * _mxarray9_;

static mxChar _array11_[4] = { 'R', 'I', 'F', 'F' };
static mxArray * _mxarray10_;

static mxChar _array13_[4] = { 'W', 'A', 'V', 'E' };
static mxArray * _mxarray12_;

static mxChar _array15_[4] = { 'f', 'm', 't', ' ' };
static mxArray * _mxarray14_;
static mxArray * _mxarray16_;
static mxArray * _mxarray17_;

static mxChar _array19_[4] = { 'd', 'a', 't', 'a' };
static mxArray * _mxarray18_;
static mxArray * _mxarray20_;

static mxChar _array22_[32] = { 'W', 'a', 'v', 'e', ' ', 'f', 'i', 'l',
                                'e', ' ', 'n', 'a', 'm', 'e', ' ', 'm',
                                'u', 's', 't', ' ', 'b', 'e', ' ', 'a',
                                ' ', 's', 't', 'r', 'i', 'n', 'g', '.' };
static mxArray * _mxarray21_;

static mxChar _array24_[1] = { '.' };
static mxArray * _mxarray23_;

static mxChar _array26_[4] = { '.', 'w', 'a', 'v' };
static mxArray * _mxarray25_;

static mxChar _array28_[2] = { 'w', 'b' };
static mxArray * _mxarray27_;

static mxChar _array30_[1] = { 'l' };
static mxArray * _mxarray29_;

static mxChar _array32_[16] = { 'F', 'a', 'i', 'l', 'e', 'd', ' ', 't',
                                'o', ' ', 'w', 'r', 'i', 't', 'e', ' ' };
static mxArray * _mxarray31_;

static mxChar _array34_[21] = { ' ', 'c', 'h', 'u', 'n', 'k', ' ',
                                't', 'o', ' ', 'W', 'A', 'V', 'E',
                                ' ', 'f', 'i', 'l', 'e', ':', ' ' };
static mxArray * _mxarray33_;

static mxChar _array36_[4] = { 'c', 'h', 'a', 'r' };
static mxArray * _mxarray35_;

static mxChar _array38_[5] = { 'u', 'l', 'o', 'n', 'g' };
static mxArray * _mxarray37_;

static mxChar _array40_[41] = { 'F', 'a', 'i', 'l', 'e', 'd', ' ', 't', 'o',
                                ' ', 'w', 'r', 'i', 't', 'e', ' ', 'W', 'A',
                                'V', 'E', ' ', 'f', 'o', 'r', 'm', 'a', 't',
                                ' ', 'c', 'h', 'u', 'n', 'k', ' ', 't', 'o',
                                ' ', 'f', 'i', 'l', 'e' };
static mxArray * _mxarray39_;

static mxChar _array42_[6] = { 'u', 's', 'h', 'o', 'r', 't' };
static mxArray * _mxarray41_;

static mxChar _array44_[20] = { 'U', 'n', 'k', 'n', 'o', 'w', 'n',
                                ' ', 'd', 'a', 't', 'a', ' ', 'f',
                                'o', 'r', 'm', 'a', 't', '.' };
static mxArray * _mxarray43_;

static mxChar _array46_[34] = { 'D', 'a', 't', 'a', ' ', 'c', 'l', 'i', 'p',
                                'p', 'e', 'd', ' ', 'd', 'u', 'r', 'i', 'n',
                                'g', ' ', 'w', 'r', 'i', 't', 'e', ' ', 't',
                                'o', ' ', 'f', 'i', 'l', 'e', ':' };
static mxArray * _mxarray45_;
static mxArray * _mxarray47_;
static mxArray * _mxarray48_;
static mxArray * _mxarray51_;

static mxArray * _array50_[2] = { NULL /*_mxarray3_*/, NULL /*_mxarray51_*/ };
static mxArray * _mxarray49_;

static mxChar _array53_[33] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'n',
                                'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ',
                                'b', 'i', 't', 's', ' ', 's', 'p', 'e', 'c',
                                'i', 'f', 'i', 'e', 'd', '.' };
static mxArray * _mxarray52_;

static double _array55_[2] = { -1.0, 1.0 };
static mxArray * _mxarray54_;

static mxChar _array57_[5] = { 'u', 'c', 'h', 'a', 'r' };
static mxArray * _mxarray56_;

static mxChar _array59_[5] = { 's', 'h', 'o', 'r', 't' };
static mxArray * _mxarray58_;

static mxChar _array61_[5] = { 'b', 'i', 't', '2', '4' };
static mxArray * _mxarray60_;

static mxChar _array63_[5] = { 'f', 'l', 'o', 'a', 't' };
static mxArray * _mxarray62_;

static mxChar _array65_[33] = { 'F', 'a', 'i', 'l', 'e', 'd', ' ', 't', 'o',
                                ' ', 'w', 'r', 'i', 't', 'e', ' ', 'P', 'C',
                                'M', ' ', 'd', 'a', 't', 'a', ' ', 's', 'a',
                                'm', 'p', 'l', 'e', 's', '.' };
static mxArray * _mxarray64_;

static mxChar _array67_[24] = { 'U', 'n', 's', 'u', 'p', 'p', 'o', 'r',
                                't', 'e', 'd', ' ', 'd', 'a', 't', 'a',
                                ' ', 'f', 'o', 'r', 'm', 'a', 't', '.' };
static mxArray * _mxarray66_;

void InitializeModule_wavwrite(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(4.0);
    _mxarray2_ = mclInitializeDouble(8000.0);
    _mxarray3_ = mclInitializeDouble(16.0);
    _mxarray4_ = mclInitializeString(34, _array5_);
    _mxarray6_ = mclInitializeDouble(1.0);
    _mxarray7_ = mclInitializeDouble(8.0);
    _mxarray8_ = mclInitializeDouble(36.0);
    _mxarray9_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray10_ = mclInitializeString(4, _array11_);
    _mxarray12_ = mclInitializeString(4, _array13_);
    _mxarray14_ = mclInitializeString(4, _array15_);
    _mxarray16_ = mclInitializeDouble(32.0);
    _mxarray17_ = mclInitializeDouble(3.0);
    _mxarray18_ = mclInitializeString(4, _array19_);
    _mxarray20_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray21_ = mclInitializeString(32, _array22_);
    _mxarray23_ = mclInitializeString(1, _array24_);
    _mxarray25_ = mclInitializeString(4, _array26_);
    _mxarray27_ = mclInitializeString(2, _array28_);
    _mxarray29_ = mclInitializeString(1, _array30_);
    _mxarray31_ = mclInitializeString(16, _array32_);
    _mxarray33_ = mclInitializeString(21, _array34_);
    _mxarray35_ = mclInitializeString(4, _array36_);
    _mxarray37_ = mclInitializeString(5, _array38_);
    _mxarray39_ = mclInitializeString(41, _array40_);
    _mxarray41_ = mclInitializeString(6, _array42_);
    _mxarray43_ = mclInitializeString(20, _array44_);
    _mxarray45_ = mclInitializeString(34, _array46_);
    _mxarray47_ = mclInitializeDouble(0.0);
    _mxarray48_ = mclInitializeDouble(128.0);
    _array50_[0] = _mxarray3_;
    _mxarray51_ = mclInitializeDouble(24.0);
    _array50_[1] = _mxarray51_;
    _mxarray49_ = mclInitializeCellVector(1, 2, _array50_);
    _mxarray52_ = mclInitializeString(33, _array53_);
    _mxarray54_ = mclInitializeDoubleVector(1, 2, _array55_);
    _mxarray56_ = mclInitializeString(5, _array57_);
    _mxarray58_ = mclInitializeString(5, _array59_);
    _mxarray60_ = mclInitializeString(5, _array61_);
    _mxarray62_ = mclInitializeString(5, _array63_);
    _mxarray64_ = mclInitializeString(33, _array65_);
    _mxarray66_ = mclInitializeString(24, _array67_);
}

void TerminateModule_wavwrite(void) {
    mxDestroyArray(_mxarray66_);
    mxDestroyArray(_mxarray64_);
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray60_);
    mxDestroyArray(_mxarray58_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray49_);
    mxDestroyArray(_mxarray51_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray47_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * mlfWavwrite_OpenWaveWrite(mxArray * * err, mxArray * wavefile);
static void mlxWavwrite_OpenWaveWrite(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]);
static mxArray * mlfWavwrite_write_ckinfo(mxArray * ck);
static void mlxWavwrite_write_ckinfo(int nlhs,
                                     mxArray * plhs[],
                                     int nrhs,
                                     mxArray * prhs[]);
static mxArray * mlfWavwrite_write_wavefmt(mxArray * fid, mxArray * fmt);
static void mlxWavwrite_write_wavefmt(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]);
static mxArray * mlfWavwrite_PCM_Quantize(mxArray * x, mxArray * fmt);
static void mlxWavwrite_PCM_Quantize(int nlhs,
                                     mxArray * plhs[],
                                     int nrhs,
                                     mxArray * prhs[]);
static mxArray * mlfWavwrite_write_wavedat(mxArray * fid,
                                           mxArray * fmt,
                                           mxArray * data);
static void mlxWavwrite_write_wavedat(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]);
static void Mwavwrite(mxArray * y,
                      mxArray * Fs,
                      mxArray * nbits,
                      mxArray * wavefile);
static mxArray * Mwavwrite_OpenWaveWrite(mxArray * * err,
                                         int nargout_,
                                         mxArray * wavefile);
static mxArray * Mwavwrite_write_ckinfo(int nargout_, mxArray * ck);
static mxArray * Mwavwrite_write_wavefmt(int nargout_,
                                         mxArray * fid,
                                         mxArray * fmt);
static mxArray * Mwavwrite_PCM_Quantize(int nargout_,
                                        mxArray * x,
                                        mxArray * fmt);
static mxArray * Mwavwrite_write_wavedat(int nargout_,
                                         mxArray * fid,
                                         mxArray * fmt,
                                         mxArray * data);

static mexFunctionTableEntry local_function_table_[5]
  = { { "OpenWaveWrite", mlxWavwrite_OpenWaveWrite, 1, 2, NULL },
      { "write_ckinfo", mlxWavwrite_write_ckinfo, 1, 1, NULL },
      { "write_wavefmt", mlxWavwrite_write_wavefmt, 2, 1, NULL },
      { "PCM_Quantize", mlxWavwrite_PCM_Quantize, 2, 1, NULL },
      { "write_wavedat", mlxWavwrite_write_wavedat, 3, 1, NULL } };

_mexLocalFunctionTable _local_function_table_wavwrite
  = { 5, local_function_table_ };

/*
 * The function "mlfWavwrite" contains the normal interface for the "wavwrite"
 * M-function from file "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines
 * 1-126). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlfWavwrite(mxArray * y,
                 mxArray * Fs,
                 mxArray * nbits,
                 mxArray * wavefile) {
    mlfEnterNewContext(0, 4, y, Fs, nbits, wavefile);
    Mwavwrite(y, Fs, nbits, wavefile);
    mlfRestorePreviousContext(0, 4, y, Fs, nbits, wavefile);
}

/*
 * The function "mlxWavwrite" contains the feval interface for the "wavwrite"
 * M-function from file "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines
 * 1-126). The feval function calls the implementation version of wavwrite
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxWavwrite(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[4];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite Line: 1 Column:"
            " 1 The function \"wavwrite\" was called with m"
            "ore than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite Line: 1 Column:"
            " 1 The function \"wavwrite\" was called with m"
            "ore than the declared number of inputs (4)."),
          NULL);
    }
    for (i = 0; i < 4 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 4; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    Mwavwrite(mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
}

/*
 * The function "mlfWavwrite_OpenWaveWrite" contains the normal interface for
 * the "wavwrite/OpenWaveWrite" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 126-146). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfWavwrite_OpenWaveWrite(mxArray * * err,
                                           mxArray * wavefile) {
    int nargout = 1;
    mxArray * fid = NULL;
    mxArray * err__ = NULL;
    mlfEnterNewContext(1, 1, err, wavefile);
    if (err != NULL) {
        ++nargout;
    }
    fid = Mwavwrite_OpenWaveWrite(&err__, nargout, wavefile);
    mlfRestorePreviousContext(1, 1, err, wavefile);
    if (err != NULL) {
        mclCopyOutputArg(err, err__);
    } else {
        mxDestroyArray(err__);
    }
    return mlfReturnValue(fid);
}

/*
 * The function "mlxWavwrite_OpenWaveWrite" contains the feval interface for
 * the "wavwrite/OpenWaveWrite" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 126-146). The feval
 * function calls the implementation version of wavwrite/OpenWaveWrite through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavwrite_OpenWaveWrite(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite/OpenWaveWrite Line: 126 C"
            "olumn: 1 The function \"wavwrite/OpenWaveWrite\" was cal"
            "led with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite/OpenWaveWrite Line: 126 C"
            "olumn: 1 The function \"wavwrite/OpenWaveWrite\" was cal"
            "led with more than the declared number of inputs (1)."),
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
    mplhs[0] = Mwavwrite_OpenWaveWrite(&mplhs[1], nlhs, mprhs[0]);
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
 * The function "mlfWavwrite_write_ckinfo" contains the normal interface for
 * the "wavwrite/write_ckinfo" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 146-175). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfWavwrite_write_ckinfo(mxArray * ck) {
    int nargout = 1;
    mxArray * err = NULL;
    mlfEnterNewContext(0, 1, ck);
    err = Mwavwrite_write_ckinfo(nargout, ck);
    mlfRestorePreviousContext(0, 1, ck);
    return mlfReturnValue(err);
}

/*
 * The function "mlxWavwrite_write_ckinfo" contains the feval interface for the
 * "wavwrite/write_ckinfo" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 146-175). The feval
 * function calls the implementation version of wavwrite/write_ckinfo through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavwrite_write_ckinfo(int nlhs,
                                     mxArray * plhs[],
                                     int nrhs,
                                     mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite/write_ckinfo Line: 146 Co"
            "lumn: 1 The function \"wavwrite/write_ckinfo\" was calle"
            "d with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite/write_ckinfo Line: 146 C"
            "olumn: 1 The function \"wavwrite/write_ckinfo\" was cal"
            "led with more than the declared number of inputs (1)."),
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
    mplhs[0] = Mwavwrite_write_ckinfo(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfWavwrite_write_wavefmt" contains the normal interface for
 * the "wavwrite/write_wavefmt" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 175-208). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfWavwrite_write_wavefmt(mxArray * fid, mxArray * fmt) {
    int nargout = 1;
    mxArray * err = NULL;
    mlfEnterNewContext(0, 2, fid, fmt);
    err = Mwavwrite_write_wavefmt(nargout, fid, fmt);
    mlfRestorePreviousContext(0, 2, fid, fmt);
    return mlfReturnValue(err);
}

/*
 * The function "mlxWavwrite_write_wavefmt" contains the feval interface for
 * the "wavwrite/write_wavefmt" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 175-208). The feval
 * function calls the implementation version of wavwrite/write_wavefmt through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavwrite_write_wavefmt(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite/write_wavefmt Line: 175 C"
            "olumn: 1 The function \"wavwrite/write_wavefmt\" was cal"
            "led with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite/write_wavefmt Line: 175 C"
            "olumn: 1 The function \"wavwrite/write_wavefmt\" was cal"
            "led with more than the declared number of inputs (2)."),
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
    mplhs[0] = Mwavwrite_write_wavefmt(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfWavwrite_PCM_Quantize" contains the normal interface for
 * the "wavwrite/PCM_Quantize" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 208-255). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfWavwrite_PCM_Quantize(mxArray * x, mxArray * fmt) {
    int nargout = 1;
    mxArray * y = NULL;
    mlfEnterNewContext(0, 2, x, fmt);
    y = Mwavwrite_PCM_Quantize(nargout, x, fmt);
    mlfRestorePreviousContext(0, 2, x, fmt);
    return mlfReturnValue(y);
}

/*
 * The function "mlxWavwrite_PCM_Quantize" contains the feval interface for the
 * "wavwrite/PCM_Quantize" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 208-255). The feval
 * function calls the implementation version of wavwrite/PCM_Quantize through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavwrite_PCM_Quantize(int nlhs,
                                     mxArray * plhs[],
                                     int nrhs,
                                     mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite/PCM_Quantize Line: 208 Co"
            "lumn: 1 The function \"wavwrite/PCM_Quantize\" was calle"
            "d with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite/PCM_Quantize Line: 208 C"
            "olumn: 1 The function \"wavwrite/PCM_Quantize\" was cal"
            "led with more than the declared number of inputs (2)."),
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
    mplhs[0] = Mwavwrite_PCM_Quantize(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfWavwrite_write_wavedat" contains the normal interface for
 * the "wavwrite/write_wavedat" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 255-308). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfWavwrite_write_wavedat(mxArray * fid,
                                           mxArray * fmt,
                                           mxArray * data) {
    int nargout = 1;
    mxArray * err = NULL;
    mlfEnterNewContext(0, 3, fid, fmt, data);
    err = Mwavwrite_write_wavedat(nargout, fid, fmt, data);
    mlfRestorePreviousContext(0, 3, fid, fmt, data);
    return mlfReturnValue(err);
}

/*
 * The function "mlxWavwrite_write_wavedat" contains the feval interface for
 * the "wavwrite/write_wavedat" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 255-308). The feval
 * function calls the implementation version of wavwrite/write_wavedat through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavwrite_write_wavedat(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite/write_wavedat Line: 255 C"
            "olumn: 1 The function \"wavwrite/write_wavedat\" was cal"
            "led with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavwrite/write_wavedat Line: 255 C"
            "olumn: 1 The function \"wavwrite/write_wavedat\" was cal"
            "led with more than the declared number of inputs (3)."),
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
    mplhs[0] = Mwavwrite_write_wavedat(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwavwrite" is the implementation version of the "wavwrite"
 * M-function from file "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines
 * 1-126). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function wavwrite(y,Fs,nbits,wavefile)
 */
static void Mwavwrite(mxArray * y,
                      mxArray * Fs,
                      mxArray * nbits,
                      mxArray * wavefile) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavwrite);
    int nargin_ = mclNargin(4, y, Fs, nbits, wavefile, NULL);
    mxArray * fmt = NULL;
    mxArray * ck = NULL;
    mxArray * err = NULL;
    mxArray * fid = NULL;
    mxArray * data_pad = NULL;
    mxArray * data_cksize = NULL;
    mxArray * fmt_cksize = NULL;
    mxArray * riff_cksize = NULL;
    mxArray * total_bytes = NULL;
    mxArray * total_samples = NULL;
    mxArray * bytes_per_sample = NULL;
    mxArray * channels = NULL;
    mxArray * samples = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&y);
    mclCopyArray(&Fs);
    mclCopyArray(&nbits);
    mclCopyArray(&wavefile);
    /*
     * %WAVWRITE Write Microsoft WAVE (".wav") sound file.
     * %   WAVWRITE(Y,FS,NBITS,WAVEFILE) writes data Y to a Windows WAVE
     * %   file specified by the file name WAVEFILE, with a sample rate
     * %   of FS Hz and with NBITS number of bits.  NBITS must be 8, 16,
     * %   24, or 32.  Stereo data should be specified as a matrix with two 
     * %   columns. For NBITS < 32, amplitude values outside the range 
     * %   [-1,+1] are clipped.
     * %
     * %   WAVWRITE(Y,FS,WAVEFILE) assumes NBITS=16 bits.
     * %   WAVWRITE(Y,WAVEFILE) assumes NBITS=16 bits and FS=8000 Hz.
     * %
     * %   8-, 16-, and 24-bit files are type 1 integer PCM.  32-bit files 
     * %   are written as type 3 normalized floating point.
     * %
     * %   See also WAVREAD, AUWRITE.
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.14 $  $Date: 2002/04/06 22:40:51 $
     * 
     * %   D. Orofino, 11/95
     * 
     * % Parse inputs:
     * error(nargchk(2,4,nargin));
     */
    mlfError(mlfNargchk(_mxarray0_, _mxarray1_, mlfScalar(nargin_)), NULL);
    /*
     * if nargin < 3,
     */
    if (nargin_ < 3) {
        /*
         * wavefile = Fs;
         */
        mlfAssign(&wavefile, mclVa(Fs, "Fs"));
        /*
         * Fs       = 8000;
         */
        mlfAssign(&Fs, _mxarray2_);
        /*
         * nbits    = 16;
         */
        mlfAssign(&nbits, _mxarray3_);
    /*
     * elseif nargin < 4,
     */
    } else if (nargin_ < 4) {
        /*
         * wavefile = nbits;
         */
        mlfAssign(&wavefile, mclVa(nbits, "nbits"));
        /*
         * nbits    = 16;
         */
        mlfAssign(&nbits, _mxarray3_);
    /*
     * end
     */
    }
    /*
     * 
     * % If input is a vector, force it to be a column:
     * if ndims(y) > 2,
     */
    if (mclGtBool(mlfNdims(mclVa(y, "y")), _mxarray0_)) {
        /*
         * error('Data array cannot be an N-D array.');
         */
        mlfError(_mxarray4_, NULL);
    /*
     * end
     */
    }
    /*
     * if size(y,1)==1,
     */
    if (mclEqBool(
          mlfSize(mclValueVarargout(), mclVa(y, "y"), _mxarray6_),
          _mxarray6_)) {
        /*
         * y = y(:);
         */
        mlfAssign(&y, mclArrayRef1(mclVa(y, "y"), mlfCreateColonIndex()));
    /*
     * end
     */
    }
    /*
     * [samples, channels] = size(y);
     */
    mlfSize(mlfVarargout(&samples, &channels, NULL), mclVa(y, "y"), NULL);
    /*
     * 
     * 
     * % Determine number of bytes in chunks
     * % (not including pad bytes, if needed):
     * % ----------------------------------
     * %  'RIFF'           4 bytes
     * %  size             4 bytes (ulong)
     * %  'WAVE'           4 bytes
     * %  'fmt '           4 bytes
     * %  size             4 bytes (ulong)
     * % <wave-format>     14 bytes
     * % <format_specific> 2 bytes (PCM)
     * %  'data'           4 bytes
     * %  size             4 bytes (ulong)
     * % <wave-data>       N bytes
     * % ----------------------------------
     * bytes_per_sample = ceil(nbits/8);
     */
    mlfAssign(
      &bytes_per_sample,
      mlfCeil(mclMrdivide(mclVa(nbits, "nbits"), _mxarray7_)));
    /*
     * total_samples    = samples * channels;
     */
    mlfAssign(
      &total_samples,
      mclMtimes(mclVv(samples, "samples"), mclVv(channels, "channels")));
    /*
     * total_bytes      = total_samples * bytes_per_sample;
     */
    mlfAssign(
      &total_bytes,
      mclMtimes(
        mclVv(total_samples, "total_samples"),
        mclVv(bytes_per_sample, "bytes_per_sample")));
    /*
     * 
     * riff_cksize = 36+total_bytes;   % Don't include 'RIFF' or its size field
     */
    mlfAssign(
      &riff_cksize, mclPlus(_mxarray8_, mclVv(total_bytes, "total_bytes")));
    /*
     * fmt_cksize  = 16;               % Don't include 'fmt ' or its size field
     */
    mlfAssign(&fmt_cksize, _mxarray3_);
    /*
     * data_cksize = total_bytes;      % Don't include 'data' or its size field
     */
    mlfAssign(&data_cksize, mclVv(total_bytes, "total_bytes"));
    /*
     * 
     * % Determine pad bytes:
     * data_pad    = rem(data_cksize,2);
     */
    mlfAssign(&data_pad, mlfRem(mclVv(data_cksize, "data_cksize"), _mxarray0_));
    /*
     * riff_cksize = riff_cksize + data_pad; % + fmt_pad, always 0
     */
    mlfAssign(
      &riff_cksize,
      mclPlus(mclVv(riff_cksize, "riff_cksize"), mclVv(data_pad, "data_pad")));
    /*
     * 
     * % Open file for output:
     * [fid,err] = OpenWaveWrite(wavefile);
     */
    mlfAssign(
      &fid, mlfWavwrite_OpenWaveWrite(&err, mclVa(wavefile, "wavefile")));
    /*
     * error(err);
     */
    mlfError(mclVv(err, "err"), NULL);
    /*
     * 
     * % Prepare basic chunk structure fields:
     * ck=[]; ck.fid=fid; ck.filename = wavefile;
     */
    mlfAssign(&ck, _mxarray9_);
    mlfIndexAssign(&ck, ".fid", mclVv(fid, "fid"));
    mlfIndexAssign(&ck, ".filename", mclVa(wavefile, "wavefile"));
    /*
     * 
     * % Write RIFF chunk:
     * ck.ID   = 'RIFF';
     */
    mlfIndexAssign(&ck, ".ID", _mxarray10_);
    /*
     * ck.Size = riff_cksize;
     */
    mlfIndexAssign(&ck, ".Size", mclVv(riff_cksize, "riff_cksize"));
    /*
     * error(write_ckinfo(ck));
     */
    mlfError(mlfWavwrite_write_ckinfo(mclVv(ck, "ck")), NULL);
    /*
     * 
     * % Write WAVE subchunk:
     * ck.ID   = 'WAVE';
     */
    mlfIndexAssign(&ck, ".ID", _mxarray12_);
    /*
     * ck.Size = [];  % Indicate a subchunk (no chunk size)
     */
    mlfIndexAssign(&ck, ".Size", _mxarray9_);
    /*
     * error(write_ckinfo(ck));
     */
    mlfError(mlfWavwrite_write_ckinfo(mclVv(ck, "ck")), NULL);
    /*
     * 
     * % Write <fmt-ck>:
     * ck.ID   = 'fmt ';
     */
    mlfIndexAssign(&ck, ".ID", _mxarray14_);
    /*
     * ck.Size = fmt_cksize;
     */
    mlfIndexAssign(&ck, ".Size", mclVv(fmt_cksize, "fmt_cksize"));
    /*
     * error(write_ckinfo(ck));
     */
    mlfError(mlfWavwrite_write_ckinfo(mclVv(ck, "ck")), NULL);
    /*
     * 
     * % Write <wave-format>:
     * fmt.filename        = wavefile;
     */
    mlfIndexAssign(&fmt, ".filename", mclVa(wavefile, "wavefile"));
    /*
     * if nbits == 32,
     */
    if (mclEqBool(mclVa(nbits, "nbits"), _mxarray16_)) {
        /*
         * fmt.wFormatTag  = 3;            % Data encoding format (1=PCM, 3=Type 3 32-bit)
         */
        mlfIndexAssign(&fmt, ".wFormatTag", _mxarray17_);
    /*
     * else
     */
    } else {
        /*
         * fmt.wFormatTag  = 1;            
         */
        mlfIndexAssign(&fmt, ".wFormatTag", _mxarray6_);
    /*
     * end
     */
    }
    /*
     * fmt.nChannels       = channels;     % Number of channels
     */
    mlfIndexAssign(&fmt, ".nChannels", mclVv(channels, "channels"));
    /*
     * fmt.nSamplesPerSec  = Fs;           % Samples per second
     */
    mlfIndexAssign(&fmt, ".nSamplesPerSec", mclVa(Fs, "Fs"));
    /*
     * fmt.nAvgBytesPerSec = channels*bytes_per_sample*Fs; % Avg transfer rate
     */
    mlfIndexAssign(
      &fmt,
      ".nAvgBytesPerSec",
      mclMtimes(
        mclMtimes(
          mclVv(channels, "channels"),
          mclVv(bytes_per_sample, "bytes_per_sample")),
        mclVa(Fs, "Fs")));
    /*
     * fmt.nBlockAlign     = channels*bytes_per_sample;    % Block alignment
     */
    mlfIndexAssign(
      &fmt,
      ".nBlockAlign",
      mclMtimes(
        mclVv(channels, "channels"),
        mclVv(bytes_per_sample, "bytes_per_sample")));
    /*
     * fmt.nBitsPerSample  = nbits;        % standard <PCM-format-specific> info
     */
    mlfIndexAssign(&fmt, ".nBitsPerSample", mclVa(nbits, "nbits"));
    /*
     * error(write_wavefmt(fid,fmt));
     */
    mlfError(
      mlfWavwrite_write_wavefmt(mclVv(fid, "fid"), mclVv(fmt, "fmt")), NULL);
    /*
     * 
     * % Write <data-ck>:
     * ck.ID   = 'data';
     */
    mlfIndexAssign(&ck, ".ID", _mxarray18_);
    /*
     * ck.Size = data_cksize;
     */
    mlfIndexAssign(&ck, ".Size", mclVv(data_cksize, "data_cksize"));
    /*
     * error(write_ckinfo(ck));
     */
    mlfError(mlfWavwrite_write_ckinfo(mclVv(ck, "ck")), NULL);
    /*
     * 
     * % Write <wave-data>, and its pad byte if needed:
     * error(write_wavedat(fid,fmt,y));
     */
    mlfError(
      mlfWavwrite_write_wavedat(
        mclVv(fid, "fid"), mclVv(fmt, "fmt"), mclVa(y, "y")),
      NULL);
    /*
     * 
     * % Close file:
     * fclose(fid);
     */
    mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
    mxDestroyArray(ans);
    mxDestroyArray(samples);
    mxDestroyArray(channels);
    mxDestroyArray(bytes_per_sample);
    mxDestroyArray(total_samples);
    mxDestroyArray(total_bytes);
    mxDestroyArray(riff_cksize);
    mxDestroyArray(fmt_cksize);
    mxDestroyArray(data_cksize);
    mxDestroyArray(data_pad);
    mxDestroyArray(fid);
    mxDestroyArray(err);
    mxDestroyArray(ck);
    mxDestroyArray(fmt);
    mxDestroyArray(wavefile);
    mxDestroyArray(nbits);
    mxDestroyArray(Fs);
    mxDestroyArray(y);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % end of wavwrite()
     * 
     * 
     * % ------------------------------------------------------------------------
     * % Private functions:
     * % ------------------------------------------------------------------------
     * 
     * 
     * % ------------------------------------------------------------------------
     */
}

/*
 * The function "Mwavwrite_OpenWaveWrite" is the implementation version of the
 * "wavwrite/OpenWaveWrite" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 126-146). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [fid,err] = OpenWaveWrite(wavefile)
 */
static mxArray * Mwavwrite_OpenWaveWrite(mxArray * * err,
                                         int nargout_,
                                         mxArray * wavefile) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavwrite);
    mxArray * fid = NULL;
    mclCopyArray(&wavefile);
    /*
     * % OpenWaveWrite
     * %   Open WAV file for writing.
     * %   If filename does not contain an extension, add ".wav"
     * 
     * fid = [];
     */
    mlfAssign(&fid, _mxarray9_);
    /*
     * err = '';
     */
    mlfAssign(err, _mxarray20_);
    /*
     * if ~isstr(wavefile),
     */
    if (mclNotBool(mlfIsstr(mclVa(wavefile, "wavefile")))) {
        /*
         * err='Wave file name must be a string.'; return;
         */
        mlfAssign(err, _mxarray21_);
        goto return_;
    /*
     * end
     */
    }
    /*
     * if isempty(findstr(wavefile,'.')),
     */
    if (mlfTobool(
          mlfIsempty(mlfFindstr(mclVa(wavefile, "wavefile"), _mxarray23_)))) {
        /*
         * wavefile=[wavefile '.wav'];
         */
        mlfAssign(
          &wavefile,
          mlfHorzcat(mclVa(wavefile, "wavefile"), _mxarray25_, NULL));
    /*
     * end
     */
    }
    /*
     * % Open file, little-endian:
     * [fid,err] = fopen(wavefile,'wb','l');
     */
    mlfAssign(
      &fid,
      mlfFopen(
        err, NULL, mclVa(wavefile, "wavefile"), _mxarray27_, _mxarray29_));
    /*
     * 
     * return
     * 
     * 
     * % ------------------------------------------------------------------------
     */
    return_:
    mclValidateOutput(fid, 1, nargout_, "fid", "wavwrite/OpenWaveWrite");
    mclValidateOutput(*err, 2, nargout_, "err", "wavwrite/OpenWaveWrite");
    mxDestroyArray(wavefile);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return fid;
}

/*
 * The function "Mwavwrite_write_ckinfo" is the implementation version of the
 * "wavwrite/write_ckinfo" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 146-175). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function err = write_ckinfo(ck)
 */
static mxArray * Mwavwrite_write_ckinfo(int nargout_, mxArray * ck) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavwrite);
    mxArray * err = NULL;
    mxArray * errmsg = NULL;
    mclCopyArray(&ck);
    /*
     * % WRITE_CKINFO: Writes next RIFF chunk, but not the chunk data.
     * %   Assumes the following fields in ck:
     * %         .fid   File ID to an open file
     * %         .ID    4-character string chunk identifier
     * %         .Size  Size of chunk (empty if subchunk)
     * %
     * %
     * %   Expects an open FID pointing to first byte of chunk header,
     * %   and a chunk structure.
     * %   ck.fid, ck.ID, ck.Size, ck.Data
     * 
     * errmsg = ['Failed to write ' ck.ID ' chunk to WAVE file: ' ck.filename];
     */
    mlfAssign(
      &errmsg,
      mlfHorzcat(
        _mxarray31_,
        mlfIndexRef(mclVa(ck, "ck"), ".ID"),
        _mxarray33_,
        mlfIndexRef(mclVa(ck, "ck"), ".filename"),
        NULL));
    /*
     * err    = '';
     */
    mlfAssign(&err, _mxarray20_);
    /*
     * 
     * if (fwrite(ck.fid, ck.ID, 'char') ~= 4),
     */
    if (mclNeBool(
          mclFeval(
            mclValueVarargout(),
            mlxFwrite,
            mlfIndexRef(mclVa(ck, "ck"), ".fid"),
            mlfIndexRef(mclVa(ck, "ck"), ".ID"),
            _mxarray35_,
            NULL),
          _mxarray1_)) {
        /*
         * err=errmsg; return;
         */
        mlfAssign(&err, mclVv(errmsg, "errmsg"));
        goto return_;
    /*
     * end
     */
    }
    /*
     * 
     * if ~isempty(ck.Size),
     */
    if (mclNotBool(
          mclFeval(
            mclValueVarargout(),
            mlxIsempty,
            mlfIndexRef(mclVa(ck, "ck"), ".Size"),
            NULL))) {
        /*
         * % Write chunk size:
         * if (fwrite(ck.fid, ck.Size, 'ulong') ~= 1),
         */
        if (mclNeBool(
              mclFeval(
                mclValueVarargout(),
                mlxFwrite,
                mlfIndexRef(mclVa(ck, "ck"), ".fid"),
                mlfIndexRef(mclVa(ck, "ck"), ".Size"),
                _mxarray37_,
                NULL),
              _mxarray6_)) {
            /*
             * err=errmsg; return;
             */
            mlfAssign(&err, mclVv(errmsg, "errmsg"));
            goto return_;
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    /*
     * 
     * return
     * 
     * % ------------------------------------------------------------------------
     */
    return_:
    mclValidateOutput(err, 1, nargout_, "err", "wavwrite/write_ckinfo");
    mxDestroyArray(errmsg);
    mxDestroyArray(ck);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return err;
}

/*
 * The function "Mwavwrite_write_wavefmt" is the implementation version of the
 * "wavwrite/write_wavefmt" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 175-208). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function err = write_wavefmt(fid, fmt)
 */
static mxArray * Mwavwrite_write_wavefmt(int nargout_,
                                         mxArray * fid,
                                         mxArray * fmt) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavwrite);
    mxArray * err = NULL;
    mxArray * errmsg = NULL;
    mclCopyArray(&fid);
    mclCopyArray(&fmt);
    /*
     * % WRITE_WAVEFMT: Write WAVE format chunk.
     * %   Assumes fid points to the wave-format subchunk.
     * %   Requires chunk structure to be passed, indicating
     * %   the length of the chunk.
     * 
     * errmsg = ['Failed to write WAVE format chunk to file' fmt.filename];
     */
    mlfAssign(
      &errmsg,
      mlfHorzcat(
        _mxarray39_, mlfIndexRef(mclVa(fmt, "fmt"), ".filename"), NULL));
    /*
     * err    = '';
     */
    mlfAssign(&err, _mxarray20_);
    /*
     * 
     * % Create <wave-format> data:
     * if (fwrite(fid, fmt.wFormatTag,      'ushort') ~= 1) | ...
     */
    {
        mxArray * a_
          = mclInitialize(
              mclNe(
                mclFeval(
                  mclValueVarargout(),
                  mlxFwrite,
                  mclVa(fid, "fid"),
                  mlfIndexRef(mclVa(fmt, "fmt"), ".wFormatTag"),
                  _mxarray41_,
                  NULL),
                _mxarray6_));
        if (mlfTobool(a_)) {
            /*
             * (fwrite(fid, fmt.nChannels,       'ushort') ~= 1) | ...
             */
            mlfAssign(&a_, mlfScalar(1));
        } else {
            mlfAssign(
              &a_,
              mclOr(
                a_,
                mclNe(
                  mclFeval(
                    mclValueVarargout(),
                    mlxFwrite,
                    mclVa(fid, "fid"),
                    mlfIndexRef(mclVa(fmt, "fmt"), ".nChannels"),
                    _mxarray41_,
                    NULL),
                  _mxarray6_)));
        }
        if (mlfTobool(a_)) {
            /*
             * (fwrite(fid, fmt.nSamplesPerSec,  'ulong' ) ~= 1) | ...
             */
            mlfAssign(&a_, mlfScalar(1));
        } else {
            mlfAssign(
              &a_,
              mclOr(
                a_,
                mclNe(
                  mclFeval(
                    mclValueVarargout(),
                    mlxFwrite,
                    mclVa(fid, "fid"),
                    mlfIndexRef(mclVa(fmt, "fmt"), ".nSamplesPerSec"),
                    _mxarray37_,
                    NULL),
                  _mxarray6_)));
        }
        if (mlfTobool(a_)) {
            mlfAssign(&a_, mlfScalar(1));
        } else {
            mlfAssign(
              &a_,
              mclOr(
                a_,
                mclNe(
                  mclFeval(
                    mclValueVarargout(),
                    mlxFwrite,
                    mclVa(fid, "fid"),
                    mlfIndexRef(mclVa(fmt, "fmt"), ".nAvgBytesPerSec"),
                    _mxarray37_,
                    NULL),
                  _mxarray6_)));
        }
        if (mlfTobool(a_)
            || mlfTobool(
                 mclOr(
                   a_,
                   mclNe(
                     mclFeval(
                       mclValueVarargout(),
                       mlxFwrite,
                       mclVa(fid, "fid"),
                       mlfIndexRef(mclVa(fmt, "fmt"), ".nBlockAlign"),
                       _mxarray41_,
                       NULL),
                     _mxarray6_)))) {
            mxDestroyArray(a_);
            /*
             * (fwrite(fid, fmt.nAvgBytesPerSec, 'ulong' ) ~= 1) | ...
             * (fwrite(fid, fmt.nBlockAlign,     'ushort') ~= 1),
             * err=errmsg; return;
             */
            mlfAssign(&err, mclVv(errmsg, "errmsg"));
            goto return_;
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * % Write format-specific info:
     * if fmt.wFormatTag==1 | fmt.wFormatTag==3,
     */
    {
        mxArray * a_
          = mclInitialize(
              mclFeval(
                mclValueVarargout(),
                mlxEq,
                mlfIndexRef(mclVa(fmt, "fmt"), ".wFormatTag"),
                _mxarray6_,
                NULL));
        if (mlfTobool(a_)
            || mlfTobool(
                 mclOr(
                   a_,
                   mclFeval(
                     mclValueVarargout(),
                     mlxEq,
                     mlfIndexRef(mclVa(fmt, "fmt"), ".wFormatTag"),
                     _mxarray17_,
                     NULL)))) {
            mxDestroyArray(a_);
            /*
             * % Write standard <PCM-format-specific> info:
             * if (fwrite(fid, fmt.nBitsPerSample, 'ushort') ~= 1),
             */
            if (mclNeBool(
                  mclFeval(
                    mclValueVarargout(),
                    mlxFwrite,
                    mclVa(fid, "fid"),
                    mlfIndexRef(mclVa(fmt, "fmt"), ".nBitsPerSample"),
                    _mxarray41_,
                    NULL),
                  _mxarray6_)) {
                /*
                 * err=errmsg; return;
                 */
                mlfAssign(&err, mclVv(errmsg, "errmsg"));
                goto return_;
            /*
             * end
             */
            }
        /*
         * 
         * else
         */
        } else {
            mxDestroyArray(a_);
            /*
             * err='Unknown data format.';
             */
            mlfAssign(&err, _mxarray43_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * return
     * 
     * 
     * % -----------------------------------------------------------------------
     */
    return_:
    mclValidateOutput(err, 1, nargout_, "err", "wavwrite/write_wavefmt");
    mxDestroyArray(errmsg);
    mxDestroyArray(fmt);
    mxDestroyArray(fid);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return err;
}

/*
 * The function "Mwavwrite_PCM_Quantize" is the implementation version of the
 * "wavwrite/PCM_Quantize" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 208-255). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function y = PCM_Quantize(x, fmt)
 */
static mxArray * Mwavwrite_PCM_Quantize(int nargout_,
                                        mxArray * x,
                                        mxArray * fmt) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavwrite);
    mxArray * y = NULL;
    mxArray * i = NULL;
    mxArray * qlim = NULL;
    mxArray * ylim = NULL;
    mxArray * ans = NULL;
    mxArray * b = NULL;
    mxArray * m = NULL;
    mxArray * nbits = NULL;
    mxArray * ClipWarn = NULL;
    mxArray * ClipMsg = NULL;
    mclCopyArray(&x);
    mclCopyArray(&fmt);
    /*
     * % PCM_Quantize:
     * %   Scale and quantize input data, from [-1, +1] range to
     * %   either an 8-, 16-, or 24-bit data range.
     * 
     * % Clip data to normalized range [-1,+1]:
     * ClipMsg  = ['Data clipped during write to file:' fmt.filename];
     */
    mlfAssign(
      &ClipMsg,
      mlfHorzcat(
        _mxarray45_, mlfIndexRef(mclVa(fmt, "fmt"), ".filename"), NULL));
    /*
     * ClipWarn = 0;
     */
    mlfAssign(&ClipWarn, _mxarray47_);
    /*
     * 
     * % Determine slope (m) and bias (b) for data scaling:
     * nbits = fmt.nBitsPerSample;
     */
    mlfAssign(&nbits, mlfIndexRef(mclVa(fmt, "fmt"), ".nBitsPerSample"));
    /*
     * m = 2.^(nbits-1);
     */
    mlfAssign(
      &m, mlfPower(_mxarray0_, mclMinus(mclVv(nbits, "nbits"), _mxarray6_)));
    /*
     * 
     * switch nbits
     */
    {
        mxArray * v_ = mclInitialize(mclVv(nbits, "nbits"));
        if (mclSwitchCompare(v_, _mxarray7_)) {
            /*
             * case 8,
             * b=128;
             */
            mlfAssign(&b, _mxarray48_);
        /*
         * case {16,24},
         */
        } else if (mclSwitchCompare(v_, _mxarray49_)) {
            /*
             * b=0;
             */
            mlfAssign(&b, _mxarray47_);
        /*
         * otherwise,
         */
        } else {
            /*
             * error('Invalid number of bits specified.');
             */
            mlfError(_mxarray52_, NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * y = round(m .* x + b);
     */
    mlfAssign(
      &y,
      mlfRound(mclPlus(mclTimes(mclVv(m, "m"), mclVa(x, "x")), mclVv(b, "b"))));
    /*
     * 
     * % Determine quantized data limits, based on the
     * % presumed input data limits of [-1, +1]:
     * ylim = [-1 +1];
     */
    mlfAssign(&ylim, _mxarray54_);
    /*
     * qlim = m * ylim + b;
     */
    mlfAssign(
      &qlim,
      mclPlus(mclMtimes(mclVv(m, "m"), mclVv(ylim, "ylim")), mclVv(b, "b")));
    /*
     * qlim(2) = qlim(2)-1;
     */
    mclIntArrayAssign1(
      &qlim, mclMinus(mclIntArrayRef1(mclVv(qlim, "qlim"), 2), _mxarray6_), 2);
    /*
     * 
     * % Clip data to quantizer limits:
     * i = find(y < qlim(1));
     */
    mlfAssign(
      &i,
      mlfFind(
        NULL,
        NULL,
        mclLt(mclVv(y, "y"), mclIntArrayRef1(mclVv(qlim, "qlim"), 1))));
    /*
     * if ~isempty(i),
     */
    if (mclNotBool(mlfIsempty(mclVv(i, "i")))) {
        /*
         * warning(ClipMsg); ClipWarn=1;
         */
        mclAssignAns(
          &ans, mlfNWarning(0, NULL, mclVv(ClipMsg, "ClipMsg"), NULL));
        mlfAssign(&ClipWarn, _mxarray6_);
        /*
         * y(i) = qlim(1);
         */
        mclArrayAssign1(
          &y, mclIntArrayRef1(mclVv(qlim, "qlim"), 1), mclVv(i, "i"));
    /*
     * end
     */
    }
    /*
     * 
     * i = find(y > qlim(2));
     */
    mlfAssign(
      &i,
      mlfFind(
        NULL,
        NULL,
        mclGt(mclVv(y, "y"), mclIntArrayRef1(mclVv(qlim, "qlim"), 2))));
    /*
     * if ~isempty(i),
     */
    if (mclNotBool(mlfIsempty(mclVv(i, "i")))) {
        /*
         * if ~ClipWarn, warning(ClipMsg); end
         */
        if (mclNotBool(mclVv(ClipWarn, "ClipWarn"))) {
            mclAssignAns(
              &ans, mlfNWarning(0, NULL, mclVv(ClipMsg, "ClipMsg"), NULL));
        }
        /*
         * y(i) = qlim(2);
         */
        mclArrayAssign1(
          &y, mclIntArrayRef1(mclVv(qlim, "qlim"), 2), mclVv(i, "i"));
    /*
     * end
     */
    }
    mclValidateOutput(y, 1, nargout_, "y", "wavwrite/PCM_Quantize");
    mxDestroyArray(ClipMsg);
    mxDestroyArray(ClipWarn);
    mxDestroyArray(nbits);
    mxDestroyArray(m);
    mxDestroyArray(b);
    mxDestroyArray(ans);
    mxDestroyArray(ylim);
    mxDestroyArray(qlim);
    mxDestroyArray(i);
    mxDestroyArray(fmt);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
    /*
     * 
     * return
     * 
     * 
     * % -----------------------------------------------------------------------
     */
}

/*
 * The function "Mwavwrite_write_wavedat" is the implementation version of the
 * "wavwrite/write_wavedat" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavwrite.m" (lines 255-308). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function err = write_wavedat(fid,fmt,data)
 */
static mxArray * Mwavwrite_write_wavedat(int nargout_,
                                         mxArray * fid,
                                         mxArray * fmt,
                                         mxArray * data) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavwrite);
    mxArray * err = NULL;
    mxArray * ans = NULL;
    mxArray * BytesPerSample = NULL;
    mxArray * total_samples = NULL;
    mxArray * channels = NULL;
    mxArray * samples = NULL;
    mxArray * dtype = NULL;
    mclCopyArray(&fid);
    mclCopyArray(&fmt);
    mclCopyArray(&data);
    /*
     * % WRITE_WAVEDAT: Write WAVE data chunk
     * %   Assumes fid points to the wave-data chunk
     * %   Requires <wave-format> structure to be passed.
     * 
     * err = '';
     */
    mlfAssign(&err, _mxarray20_);
    /*
     * 
     * if fmt.wFormatTag==1 | fmt.wFormatTag==3,
     */
    {
        mxArray * a_
          = mclInitialize(
              mclFeval(
                mclValueVarargout(),
                mlxEq,
                mlfIndexRef(mclVa(fmt, "fmt"), ".wFormatTag"),
                _mxarray6_,
                NULL));
        if (mlfTobool(a_)
            || mlfTobool(
                 mclOr(
                   a_,
                   mclFeval(
                     mclValueVarargout(),
                     mlxEq,
                     mlfIndexRef(mclVa(fmt, "fmt"), ".wFormatTag"),
                     _mxarray17_,
                     NULL)))) {
            mxDestroyArray(a_);
            /*
             * % PCM Format
             * 
             * % 32-bit Type 3 is normalized, so no scaling needed.
             * if fmt.nBitsPerSample ~= 32,
             */
            if (mlfTobool(
                  mclFeval(
                    mclValueVarargout(),
                    mlxNe,
                    mlfIndexRef(mclVa(fmt, "fmt"), ".nBitsPerSample"),
                    _mxarray16_,
                    NULL))) {
                /*
                 * data = PCM_Quantize(data, fmt);
                 */
                mlfAssign(
                  &data,
                  mlfWavwrite_PCM_Quantize(
                    mclVa(data, "data"), mclVa(fmt, "fmt")));
            /*
             * end
             */
            }
            /*
             * 
             * switch fmt.nBitsPerSample
             */
            {
                mxArray * v_
                  = mclInitialize(
                      mlfIndexRef(mclVa(fmt, "fmt"), ".nBitsPerSample"));
                if (mclSwitchCompare(v_, _mxarray7_)) {
                    /*
                     * case 8,
                     * dtype='uchar'; % unsigned 8-bit
                     */
                    mlfAssign(&dtype, _mxarray56_);
                /*
                 * case 16,
                 */
                } else if (mclSwitchCompare(v_, _mxarray3_)) {
                    /*
                     * dtype='short'; % signed 16-bit
                     */
                    mlfAssign(&dtype, _mxarray58_);
                /*
                 * case 24,
                 */
                } else if (mclSwitchCompare(v_, _mxarray51_)) {
                    /*
                     * dtype='bit24'; % signed 24-bit
                     */
                    mlfAssign(&dtype, _mxarray60_);
                /*
                 * case 32,
                 */
                } else if (mclSwitchCompare(v_, _mxarray16_)) {
                    /*
                     * dtype='float'; % normalized 32-bit floating point
                     */
                    mlfAssign(&dtype, _mxarray62_);
                /*
                 * otherwise,
                 */
                } else {
                    /*
                     * err = 'Invalid number of bits specified.'; return;
                     */
                    mlfAssign(&err, _mxarray52_);
                    mxDestroyArray(v_);
                    goto return_;
                /*
                 * end
                 */
                }
                mxDestroyArray(v_);
            }
            /*
             * 
             * % Write data, one row at a time (one sample from each channel):
             * [samples,channels] = size(data);
             */
            mlfSize(
              mlfVarargout(&samples, &channels, NULL),
              mclVa(data, "data"),
              NULL);
            /*
             * total_samples = samples*channels;
             */
            mlfAssign(
              &total_samples,
              mclMtimes(
                mclVv(samples, "samples"), mclVv(channels, "channels")));
            /*
             * 
             * if (fwrite(fid, reshape(data',total_samples,1), dtype) ~= total_samples),
             */
            if (mclNeBool(
                  mlfFwrite(
                    mclVa(fid, "fid"),
                    mlfReshape(
                      mlfCtranspose(mclVa(data, "data")),
                      mclVv(total_samples, "total_samples"), _mxarray6_, NULL),
                    mclVv(dtype, "dtype"),
                    NULL),
                  mclVv(total_samples, "total_samples"))) {
                /*
                 * err = 'Failed to write PCM data samples.'; return;
                 */
                mlfAssign(&err, _mxarray64_);
                goto return_;
            /*
             * end
             */
            }
            /*
             * 
             * % Determine # bytes/sample - format requires rounding
             * %  to next integer number of bytes:
             * BytesPerSample = ceil(fmt.nBitsPerSample/8);
             */
            mlfAssign(
              &BytesPerSample,
              mlfCeil(
                mclFeval(
                  mclValueVarargout(),
                  mlxMrdivide,
                  mlfIndexRef(mclVa(fmt, "fmt"), ".nBitsPerSample"),
                  _mxarray7_,
                  NULL)));
            /*
             * 
             * % Determine if a pad-byte must be appended to data chunk:
             * if rem(total_samples*BytesPerSample, 2) ~= 0,
             */
            if (mclNeBool(
                  mlfRem(
                    mclMtimes(
                      mclVv(total_samples, "total_samples"),
                      mclVv(BytesPerSample, "BytesPerSample")),
                    _mxarray0_),
                  _mxarray47_)) {
                /*
                 * fwrite(fid,0,'uchar');
                 */
                mclAssignAns(
                  &ans,
                  mlfFwrite(mclVa(fid, "fid"), _mxarray47_, _mxarray56_, NULL));
            /*
             * end
             */
            }
        /*
         * 
         * else
         */
        } else {
            mxDestroyArray(a_);
            /*
             * % Unknown wave-format for data.
             * err = 'Unsupported data format.';
             */
            mlfAssign(&err, _mxarray66_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * return
     * 
     * % end of wavwrite.m
     */
    return_:
    mclValidateOutput(err, 1, nargout_, "err", "wavwrite/write_wavedat");
    mxDestroyArray(dtype);
    mxDestroyArray(samples);
    mxDestroyArray(channels);
    mxDestroyArray(total_samples);
    mxDestroyArray(BytesPerSample);
    mxDestroyArray(ans);
    mxDestroyArray(data);
    mxDestroyArray(fmt);
    mxDestroyArray(fid);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return err;
}
