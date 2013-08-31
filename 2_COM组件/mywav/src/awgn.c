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
#include "awgn.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "wgn.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;

static mxChar _array5_[2] = { 'd', 'b' };
static mxArray * _mxarray4_;

static mxChar _array7_[7] = { 's', 'p', 'e', 'c', 'i', 'f', 'y' };
static mxArray * _mxarray6_;
static mxArray * _mxarray8_;
static mxArray * _mxarray9_;

static mxChar _array11_[1] = { '/' };
static mxArray * _mxarray10_;

static mxChar _array13_[1] = { 's' };
static mxArray * _mxarray12_;

static mxChar _array15_[1] = { 'n' };
static mxArray * _mxarray14_;

static mxChar _array17_[46] = { 'O', 'n', 'l', 'y', ' ', 's', 't', 'r',
                                'i', 'n', 'g', ' ', 'a', 'n', 'd', ' ',
                                'n', 'u', 'm', 'e', 'r', 'i', 'c', ' ',
                                'a', 'r', 'g', 'u', 'm', 'e', 'n', 't',
                                's', ' ', 'a', 'r', 'e', ' ', 'a', 'l',
                                'l', 'o', 'w', 'e', 'd', '.' };
static mxArray * _mxarray16_;

static mxChar _array19_[3] = { 'n', '/', 'n' };
static mxArray * _mxarray18_;

static mxChar _array21_[5] = { 'n', '/', 'n', '/', 'n' };
static mxArray * _mxarray20_;
static mxArray * _mxarray22_;

static mxChar _array24_[5] = { 'n', '/', 'n', '/', 's' };
static mxArray * _mxarray23_;

static mxChar _array26_[7] = { 'n', '/', 'n', '/', 'n', '/', 'n' };
static mxArray * _mxarray25_;
static mxArray * _mxarray27_;

static mxChar _array29_[7] = { 'n', '/', 'n', '/', 's', '/', 'n' };
static mxArray * _mxarray28_;

static mxChar _array31_[7] = { 'n', '/', 'n', '/', 'n', '/', 's' };
static mxArray * _mxarray30_;

static mxChar _array33_[7] = { 'n', '/', 'n', '/', 's', '/', 's' };
static mxArray * _mxarray32_;

static mxChar _array35_[9] = { 'n', '/', 'n', '/', 'n', '/', 'n', '/', 's' };
static mxArray * _mxarray34_;

static mxChar _array37_[9] = { 'n', '/', 'n', '/', 's', '/', 'n', '/', 's' };
static mxArray * _mxarray36_;

static mxChar _array39_[13] = { 'S', 'y', 'n', 't', 'a', 'x', ' ',
                                'e', 'r', 'r', 'o', 'r', '.' };
static mxArray * _mxarray38_;

static mxChar _array41_[30] = { 'A', 'n', ' ', 'i', 'n', 'p', 'u', 't',
                                ' ', 's', 'i', 'g', 'n', 'a', 'l', ' ',
                                'm', 'u', 's', 't', ' ', 'b', 'e', ' ',
                                'g', 'i', 'v', 'e', 'n', '.' };
static mxArray * _mxarray40_;

static mxChar _array43_[49] = { 'T', 'h', 'e', ' ', 'i', 'n', 'p', 'u', 't',
                                ' ', 's', 'i', 'g', 'n', 'a', 'l', ' ', 'm',
                                'u', 's', 't', ' ', 'h', 'a', 'v', 'e', ' ',
                                '2', ' ', 'o', 'r', ' ', 'f', 'e', 'w', 'e',
                                'r', ' ', 'd', 'i', 'm', 'e', 'n', 's', 'i',
                                'o', 'n', 's', '.' };
static mxArray * _mxarray42_;

static mxChar _array45_[8] = { 'm', 'e', 'a', 's', 'u', 'r', 'e', 'd' };
static mxArray * _mxarray44_;

static mxChar _array47_[57] = { 'T', 'h', 'e', ' ', 's', 'i', 'g', 'n', 'a',
                                'l', ' ', 'p', 'o', 'w', 'e', 'r', ' ', 'p',
                                'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', ' ',
                                'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 'n',
                                'u', 'm', 'e', 'r', 'i', 'c', ' ', 'o', 'r',
                                ' ', 0x0027, 'm', 'e', 'a', 's', 'u', 'r',
                                'e', 'd', 0x0027, '.' };
static mxArray * _mxarray46_;

static mxChar _array51_[6] = { 'l', 'i', 'n', 'e', 'a', 'r' };
static mxArray * _mxarray50_;

static mxArray * _array49_[2] = { NULL /*_mxarray4_*/, NULL /*_mxarray50_*/ };
static mxArray * _mxarray48_;

static mxChar _array53_[47] = { 'T', 'h', 'e', ' ', 's', 'i', 'g', 'n', 'a',
                                'l', ' ', 'p', 'o', 'w', 'e', 'r', ' ', 'm',
                                'o', 'd', 'e', ' ', 'm', 'u', 's', 't', ' ',
                                'b', 'e', ' ', 0x0027, 'd', 'b', 0x0027,
                                ' ', 'o', 'r', ' ', 0x0027, 'l', 'i', 'n',
                                'e', 'a', 'r', 0x0027, '.' };
static mxArray * _mxarray52_;

static mxChar _array55_[48] = { 'T', 'h', 'e', ' ', 's', 'i', 'g', 'n',
                                'a', 'l', '-', 't', 'o', '-', 'n', 'o',
                                'i', 's', 'e', ' ', 'r', 'a', 't', 'i',
                                'o', ' ', 'm', 'u', 's', 't', ' ', 'b',
                                'e', ' ', 'a', ' ', 'r', 'e', 'a', 'l',
                                ' ', 's', 'c', 'a', 'l', 'a', 'r', '.' };
static mxArray * _mxarray54_;

static mxChar _array57_[54] = { 'I', 'n', ' ', 'l', 'i', 'n', 'e', 'a', 'r',
                                ' ', 'm', 'o', 'd', 'e', ',', ' ', 't', 'h',
                                'e', ' ', 's', 'i', 'g', 'n', 'a', 'l', '-',
                                't', 'o', '-', 'n', 'o', 'i', 's', 'e', ' ',
                                'r', 'a', 't', 'i', 'o', ' ', 'm', 'u', 's',
                                't', ' ', 'b', 'e', ' ', '>', ' ', '0', '.' };
static mxArray * _mxarray56_;

static mxChar _array59_[45] = { 'T', 'h', 'e', ' ', 's', 'i', 'g', 'n', 'a',
                                'l', ' ', 'p', 'o', 'w', 'e', 'r', ' ', 'v',
                                'a', 'l', 'u', 'e', ' ', 'm', 'u', 's', 't',
                                ' ', 'b', 'e', ' ', 'a', ' ', 'r', 'e', 'a',
                                'l', ' ', 's', 'c', 'a', 'l', 'a', 'r', '.' };
static mxArray * _mxarray58_;

static mxChar _array61_[46] = { 'I', 'n', ' ', 'l', 'i', 'n', 'e', 'a',
                                'r', ' ', 'm', 'o', 'd', 'e', ',', ' ',
                                't', 'h', 'e', ' ', 's', 'i', 'g', 'n',
                                'a', 'l', ' ', 'p', 'o', 'w', 'e', 'r',
                                ' ', 'm', 'u', 's', 't', ' ', 'b', 'e',
                                ' ', '>', '=', ' ', '0', '.' };
static mxArray * _mxarray60_;

static mxChar _array63_[41] = { 'T', 'h', 'e', ' ', 'S', 't', 'a', 't', 'e',
                                ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ',
                                'a', ' ', 'r', 'e', 'a', 'l', ',', ' ', 'i',
                                'n', 't', 'e', 'g', 'e', 'r', ' ', 's', 'c',
                                'a', 'l', 'a', 'r', '.' };
static mxArray * _mxarray62_;
static mxArray * _mxarray64_;

static mxChar _array66_[3] = { 'd', 'b', 'w' };
static mxArray * _mxarray65_;

static mxChar _array68_[4] = { 'r', 'e', 'a', 'l' };
static mxArray * _mxarray67_;

static mxChar _array70_[7] = { 'c', 'o', 'm', 'p', 'l', 'e', 'x' };
static mxArray * _mxarray69_;

void InitializeModule_awgn(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(5.0);
    _mxarray2_ = mclInitializeDouble(0.0);
    _mxarray3_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray4_ = mclInitializeString(2, _array5_);
    _mxarray6_ = mclInitializeString(7, _array7_);
    _mxarray8_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray9_ = mclInitializeDouble(1.0);
    _mxarray10_ = mclInitializeString(1, _array11_);
    _mxarray12_ = mclInitializeString(1, _array13_);
    _mxarray14_ = mclInitializeString(1, _array15_);
    _mxarray16_ = mclInitializeString(46, _array17_);
    _mxarray18_ = mclInitializeString(3, _array19_);
    _mxarray20_ = mclInitializeString(5, _array21_);
    _mxarray22_ = mclInitializeDouble(3.0);
    _mxarray23_ = mclInitializeString(5, _array24_);
    _mxarray25_ = mclInitializeString(7, _array26_);
    _mxarray27_ = mclInitializeDouble(4.0);
    _mxarray28_ = mclInitializeString(7, _array29_);
    _mxarray30_ = mclInitializeString(7, _array31_);
    _mxarray32_ = mclInitializeString(7, _array33_);
    _mxarray34_ = mclInitializeString(9, _array35_);
    _mxarray36_ = mclInitializeString(9, _array37_);
    _mxarray38_ = mclInitializeString(13, _array39_);
    _mxarray40_ = mclInitializeString(30, _array41_);
    _mxarray42_ = mclInitializeString(49, _array43_);
    _mxarray44_ = mclInitializeString(8, _array45_);
    _mxarray46_ = mclInitializeString(57, _array47_);
    _array49_[0] = _mxarray4_;
    _mxarray50_ = mclInitializeString(6, _array51_);
    _array49_[1] = _mxarray50_;
    _mxarray48_ = mclInitializeCellVector(1, 2, _array49_);
    _mxarray52_ = mclInitializeString(47, _array53_);
    _mxarray54_ = mclInitializeString(48, _array55_);
    _mxarray56_ = mclInitializeString(54, _array57_);
    _mxarray58_ = mclInitializeString(45, _array59_);
    _mxarray60_ = mclInitializeString(46, _array61_);
    _mxarray62_ = mclInitializeString(41, _array63_);
    _mxarray64_ = mclInitializeDouble(10.0);
    _mxarray65_ = mclInitializeString(3, _array66_);
    _mxarray67_ = mclInitializeString(4, _array68_);
    _mxarray69_ = mclInitializeString(7, _array70_);
}

void TerminateModule_awgn(void) {
    mxDestroyArray(_mxarray69_);
    mxDestroyArray(_mxarray67_);
    mxDestroyArray(_mxarray65_);
    mxDestroyArray(_mxarray64_);
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray60_);
    mxDestroyArray(_mxarray58_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mawgn(int nargout_, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_awgn
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfAwgn" contains the normal interface for the "awgn"
 * M-function from file "c:\matlab6p5\toolbox\comm\comm\awgn.m" (lines 1-248).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfAwgn(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * y = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    y = Mawgn(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfReturnValue(y);
}

/*
 * The function "mlxAwgn" contains the feval interface for the "awgn"
 * M-function from file "c:\matlab6p5\toolbox\comm\comm\awgn.m" (lines 1-248).
 * The feval function calls the implementation version of awgn through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxAwgn(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: awgn Line: 1 Column: 1 The function \"awgn\""
            " was called with more than the declared number of outputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mawgn(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 0);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "Mawgn" is the implementation version of the "awgn" M-function
 * from file "c:\matlab6p5\toolbox\comm\comm\awgn.m" (lines 1-248). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function y=awgn(varargin)
 */
static mxArray * Mawgn(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_awgn);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * y = NULL;
    mxArray * opType = NULL;
    mxArray * noisePower = NULL;
    mxArray * n = NULL;
    mxArray * sigStr = NULL;
    mxArray * state = NULL;
    mxArray * measMode = NULL;
    mxArray * pMode = NULL;
    mxArray * sigPower = NULL;
    mxArray * sig = NULL;
    mxArray * reqSNR = NULL;
    mxArray * measModeSet = NULL;
    mxArray * pModeSet = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&varargin);
    /*
     * %AWGN Add white Gaussian noise to a signal.
     * %   Y = AWGN(X,SNR) adds white Gaussian noise to X.  The SNR is in dB.
     * %   The power of X is assumed to be 0 dBW.  If X is complex, then 
     * %   AWGN adds complex noise.
     * %
     * %   Y = AWGN(X,SNR,SIGPOWER) when SIGPOWER is numeric, it represents 
     * %   the signal power in dBW. When SIGPOWER is 'measured', AWGN measures
     * %   the signal power before adding noise.
     * %
     * %   Y = AWGN(X,SNR,SIGPOWER,STATE) resets the state of RANDN to STATE.
     * %
     * %   Y = AWGN(..., POWERTYPE) specifies the units of SNR and SIGPOWER.
     * %   POWERTYPE can be 'db' or 'linear'.  If POWERTYPE is 'db', then SNR
     * %   is measured in dB and SIGPOWER is measured in dBW.  If POWERTYPE is
     * %   'linear', then SNR is measured as a ratio and SIGPOWER is measured
     * %   in Watts.
     * %
     * %   Example: To specify the power of X to be 0 dBW and add noise to produce
     * %            an SNR of 10dB, use:
     * %            X = sqrt(2)*sin(0:pi/8:6*pi);
     * %            Y = AWGN(X,10,0);
     * %
     * %   Example: To specify the power of X to be 0 dBW, set RANDN to the 1234th
     * %            state and add noise to produce an SNR of 10dB, use:
     * %            X = sqrt(2)*sin(0:pi/8:6*pi);
     * %            Y = AWGN(X,10,0,1234);
     * %
     * %   Example: To specify the power of X to be 3 Watts and add noise to
     * %            produce a linear SNR of 4, use:
     * %            X = sqrt(2)*sin(0:pi/8:6*pi);
     * %            Y = AWGN(X,4,3,'linear');
     * %
     * %   Example: To cause AWGN to measure the power of X, set RANDN to the 
     * %            1234th state and add noise to produce a linear SNR of 4, use:
     * %            X = sqrt(2)*sin(0:pi/8:6*pi);
     * %            Y = AWGN(X,4,'measured',1234,'linear');
     * %
     * %   See also WGN, RANDN.
     * 
     * %   Copyright 1996-2002 The MathWorks, Inc.
     * %   $Revision: 1.8 $  $Date: 2002/03/07 15:32:43 $ 
     * 
     * % --- Initial checks
     * error(nargchk(2,5,nargin));
     */
    mlfError(mlfNargchk(_mxarray0_, _mxarray1_, mlfScalar(nargin_)), NULL);
    /*
     * 
     * % --- Value set indicators (used for the string flags)
     * pModeSet    = 0;
     */
    mlfAssign(&pModeSet, _mxarray2_);
    /*
     * measModeSet = 0;
     */
    mlfAssign(&measModeSet, _mxarray2_);
    /*
     * 
     * % --- Set default values
     * reqSNR   = [];
     */
    mlfAssign(&reqSNR, _mxarray3_);
    /*
     * sig      = [];
     */
    mlfAssign(&sig, _mxarray3_);
    /*
     * sigPower = 0;
     */
    mlfAssign(&sigPower, _mxarray2_);
    /*
     * pMode    = 'db';
     */
    mlfAssign(&pMode, _mxarray4_);
    /*
     * measMode = 'specify';
     */
    mlfAssign(&measMode, _mxarray6_);
    /*
     * state    = [];
     */
    mlfAssign(&state, _mxarray3_);
    /*
     * 
     * % --- Placeholder for the signature string
     * sigStr = '';
     */
    mlfAssign(&sigStr, _mxarray8_);
    {
        /*
         * 
         * % --- Identify string and numeric arguments
         * for n=1:nargin
         */
        int v_ = mclForIntStart(1);
        int e_ = nargin_;
        if (v_ > e_) {
            mlfAssign(&n, _mxarray3_);
        } else {
            /*
             * if(n>1)
             * sigStr(size(sigStr,2)+1) = '/';
             * end;
             * % --- Assign the string and numeric flags
             * if(ischar(varargin{n}))
             * sigStr(size(sigStr,2)+1) = 's';
             * elseif(isnumeric(varargin{n}))
             * sigStr(size(sigStr,2)+1) = 'n';
             * else
             * error('Only string and numeric arguments are allowed.');
             * end;
             * end;
             */
            for (; ; ) {
                if (mclGtBool(mlfScalar(v_), _mxarray9_)) {
                    mclArrayAssign1(
                      &sigStr,
                      _mxarray10_,
                      mclPlus(
                        mlfSize(
                          mclValueVarargout(),
                          mclVv(sigStr, "sigStr"),
                          _mxarray0_),
                        _mxarray9_));
                }
                if (mlfTobool(
                      mclFeval(
                        mclValueVarargout(),
                        mlxIschar,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"), "{?}", mlfScalar(v_)),
                        NULL))) {
                    mclArrayAssign1(
                      &sigStr,
                      _mxarray12_,
                      mclPlus(
                        mlfSize(
                          mclValueVarargout(),
                          mclVv(sigStr, "sigStr"),
                          _mxarray0_),
                        _mxarray9_));
                } else if (mlfTobool(
                             mclFeval(
                               mclValueVarargout(),
                               mlxIsnumeric,
                               mlfIndexRef(
                                 mclVa(varargin, "varargin"),
                                 "{?}",
                                 mlfScalar(v_)),
                               NULL))) {
                    mclArrayAssign1(
                      &sigStr,
                      _mxarray14_,
                      mclPlus(
                        mlfSize(
                          mclValueVarargout(),
                          mclVv(sigStr, "sigStr"),
                          _mxarray0_),
                        _mxarray9_));
                } else {
                    mlfError(_mxarray16_, NULL);
                }
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&n, mlfScalar(v_));
        }
    }
    /*
     * 
     * % --- Identify parameter signatures and assign values to variables
     * switch sigStr
     */
    {
        mxArray * v_ = mclInitialize(mclVv(sigStr, "sigStr"));
        if (mclSwitchCompare(v_, _mxarray18_)) {
            /*
             * % --- awgn(x, snr)
             * case 'n/n'
             * sig      = varargin{1};
             */
            mlfAssign(
              &sig,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray9_));
            /*
             * reqSNR   = varargin{2};
             */
            mlfAssign(
              &reqSNR,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
        /*
         * 
         * % --- awgn(x, snr, sigPower)
         * case 'n/n/n'
         */
        } else if (mclSwitchCompare(v_, _mxarray20_)) {
            /*
             * sig      = varargin{1};
             */
            mlfAssign(
              &sig,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray9_));
            /*
             * reqSNR   = varargin{2};
             */
            mlfAssign(
              &reqSNR,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
            /*
             * sigPower = varargin{3};
             */
            mlfAssign(
              &sigPower,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray22_));
        /*
         * 
         * % --- awgn(x, snr, 'measured')
         * case 'n/n/s'
         */
        } else if (mclSwitchCompare(v_, _mxarray23_)) {
            /*
             * sig      = varargin{1};
             */
            mlfAssign(
              &sig,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray9_));
            /*
             * reqSNR   = varargin{2};
             */
            mlfAssign(
              &reqSNR,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
            /*
             * measMode = lower(varargin{3});
             */
            mlfAssign(
              &measMode,
              mclFeval(
                mclValueVarargout(),
                mlxLower,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray22_),
                NULL));
            /*
             * 
             * measModeSet = 1;
             */
            mlfAssign(&measModeSet, _mxarray9_);
        /*
         * 
         * % --- awgn(x, snr, sigPower, state)
         * case 'n/n/n/n'
         */
        } else if (mclSwitchCompare(v_, _mxarray25_)) {
            /*
             * sig      = varargin{1};
             */
            mlfAssign(
              &sig,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray9_));
            /*
             * reqSNR   = varargin{2};
             */
            mlfAssign(
              &reqSNR,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
            /*
             * sigPower = varargin{3};
             */
            mlfAssign(
              &sigPower,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray22_));
            /*
             * state    = varargin{4};
             */
            mlfAssign(
              &state,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray27_));
        /*
         * 
         * % --- awgn(x, snr, 'measured', state)
         * case 'n/n/s/n'
         */
        } else if (mclSwitchCompare(v_, _mxarray28_)) {
            /*
             * sig      = varargin{1};
             */
            mlfAssign(
              &sig,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray9_));
            /*
             * reqSNR   = varargin{2};
             */
            mlfAssign(
              &reqSNR,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
            /*
             * measMode = lower(varargin{3});
             */
            mlfAssign(
              &measMode,
              mclFeval(
                mclValueVarargout(),
                mlxLower,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray22_),
                NULL));
            /*
             * state    = varargin{4};
             */
            mlfAssign(
              &state,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray27_));
            /*
             * 
             * measModeSet = 1;
             */
            mlfAssign(&measModeSet, _mxarray9_);
        /*
         * 
         * % --- awgn(x, snr, sigPower, 'db|linear')
         * case 'n/n/n/s'
         */
        } else if (mclSwitchCompare(v_, _mxarray30_)) {
            /*
             * sig      = varargin{1};
             */
            mlfAssign(
              &sig,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray9_));
            /*
             * reqSNR   = varargin{2};
             */
            mlfAssign(
              &reqSNR,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
            /*
             * sigPower = varargin{3};
             */
            mlfAssign(
              &sigPower,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray22_));
            /*
             * pMode    = lower(varargin{4});
             */
            mlfAssign(
              &pMode,
              mclFeval(
                mclValueVarargout(),
                mlxLower,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray27_),
                NULL));
            /*
             * 
             * pModeSet = 1;
             */
            mlfAssign(&pModeSet, _mxarray9_);
        /*
         * 
         * % --- awgn(x, snr, 'measured', 'db|linear')
         * case 'n/n/s/s'
         */
        } else if (mclSwitchCompare(v_, _mxarray32_)) {
            /*
             * sig      = varargin{1};
             */
            mlfAssign(
              &sig,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray9_));
            /*
             * reqSNR   = varargin{2};
             */
            mlfAssign(
              &reqSNR,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
            /*
             * measMode = lower(varargin{3});
             */
            mlfAssign(
              &measMode,
              mclFeval(
                mclValueVarargout(),
                mlxLower,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray22_),
                NULL));
            /*
             * pMode    = lower(varargin{4});
             */
            mlfAssign(
              &pMode,
              mclFeval(
                mclValueVarargout(),
                mlxLower,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray27_),
                NULL));
            /*
             * 
             * measModeSet = 1;
             */
            mlfAssign(&measModeSet, _mxarray9_);
            /*
             * pModeSet    = 1;
             */
            mlfAssign(&pModeSet, _mxarray9_);
        /*
         * 
         * % --- awgn(x, snr, sigPower, state, 'db|linear')
         * case 'n/n/n/n/s'
         */
        } else if (mclSwitchCompare(v_, _mxarray34_)) {
            /*
             * sig      = varargin{1};
             */
            mlfAssign(
              &sig,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray9_));
            /*
             * reqSNR   = varargin{2};
             */
            mlfAssign(
              &reqSNR,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
            /*
             * sigPower = varargin{3};
             */
            mlfAssign(
              &sigPower,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray22_));
            /*
             * state    = varargin{4};
             */
            mlfAssign(
              &state,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray27_));
            /*
             * pMode    = lower(varargin{5});
             */
            mlfAssign(
              &pMode,
              mclFeval(
                mclValueVarargout(),
                mlxLower,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray1_),
                NULL));
            /*
             * 
             * pModeSet = 1;
             */
            mlfAssign(&pModeSet, _mxarray9_);
        /*
         * 
         * % --- awgn(x, snr, 'measured', state, 'db|linear')
         * case 'n/n/s/n/s'
         */
        } else if (mclSwitchCompare(v_, _mxarray36_)) {
            /*
             * sig      = varargin{1};
             */
            mlfAssign(
              &sig,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray9_));
            /*
             * reqSNR   = varargin{2};
             */
            mlfAssign(
              &reqSNR,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
            /*
             * measMode = lower(varargin{3});
             */
            mlfAssign(
              &measMode,
              mclFeval(
                mclValueVarargout(),
                mlxLower,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray22_),
                NULL));
            /*
             * state    = varargin{4};
             */
            mlfAssign(
              &state,
              mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray27_));
            /*
             * pMode    = lower(varargin{5});
             */
            mlfAssign(
              &pMode,
              mclFeval(
                mclValueVarargout(),
                mlxLower,
                mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray1_),
                NULL));
            /*
             * 
             * measModeSet = 1;
             */
            mlfAssign(&measModeSet, _mxarray9_);
            /*
             * pModeSet    = 1;
             */
            mlfAssign(&pModeSet, _mxarray9_);
        /*
         * 
         * otherwise
         */
        } else {
            /*
             * error('Syntax error.');
             */
            mlfError(_mxarray38_, NULL);
        /*
         * end;   
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * % --- Parameters have all been set, either to their defaults or by the values passed in,
     * %     so perform range and type checks
     * 
     * % --- sig
     * if(isempty(sig))
     */
    if (mlfTobool(mlfIsempty(mclVv(sig, "sig")))) {
        /*
         * error('An input signal must be given.');
         */
        mlfError(_mxarray40_, NULL);
    /*
     * end;
     */
    }
    /*
     * 
     * if(ndims(sig)>2)
     */
    if (mclGtBool(mlfNdims(mclVv(sig, "sig")), _mxarray0_)) {
        /*
         * error('The input signal must have 2 or fewer dimensions.');
         */
        mlfError(_mxarray42_, NULL);
    /*
     * end;
     */
    }
    /*
     * 
     * % --- measMode
     * if(measModeSet)
     */
    if (mlfTobool(mclVv(measModeSet, "measModeSet"))) {
        /*
         * if(~strcmp(measMode,'measured'))
         */
        if (mclNotBool(mlfStrcmp(mclVv(measMode, "measMode"), _mxarray44_))) {
            /*
             * error('The signal power parameter must be numeric or ''measured''.');
             */
            mlfError(_mxarray46_, NULL);
        /*
         * end;
         */
        }
    /*
     * end;
     */
    }
    /*
     * 
     * % --- pMode
     * if(pModeSet)
     */
    if (mlfTobool(mclVv(pModeSet, "pModeSet"))) {
        /*
         * switch pMode
         */
        mxArray * v_ = mclInitialize(mclVv(pMode, "pMode"));
        if (mclSwitchCompare(v_, _mxarray48_)) {
        /*
         * case {'db' 'linear'}
         * otherwise
         */
        } else {
            /*
             * error('The signal power mode must be ''db'' or ''linear''.');
             */
            mlfError(_mxarray52_, NULL);
        /*
         * end;
         */
        }
        mxDestroyArray(v_);
    /*
     * end;
     */
    }
    /*
     * 
     * % -- reqSNR
     * if(any([~isreal(reqSNR) (length(reqSNR)>1) (length(reqSNR)==0)]))
     */
    if (mlfTobool(
          mlfAny(
            mlfHorzcat(
              mclNot(mlfIsreal(mclVv(reqSNR, "reqSNR"))),
              mclBoolToArray(mclLengthInt(mclVv(reqSNR, "reqSNR")) > 1),
              mclBoolToArray(mclLengthInt(mclVv(reqSNR, "reqSNR")) == 0),
              NULL),
            NULL))) {
        /*
         * error('The signal-to-noise ratio must be a real scalar.');
         */
        mlfError(_mxarray54_, NULL);
    /*
     * end;
     */
    }
    /*
     * 
     * if(strcmp(pMode,'linear'))
     */
    if (mlfTobool(mlfStrcmp(mclVv(pMode, "pMode"), _mxarray50_))) {
        /*
         * if(reqSNR<=0)
         */
        if (mclLeBool(mclVv(reqSNR, "reqSNR"), _mxarray2_)) {
            /*
             * error('In linear mode, the signal-to-noise ratio must be > 0.');
             */
            mlfError(_mxarray56_, NULL);
        /*
         * end;
         */
        }
    /*
     * end;
     */
    }
    /*
     * 
     * % --- sigPower
     * if(~strcmp(measMode,'measured'))
     */
    if (mclNotBool(mlfStrcmp(mclVv(measMode, "measMode"), _mxarray44_))) {
        /*
         * 
         * % --- If measMode is not 'measured', then the signal power must be specified
         * if(any([~isreal(sigPower) (length(sigPower)>1) (length(sigPower)==0)]))
         */
        if (mlfTobool(
              mlfAny(
                mlfHorzcat(
                  mclNot(mlfIsreal(mclVv(sigPower, "sigPower"))),
                  mclBoolToArray(mclLengthInt(mclVv(sigPower, "sigPower")) > 1),
                  mclBoolToArray(
                    mclLengthInt(mclVv(sigPower, "sigPower")) == 0),
                  NULL),
                NULL))) {
            /*
             * error('The signal power value must be a real scalar.');
             */
            mlfError(_mxarray58_, NULL);
        /*
         * end;
         */
        }
        /*
         * 
         * if(strcmp(pMode,'linear'))
         */
        if (mlfTobool(mlfStrcmp(mclVv(pMode, "pMode"), _mxarray50_))) {
            /*
             * if(sigPower<0)
             */
            if (mclLtBool(mclVv(sigPower, "sigPower"), _mxarray2_)) {
                /*
                 * error('In linear mode, the signal power must be >= 0.');
                 */
                mlfError(_mxarray60_, NULL);
            /*
             * end;
             */
            }
        /*
         * end;
         */
        }
    /*
     * 
     * end;
     */
    }
    /*
     * 
     * % --- state
     * if(~isempty(state))
     */
    if (mclNotBool(mlfIsempty(mclVv(state, "state")))) {
        /*
         * if(any([~isreal(state) (length(state)>1) (length(state)==0) any((state-floor(state))~=0)]))
         */
        if (mlfTobool(
              mlfAny(
                mlfHorzcat(
                  mclNot(mlfIsreal(mclVv(state, "state"))),
                  mclBoolToArray(mclLengthInt(mclVv(state, "state")) > 1),
                  mclBoolToArray(mclLengthInt(mclVv(state, "state")) == 0),
                  mlfAny(
                    mclNe(
                      mclMinus(
                        mclVv(state, "state"), mlfFloor(mclVv(state, "state"))),
                      _mxarray2_),
                    NULL),
                  NULL),
                NULL))) {
            /*
             * error('The State must be a real, integer scalar.');
             */
            mlfError(_mxarray62_, NULL);
        /*
         * end;
         */
        }
    /*
     * end;
     */
    }
    /*
     * 
     * % --- All parameters are valid, so no extra checking is required
     * 
     * % --- Check the signal power.  This needs to consider power measurements on matrices
     * if(strcmp(measMode,'measured'))
     */
    if (mlfTobool(mlfStrcmp(mclVv(measMode, "measMode"), _mxarray44_))) {
        /*
         * sigPower = sum(abs(sig(:)).^2)/length(sig(:));
         */
        mlfAssign(
          &sigPower,
          mclMrdivide(
            mlfSum(
              mlfPower(
                mlfAbs(mclArrayRef1(mclVv(sig, "sig"), mlfCreateColonIndex())),
                _mxarray0_),
              NULL),
            mlfScalar(
              mclLengthInt(
                mclArrayRef1(mclVv(sig, "sig"), mlfCreateColonIndex())))));
        /*
         * 
         * if(strcmp(pMode,'db'))
         */
        if (mlfTobool(mlfStrcmp(mclVv(pMode, "pMode"), _mxarray4_))) {
            /*
             * sigPower = 10*log10(sigPower);
             */
            mlfAssign(
              &sigPower,
              mclMtimes(_mxarray64_, mlfLog10(mclVv(sigPower, "sigPower"))));
        /*
         * end;
         */
        }
    /*
     * end;
     */
    }
    /*
     * 
     * % --- Compute the required noise power
     * switch lower(pMode)
     */
    {
        mxArray * v_ = mclInitialize(mlfLower(mclVv(pMode, "pMode")));
        if (mclSwitchCompare(v_, _mxarray50_)) {
            /*
             * case 'linear'
             * noisePower = sigPower/reqSNR;
             */
            mlfAssign(
              &noisePower,
              mclMrdivide(
                mclVv(sigPower, "sigPower"), mclVv(reqSNR, "reqSNR")));
        /*
         * case 'db'
         */
        } else if (mclSwitchCompare(v_, _mxarray4_)) {
            /*
             * noisePower = sigPower-reqSNR;
             */
            mlfAssign(
              &noisePower,
              mclMinus(mclVv(sigPower, "sigPower"), mclVv(reqSNR, "reqSNR")));
            /*
             * pMode = 'dbw';
             */
            mlfAssign(&pMode, _mxarray65_);
        /*
         * end;
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * % --- Add the noise
     * if(isreal(sig))
     */
    if (mlfTobool(mlfIsreal(mclVv(sig, "sig")))) {
        /*
         * opType = 'real';
         */
        mlfAssign(&opType, _mxarray67_);
    /*
     * else
     */
    } else {
        /*
         * opType = 'complex';
         */
        mlfAssign(&opType, _mxarray69_);
    /*
     * end;
     */
    }
    /*
     * 
     * y = sig+wgn(size(sig,1), size(sig,2), noisePower, 1, state, pMode, opType);
     */
    mlfAssign(
      &y,
      mclPlus(
        mclVv(sig, "sig"),
        mlfWgn(
          mlfSize(mclValueVarargout(), mclVv(sig, "sig"), _mxarray9_),
          mlfSize(mclValueVarargout(), mclVv(sig, "sig"), _mxarray0_),
          mclVv(noisePower, "noisePower"),
          _mxarray9_,
          mclVv(state, "state"),
          mclVv(pMode, "pMode"),
          mclVv(opType, "opType"),
          NULL)));
    mclValidateOutput(y, 1, nargout_, "y", "awgn");
    mxDestroyArray(ans);
    mxDestroyArray(pModeSet);
    mxDestroyArray(measModeSet);
    mxDestroyArray(reqSNR);
    mxDestroyArray(sig);
    mxDestroyArray(sigPower);
    mxDestroyArray(pMode);
    mxDestroyArray(measMode);
    mxDestroyArray(state);
    mxDestroyArray(sigStr);
    mxDestroyArray(n);
    mxDestroyArray(noisePower);
    mxDestroyArray(opType);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
}
