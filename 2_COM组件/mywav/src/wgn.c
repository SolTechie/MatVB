/*
 * MATLAB Compiler: 3.0
 * Date: Sun Jun 14 18:30:54 2009
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-M" "-silentsetup" "-d"
 * "C:/MATLAB6p5/work/mywav/src" "-B" "csglcom:mywav,mywav,1.0" "-B" "sgl" "-m"
 * "-W" "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W"
 * "mainhg" "libmwsglm.mlib" "-t" "-W" "comhg:mywav,mywav,1.0" "-T" "link:lib"
 * "-h" "libmmfile.mlib" "-i" "-i" "C:/MATLAB6p5/work/fzone.m"
 * "C:/MATLAB6p5/work/myprowav.m" "C:/MATLAB6p5/work/tzone.m" 
 */
#include "wgn.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;

static mxChar _array5_[3] = { 'd', 'b', 'w' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;

static mxChar _array8_[4] = { 'r', 'e', 'a', 'l' };
static mxArray * _mxarray7_;
static mxArray * _mxarray9_;

static mxChar _array11_[45] = { 'T', 'h', 'e', ' ', 'd', 'e', 'f', 'a', 'u',
                                'l', 't', ' ', 'i', 'm', 'p', 'e', 'd', 'a',
                                'n', 'c', 'e', ' ', 's', 'h', 'o', 'u', 'l',
                                'd', ' ', 'b', 'e', ' ', 'm', 'a', 'r', 'k',
                                'e', 'd', ' ', 'b', 'y', ' ', '[', ']', '.' };
static mxArray * _mxarray10_;
static mxArray * _mxarray12_;

static mxChar _array14_[40] = { 'T', 'h', 'e', ' ', 'd', 'e', 'f', 'a',
                                'u', 'l', 't', ' ', 's', 'e', 'e', 'd',
                                ' ', 's', 'h', 'o', 'u', 'l', 'd', ' ',
                                'b', 'e', ' ', 'm', 'a', 'r', 'k', 'e',
                                'd', ' ', 'b', 'y', ' ', '[', ']', '.' };
static mxArray * _mxarray13_;
static mxArray * _mxarray15_;
static mxArray * _mxarray16_;

static mxChar _array18_[46] = { 'O', 'n', 'l', 'y', ' ', 's', 't', 'r',
                                'i', 'n', 'g', ' ', 'a', 'n', 'd', ' ',
                                'n', 'u', 'm', 'e', 'r', 'i', 'c', ' ',
                                'a', 'r', 'g', 'u', 'm', 'e', 'n', 't',
                                's', ' ', 'a', 'r', 'e', ' ', 'a', 'l',
                                'l', 'o', 'w', 'e', 'd', '.' };
static mxArray * _mxarray17_;

static double _array20_[3] = { 1.0, 2.0, 3.0 };
static mxArray * _mxarray19_;

static mxChar _array22_[15] = { 'I', 'l', 'l', 'e', 'g', 'a', 'l', ' ',
                                's', 'y', 'n', 't', 'a', 'x', '.' };
static mxArray * _mxarray21_;

static mxChar _array26_[3] = { 'd', 'b', 'm' };
static mxArray * _mxarray25_;

static mxChar _array28_[6] = { 'l', 'i', 'n', 'e', 'a', 'r' };
static mxArray * _mxarray27_;

static mxArray * _array24_[3] = { NULL /*_mxarray4_*/, NULL /*_mxarray25_*/,
                                  NULL /*_mxarray27_*/ };
static mxArray * _mxarray23_;

static mxChar _array30_[37] = { 'T', 'h', 'e', ' ', 'P', 'o', 'w', 'e',
                                'r', ' ', 'm', 'o', 'd', 'e', ' ', 'm',
                                'u', 's', 't', ' ', 'o', 'n', 'l', 'y',
                                ' ', 'b', 'e', ' ', 's', 'e', 't', ' ',
                                'o', 'n', 'c', 'e', '.' };
static mxArray * _mxarray29_;

static mxChar _array33_[2] = { 'd', 'b' };
static mxArray * _mxarray32_;
static mxArray * _mxarray31_;

static mxChar _array35_[70] = { 'I', 'n', 'c', 'o', 'r', 'r', 'e', 'c', 't',
                                ' ', 'p', 'o', 'w', 'e', 'r', ' ', 'm', 'o',
                                'd', 'e', ' ', 'p', 'a', 's', 's', 'e', 'd',
                                ' ', 'i', 'n', '.', ' ', ' ', 'P', 'l', 'e',
                                'a', 's', 'e', ' ', 'u', 's', 'e', ' ',
                                0x0027, 'd', 'B', 'W', 0x0027, ',', ' ',
                                0x0027, 'd', 'B', 'm', 0x0027, ',', ' ',
                                'o', 'r', ' ', 0x0027, 'l', 'i', 'n', 'e',
                                'a', 'r', '.', 0x0027 };
static mxArray * _mxarray34_;

static mxChar _array39_[7] = { 'c', 'o', 'm', 'p', 'l', 'e', 'x' };
static mxArray * _mxarray38_;

static mxArray * _array37_[2] = { NULL /*_mxarray7_*/, NULL /*_mxarray38_*/ };
static mxArray * _mxarray36_;

static mxChar _array41_[42] = { 'T', 'h', 'e', ' ', 'c', 'o', 'm', 'p', 'l',
                                'e', 'x', 'i', 't', 'y', ' ', 'm', 'o', 'd',
                                'e', ' ', 'm', 'u', 's', 't', ' ', 'o', 'n',
                                'l', 'y', ' ', 'b', 'e', ' ', 's', 'e', 't',
                                ' ', 'o', 'n', 'c', 'e', '.' };
static mxArray * _mxarray40_;

static mxChar _array43_[25] = { 'U', 'n', 'k', 'n', 'o', 'w', 'n', ' ', 'o',
                                'p', 't', 'i', 'o', 'n', ' ', 'p', 'a', 's',
                                's', 'e', 'd', ' ', 'i', 'n', '.' };
static mxArray * _mxarray42_;

static mxChar _array45_[38] = { 'T', 'h', 'e', ' ', 'p', 'o', 'w', 'e',
                                'r', ' ', 'v', 'a', 'l', 'u', 'e', ' ',
                                'm', 'u', 's', 't', ' ', 'b', 'e', ' ',
                                'a', ' ', 'r', 'e', 'a', 'l', ' ', 's',
                                'c', 'a', 'l', 'a', 'r', '.' };
static mxArray * _mxarray44_;

static mxChar _array47_[54] = { 'I', 'n', ' ', 'l', 'i', 'n', 'e', 'a', 'r',
                                ' ', 'm', 'o', 'd', 'e', ',', ' ', 't', 'h',
                                'e', ' ', 'r', 'e', 'q', 'u', 'i', 'r', 'e',
                                'd', ' ', 'n', 'o', 'i', 's', 'e', ' ', 'p',
                                'o', 'w', 'e', 'r', ' ', 'm', 'u', 's', 't',
                                ' ', 'b', 'e', ' ', '>', '=', ' ', '0', '.' };
static mxArray * _mxarray46_;

static mxChar _array49_[58] = { 'T', 'h', 'e', ' ', 'r', 'e', 'q', 'u', 'i',
                                'r', 'e', 'd', ' ', 'd', 'i', 'm', 'e', 'n',
                                's', 'i', 'o', 'n', 's', ' ', 'm', 'u', 's',
                                't', ' ', 'b', 'e', ' ', 'r', 'e', 'a', 'l',
                                ',', ' ', 'i', 'n', 't', 'e', 'g', 'e', 'r',
                                ' ', 's', 'c', 'a', 'l', 'a', 'r', 's', ' ',
                                '>', ' ', '1', '.' };
static mxArray * _mxarray48_;

static mxChar _array51_[46] = { 'T', 'h', 'e', ' ', 'I', 'm', 'p', 'e',
                                'd', 'a', 'n', 'c', 'e', ' ', 'v', 'a',
                                'l', 'u', 'e', ' ', 'm', 'u', 's', 't',
                                ' ', 'b', 'e', ' ', 'a', ' ', 'r', 'e',
                                'a', 'l', ' ', 's', 'c', 'a', 'l', 'a',
                                'r', ' ', '>', ' ', '0', '.' };
static mxArray * _mxarray50_;

static mxChar _array53_[41] = { 'T', 'h', 'e', ' ', 'S', 't', 'a', 't', 'e',
                                ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ',
                                'a', ' ', 'r', 'e', 'a', 'l', ',', ' ', 'i',
                                'n', 't', 'e', 'g', 'e', 'r', ' ', 's', 'c',
                                'a', 'l', 'a', 'r', '.' };
static mxArray * _mxarray52_;
static mxArray * _mxarray54_;
static mxArray * _mxarray55_;

static mxChar _array57_[5] = { 's', 't', 'a', 't', 'e' };
static mxArray * _mxarray56_;
static mxArray * _mxarray58_;

void InitializeModule_wgn(void) {
    _mxarray0_ = mclInitializeDouble(3.0);
    _mxarray1_ = mclInitializeDouble(7.0);
    _mxarray2_ = mclInitializeDouble(0.0);
    _mxarray3_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray4_ = mclInitializeString(3, _array5_);
    _mxarray6_ = mclInitializeDouble(1.0);
    _mxarray7_ = mclInitializeString(4, _array8_);
    _mxarray9_ = mclInitializeDouble(4.0);
    _mxarray10_ = mclInitializeString(45, _array11_);
    _mxarray12_ = mclInitializeDouble(5.0);
    _mxarray13_ = mclInitializeString(40, _array14_);
    _mxarray15_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray16_ = mclInitializeDouble(2.0);
    _mxarray17_ = mclInitializeString(46, _array18_);
    _mxarray19_ = mclInitializeDoubleVector(1, 3, _array20_);
    _mxarray21_ = mclInitializeString(15, _array22_);
    _array24_[0] = _mxarray4_;
    _mxarray25_ = mclInitializeString(3, _array26_);
    _array24_[1] = _mxarray25_;
    _mxarray27_ = mclInitializeString(6, _array28_);
    _array24_[2] = _mxarray27_;
    _mxarray23_ = mclInitializeCellVector(1, 3, _array24_);
    _mxarray29_ = mclInitializeString(37, _array30_);
    _mxarray32_ = mclInitializeString(2, _array33_);
    _mxarray31_ = mclInitializeCell(_mxarray32_);
    _mxarray34_ = mclInitializeString(70, _array35_);
    _array37_[0] = _mxarray7_;
    _mxarray38_ = mclInitializeString(7, _array39_);
    _array37_[1] = _mxarray38_;
    _mxarray36_ = mclInitializeCellVector(1, 2, _array37_);
    _mxarray40_ = mclInitializeString(42, _array41_);
    _mxarray42_ = mclInitializeString(25, _array43_);
    _mxarray44_ = mclInitializeString(38, _array45_);
    _mxarray46_ = mclInitializeString(54, _array47_);
    _mxarray48_ = mclInitializeString(58, _array49_);
    _mxarray50_ = mclInitializeString(46, _array51_);
    _mxarray52_ = mclInitializeString(41, _array53_);
    _mxarray54_ = mclInitializeDouble(10.0);
    _mxarray55_ = mclInitializeDouble(30.0);
    _mxarray56_ = mclInitializeString(5, _array57_);
    _mxarray58_ = mclInitializeComplex(0.0, 1.0);
}

void TerminateModule_wgn(void) {
    mxDestroyArray(_mxarray58_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray55_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * mlfWgn_isscalar(mxArray * Vec);
static void mlxWgn_isscalar(int nlhs,
                            mxArray * plhs[],
                            int nrhs,
                            mxArray * prhs[]);
static mxArray * Mwgn(int nargout_, mxArray * varargin);
static mxArray * Mwgn_isscalar(int nargout_, mxArray * Vec);

static mexFunctionTableEntry local_function_table_[1]
  = { { "isscalar", mlxWgn_isscalar, 1, 1, NULL } };

_mexLocalFunctionTable _local_function_table_wgn = { 1, local_function_table_ };

/*
 * The function "mlfWgn" contains the normal interface for the "wgn" M-function
 * from file "c:\matlab6p5\toolbox\comm\comm\wgn.m" (lines 1-218). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfWgn(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * y = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    y = Mwgn(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfReturnValue(y);
}

/*
 * The function "mlxWgn" contains the feval interface for the "wgn" M-function
 * from file "c:\matlab6p5\toolbox\comm\comm\wgn.m" (lines 1-218). The feval
 * function calls the implementation version of wgn through this function. This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
void mlxWgn(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wgn Line: 1 Column: 1 The function \"wgn\""
            " was called with more than the declared number of outputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mwgn(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 0);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfWgn_isscalar" contains the normal interface for the
 * "wgn/isscalar" M-function from file "c:\matlab6p5\toolbox\comm\comm\wgn.m"
 * (lines 218-231). This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static mxArray * mlfWgn_isscalar(mxArray * Vec) {
    int nargout = 1;
    mxArray * ecode = NULL;
    mlfEnterNewContext(0, 1, Vec);
    ecode = Mwgn_isscalar(nargout, Vec);
    mlfRestorePreviousContext(0, 1, Vec);
    return mlfReturnValue(ecode);
}

/*
 * The function "mlxWgn_isscalar" contains the feval interface for the
 * "wgn/isscalar" M-function from file "c:\matlab6p5\toolbox\comm\comm\wgn.m"
 * (lines 218-231). The feval function calls the implementation version of
 * wgn/isscalar through this function. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
static void mlxWgn_isscalar(int nlhs,
                            mxArray * plhs[],
                            int nrhs,
                            mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wgn/isscalar Line: 218 Colum"
            "n: 1 The function \"wgn/isscalar\" was called with"
            " more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wgn/isscalar Line: 218 Colu"
            "mn: 1 The function \"wgn/isscalar\" was called wi"
            "th more than the declared number of inputs (1)."),
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
    mplhs[0] = Mwgn_isscalar(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mwgn" is the implementation version of the "wgn" M-function
 * from file "c:\matlab6p5\toolbox\comm\comm\wgn.m" (lines 1-218). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function y = wgn(varargin)
 */
static mxArray * Mwgn(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wgn);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * y = NULL;
    mxArray * noisePower = NULL;
    mxArray * n = NULL;
    mxArray * strArg = NULL;
    mxArray * numArg = NULL;
    mxArray * seed = NULL;
    mxArray * cplxMode = NULL;
    mxArray * imp = NULL;
    mxArray * pMode = NULL;
    mxArray * col = NULL;
    mxArray * row = NULL;
    mxArray * p = NULL;
    mxArray * cplxModeSet = NULL;
    mxArray * pModeSet = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&varargin);
    /*
     * %WGN Generate white Gaussian noise.
     * %   Y = WGN(M,N,P) generates an M-by-N matrix of white Gaussian noise.
     * %   P specifies the power of the output noise in dBW.
     * %
     * %   Y = WGN(M,N,P,IMP) specifies the load impedance in Ohms.
     * %
     * %   Y = WGN(M,N,P,IMP,STATE) resets the state of RANDN to STATE.
     * %
     * %   Additional flags that can follow the numeric arguments are:
     * %
     * %   Y = WGN(..., POWERTYPE) specifies the units of P.  POWERTYPE can
     * %   be 'dBW', 'dBm' or 'linear'.  Linear power is in Watts.
     * %
     * %   Y = WGN(..., OUTPUTTYPE); Specifies the output type.  OUTPUTTYPE can
     * %   be 'real' or 'complex'.  If the output type is complex, then P
     * %   is divided equally between the real and imaginary components.
     * %
     * %   Example: To generate a 1024-by-1 vector of complex noise with power
     * %            of 5 dBm across a 50 Ohm load, use:
     * %            Y = WGN(1024, 1, 5, 50, 'dBm', 'complex');
     * %
     * %   Example: To generate a 256-by-5 matrix of real noise with power
     * %            of 10 dBW across a 1 Ohm load, use:
     * %            Y = WGN(256, 5, 10, 'real');
     * %
     * %   Example: To generate a 1-by-10 vector of complex noise with power
     * %            of 3 Watts across a 75 Ohm load, use:
     * %            Y = WGN(1, 10, 3, 75, 'linear', 'complex');
     * %
     * %   See also RANDN, AWGN.
     * 
     * %   Copyright 1996-2002 The MathWorks, Inc.
     * %   $Revision: 1.11 $  $Date: 2002/03/07 15:38:37 $
     * 
     * % --- Initial checks
     * error(nargchk(3,7,nargin));
     */
    mlfError(mlfNargchk(_mxarray0_, _mxarray1_, mlfScalar(nargin_)), NULL);
    /*
     * 
     * % --- Value set indicators (used for the strings)
     * pModeSet    = 0;
     */
    mlfAssign(&pModeSet, _mxarray2_);
    /*
     * cplxModeSet = 0;
     */
    mlfAssign(&cplxModeSet, _mxarray2_);
    /*
     * 
     * % --- Set default values
     * p        = [];
     */
    mlfAssign(&p, _mxarray3_);
    /*
     * row      = [];
     */
    mlfAssign(&row, _mxarray3_);
    /*
     * col      = [];
     */
    mlfAssign(&col, _mxarray3_);
    /*
     * pMode    = 'dbw';
     */
    mlfAssign(&pMode, _mxarray4_);
    /*
     * imp      = 1;
     */
    mlfAssign(&imp, _mxarray6_);
    /*
     * cplxMode = 'real';
     */
    mlfAssign(&cplxMode, _mxarray7_);
    /*
     * seed     = [];
     */
    mlfAssign(&seed, _mxarray3_);
    /*
     * 
     * % --- Placeholders for the numeric and string index values
     * numArg = [];
     */
    mlfAssign(&numArg, _mxarray3_);
    /*
     * strArg = [];
     */
    mlfAssign(&strArg, _mxarray3_);
    {
        /*
         * 
         * % --- Identify string and numeric arguments
         * %     An empty in position 4 (Impedance) or 5 (Seed) are considered numeric
         * for n=1:nargin
         */
        int v_ = mclForIntStart(1);
        int e_ = nargin_;
        if (v_ > e_) {
            mlfAssign(&n, _mxarray3_);
        } else {
            /*
             * if(isempty(varargin{n}))
             * switch n
             * case 4
             * if(ischar(varargin{n}))
             * error('The default impedance should be marked by [].');
             * end;
             * varargin{n} = imp; % Impedance has a default value
             * case 5
             * if(ischar(varargin{n}))
             * error('The default seed should be marked by [].');
             * end;
             * varargin{n} = [];  % Seed has no default
             * otherwise
             * varargin{n} = '';
             * end;
             * end;
             * 
             * % --- Assign the string and numeric vectors
             * if(ischar(varargin{n}))
             * strArg(size(strArg,2)+1) = n;
             * elseif(isnumeric(varargin{n}))
             * numArg(size(numArg,2)+1) = n;
             * else
             * error('Only string and numeric arguments are allowed.');
             * end;
             * end;
             */
            for (; ; ) {
                if (mlfTobool(
                      mclFeval(
                        mclValueVarargout(),
                        mlxIsempty,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"), "{?}", mlfScalar(v_)),
                        NULL))) {
                    mxArray * v_0 = mclInitialize(mlfScalar(v_));
                    if (mclSwitchCompare(v_0, _mxarray9_)) {
                        if (mlfTobool(
                              mclFeval(
                                mclValueVarargout(),
                                mlxIschar,
                                mlfIndexRef(
                                  mclVa(varargin, "varargin"),
                                  "{?}",
                                  mlfScalar(v_)),
                                NULL))) {
                            mlfError(_mxarray10_, NULL);
                        }
                        mlfIndexAssign(
                          &varargin, "{?}", mlfScalar(v_), mclVv(imp, "imp"));
                    } else if (mclSwitchCompare(v_0, _mxarray12_)) {
                        if (mlfTobool(
                              mclFeval(
                                mclValueVarargout(),
                                mlxIschar,
                                mlfIndexRef(
                                  mclVa(varargin, "varargin"),
                                  "{?}",
                                  mlfScalar(v_)),
                                NULL))) {
                            mlfError(_mxarray13_, NULL);
                        }
                        mlfIndexAssign(
                          &varargin, "{?}", mlfScalar(v_), _mxarray3_);
                    } else {
                        mlfIndexAssign(
                          &varargin, "{?}", mlfScalar(v_), _mxarray15_);
                    }
                    mxDestroyArray(v_0);
                }
                if (mlfTobool(
                      mclFeval(
                        mclValueVarargout(),
                        mlxIschar,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"), "{?}", mlfScalar(v_)),
                        NULL))) {
                    mclArrayAssign1(
                      &strArg,
                      mlfScalar(v_),
                      mclPlus(
                        mlfSize(
                          mclValueVarargout(),
                          mclVv(strArg, "strArg"),
                          _mxarray16_),
                        _mxarray6_));
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
                      &numArg,
                      mlfScalar(v_),
                      mclPlus(
                        mlfSize(
                          mclValueVarargout(),
                          mclVv(numArg, "numArg"),
                          _mxarray16_),
                        _mxarray6_));
                } else {
                    mlfError(_mxarray17_, NULL);
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
     * % --- Build the numeric argument set
     * switch(length(numArg))
     */
    {
        mxArray * v_
          = mclInitialize(mlfScalar(mclLengthInt(mclVv(numArg, "numArg"))));
        if (mclSwitchCompare(v_, _mxarray0_)) {
            /*
             * 
             * case 3
             * % --- row is first (element 1), col (element 2), p (element 3)
             * 
             * if(all(numArg == [1 2 3]))
             */
            if (mlfTobool(
                  mlfAll(mclEq(mclVv(numArg, "numArg"), _mxarray19_), NULL))) {
                /*
                 * row    = varargin{numArg(1)};
                 */
                mlfAssign(
                  &row,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 1)));
                /*
                 * col    = varargin{numArg(2)};
                 */
                mlfAssign(
                  &col,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 2)));
                /*
                 * p      = varargin{numArg(3)};
                 */
                mlfAssign(
                  &p,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 3)));
            /*
             * else
             */
            } else {
                /*
                 * error('Illegal syntax.')
                 */
                mlfError(_mxarray21_, NULL);
            /*
             * end;
             */
            }
        /*
         * 
         * case 4
         */
        } else if (mclSwitchCompare(v_, _mxarray9_)) {
            /*
             * % --- row is first (element 1), col (element 2), p (element 3), imp (element 4)
             * %
             * 
             * if(all(numArg(1:3) == [1 2 3]))
             */
            if (mlfTobool(
                  mlfAll(
                    mclEq(
                      mclArrayRef1(
                        mclVv(numArg, "numArg"),
                        mlfColon(_mxarray6_, _mxarray0_, NULL)),
                      _mxarray19_),
                    NULL))) {
                /*
                 * row    = varargin{numArg(1)};
                 */
                mlfAssign(
                  &row,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 1)));
                /*
                 * col    = varargin{numArg(2)};
                 */
                mlfAssign(
                  &col,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 2)));
                /*
                 * p      = varargin{numArg(3)};
                 */
                mlfAssign(
                  &p,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 3)));
                /*
                 * imp    = varargin{numArg(4)};
                 */
                mlfAssign(
                  &imp,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 4)));
            /*
             * else
             */
            } else {
                /*
                 * error('Illegal syntax.')
                 */
                mlfError(_mxarray21_, NULL);
            /*
             * end;
             */
            }
        /*
         * 
         * case 5
         */
        } else if (mclSwitchCompare(v_, _mxarray12_)) {
            /*
             * % --- row is first (element 1), col (element 2), p (element 3), imp (element 4), seed (element 5)
             * 
             * if(all(numArg(1:3) == [1 2 3]))
             */
            if (mlfTobool(
                  mlfAll(
                    mclEq(
                      mclArrayRef1(
                        mclVv(numArg, "numArg"),
                        mlfColon(_mxarray6_, _mxarray0_, NULL)),
                      _mxarray19_),
                    NULL))) {
                /*
                 * row    = varargin{numArg(1)};
                 */
                mlfAssign(
                  &row,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 1)));
                /*
                 * col    = varargin{numArg(2)};
                 */
                mlfAssign(
                  &col,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 2)));
                /*
                 * p      = varargin{numArg(3)};
                 */
                mlfAssign(
                  &p,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 3)));
                /*
                 * imp    = varargin{numArg(4)};
                 */
                mlfAssign(
                  &imp,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 4)));
                /*
                 * seed   = varargin{numArg(5)};
                 */
                mlfAssign(
                  &seed,
                  mlfIndexRef(
                    mclVa(varargin, "varargin"),
                    "{?}",
                    mclIntArrayRef1(mclVv(numArg, "numArg"), 5)));
            /*
             * else
             */
            } else {
                /*
                 * error('Illegal syntax.');
                 */
                mlfError(_mxarray21_, NULL);
            /*
             * end;
             */
            }
        /*
         * otherwise
         */
        } else {
            /*
             * error('Illegal syntax.');
             */
            mlfError(_mxarray21_, NULL);
        /*
         * end;
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * % --- Build the string argument set
     * for n=1:length(strArg)
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclLengthInt(mclVv(strArg, "strArg"));
        if (v_ > e_) {
            mlfAssign(&n, _mxarray3_);
        } else {
            /*
             * switch lower(varargin{strArg(n)})
             * case {'dbw' 'dbm' 'linear'}
             * if(~pModeSet)
             * pModeSet = 1;
             * pMode = lower(varargin{strArg(n)});
             * else
             * error('The Power mode must only be set once.');
             * end;
             * case {'db'}
             * error('Incorrect power mode passed in.  Please use ''dBW'', ''dBm'', or ''linear.''');
             * case {'real' 'complex'}
             * if(~cplxModeSet)
             * cplxModeSet = 1;
             * cplxMode = lower(varargin{strArg(n)});
             * else
             * error('The complexity mode must only be set once.');
             * end;
             * otherwise
             * error('Unknown option passed in.');
             * end;
             * end;
             */
            for (; ; ) {
                mxArray * v_1
                  = mclInitialize(
                      mclFeval(
                        mclValueVarargout(),
                        mlxLower,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"),
                          "{?}",
                          mclIntArrayRef1(mclVv(strArg, "strArg"), v_)),
                        NULL));
                if (mclSwitchCompare(v_1, _mxarray23_)) {
                    if (mclNotBool(mclVv(pModeSet, "pModeSet"))) {
                        mlfAssign(&pModeSet, _mxarray6_);
                        mlfAssign(
                          &pMode,
                          mclFeval(
                            mclValueVarargout(),
                            mlxLower,
                            mlfIndexRef(
                              mclVa(varargin, "varargin"),
                              "{?}",
                              mclIntArrayRef1(mclVv(strArg, "strArg"), v_)),
                            NULL));
                    } else {
                        mlfError(_mxarray29_, NULL);
                    }
                } else if (mclSwitchCompare(v_1, _mxarray31_)) {
                    mlfError(_mxarray34_, NULL);
                } else if (mclSwitchCompare(v_1, _mxarray36_)) {
                    if (mclNotBool(mclVv(cplxModeSet, "cplxModeSet"))) {
                        mlfAssign(&cplxModeSet, _mxarray6_);
                        mlfAssign(
                          &cplxMode,
                          mclFeval(
                            mclValueVarargout(),
                            mlxLower,
                            mlfIndexRef(
                              mclVa(varargin, "varargin"),
                              "{?}",
                              mclIntArrayRef1(mclVv(strArg, "strArg"), v_)),
                            NULL));
                    } else {
                        mlfError(_mxarray40_, NULL);
                    }
                } else {
                    mlfError(_mxarray42_, NULL);
                }
                mxDestroyArray(v_1);
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
     * % --- Arguments and defaults have all been set, either to their defaults or by the values passed in
     * %     so, perform range and type checks
     * 
     * % --- p
     * if(isempty(p))
     */
    if (mlfTobool(mlfIsempty(mclVv(p, "p")))) {
        /*
         * error('The power value must be a real scalar.');
         */
        mlfError(_mxarray44_, NULL);
    /*
     * end;
     */
    }
    /*
     * 
     * if(any([~isreal(p) (length(p)>1) (length(p)==0)]))
     */
    if (mlfTobool(
          mlfAny(
            mlfHorzcat(
              mclNot(mlfIsreal(mclVv(p, "p"))),
              mclBoolToArray(mclLengthInt(mclVv(p, "p")) > 1),
              mclBoolToArray(mclLengthInt(mclVv(p, "p")) == 0),
              NULL),
            NULL))) {
        /*
         * error('The power value must be a real scalar.');
         */
        mlfError(_mxarray44_, NULL);
    /*
     * end;
     */
    }
    /*
     * 
     * if(strcmp(pMode,'linear'))
     */
    if (mlfTobool(mlfStrcmp(mclVv(pMode, "pMode"), _mxarray27_))) {
        /*
         * if(p<0)
         */
        if (mclLtBool(mclVv(p, "p"), _mxarray2_)) {
            /*
             * error('In linear mode, the required noise power must be >= 0.');
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
     * % --- Dimensions
     * if(any([isempty(row) isempty(col) ~isscalar(row) ~isscalar(col)]))
     */
    if (mlfTobool(
          mlfAny(
            mlfHorzcat(
              mlfIsempty(mclVv(row, "row")),
              mlfIsempty(mclVv(col, "col")),
              mclNot(mlfWgn_isscalar(mclVv(row, "row"))),
              mclNot(mlfWgn_isscalar(mclVv(col, "col"))),
              NULL),
            NULL))) {
        /*
         * error('The required dimensions must be real, integer scalars > 1.');
         */
        mlfError(_mxarray48_, NULL);
    /*
     * end;
     */
    }
    /*
     * 
     * if(any([(row<=0) (col<=0) ~isreal(row) ~isreal(col) ((row-floor(row))~=0) ((col-floor(col))~=0)]))
     */
    if (mlfTobool(
          mlfAny(
            mlfHorzcat(
              mclLe(mclVv(row, "row"), _mxarray2_),
              mclLe(mclVv(col, "col"), _mxarray2_),
              mclNot(mlfIsreal(mclVv(row, "row"))),
              mclNot(mlfIsreal(mclVv(col, "col"))),
              mclNe(
                mclMinus(mclVv(row, "row"), mlfFloor(mclVv(row, "row"))),
                _mxarray2_),
              mclNe(
                mclMinus(mclVv(col, "col"), mlfFloor(mclVv(col, "col"))),
                _mxarray2_),
              NULL),
            NULL))) {
        /*
         * error('The required dimensions must be real, integer scalars > 1.');
         */
        mlfError(_mxarray48_, NULL);
    /*
     * end;
     */
    }
    /*
     * 
     * % --- Impedance
     * if(any([~isreal(imp) (length(imp)>1) (length(imp)==0) any(imp<=0)]))
     */
    if (mlfTobool(
          mlfAny(
            mlfHorzcat(
              mclNot(mlfIsreal(mclVv(imp, "imp"))),
              mclBoolToArray(mclLengthInt(mclVv(imp, "imp")) > 1),
              mclBoolToArray(mclLengthInt(mclVv(imp, "imp")) == 0),
              mlfAny(mclLe(mclVv(imp, "imp"), _mxarray2_), NULL),
              NULL),
            NULL))) {
        /*
         * error('The Impedance value must be a real scalar > 0.');
         */
        mlfError(_mxarray50_, NULL);
    /*
     * end;
     */
    }
    /*
     * 
     * % --- Seed
     * if(~isempty(seed))
     */
    if (mclNotBool(mlfIsempty(mclVv(seed, "seed")))) {
        /*
         * if(any([~isreal(seed) (length(seed)>1) (length(seed)==0) any((seed-floor(seed))~=0)]))
         */
        if (mlfTobool(
              mlfAny(
                mlfHorzcat(
                  mclNot(mlfIsreal(mclVv(seed, "seed"))),
                  mclBoolToArray(mclLengthInt(mclVv(seed, "seed")) > 1),
                  mclBoolToArray(mclLengthInt(mclVv(seed, "seed")) == 0),
                  mlfAny(
                    mclNe(
                      mclMinus(
                        mclVv(seed, "seed"), mlfFloor(mclVv(seed, "seed"))),
                      _mxarray2_),
                    NULL),
                  NULL),
                NULL))) {
            /*
             * error('The State must be a real, integer scalar.');
             */
            mlfError(_mxarray52_, NULL);
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
     * switch lower(pMode)
     */
    {
        mxArray * v_ = mclInitialize(mlfLower(mclVv(pMode, "pMode")));
        if (mclSwitchCompare(v_, _mxarray27_)) {
            /*
             * case 'linear'
             * noisePower = p;
             */
            mlfAssign(&noisePower, mclVv(p, "p"));
        /*
         * case 'dbw'
         */
        } else if (mclSwitchCompare(v_, _mxarray4_)) {
            /*
             * noisePower = 10^(p/10);
             */
            mlfAssign(
              &noisePower,
              mclMpower(_mxarray54_, mclMrdivide(mclVv(p, "p"), _mxarray54_)));
        /*
         * case 'dbm'
         */
        } else if (mclSwitchCompare(v_, _mxarray25_)) {
            /*
             * noisePower = 10^((p-30)/10);
             */
            mlfAssign(
              &noisePower,
              mclMpower(
                _mxarray54_,
                mclMrdivide(
                  mclMinus(mclVv(p, "p"), _mxarray55_), _mxarray54_)));
        /*
         * end;
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * % --- Generate the noise
     * if(~isempty(seed))
     */
    if (mclNotBool(mlfIsempty(mclVv(seed, "seed")))) {
        /*
         * randn('state',seed);
         */
        mclAssignAns(
          &ans, mlfNRandn(0, _mxarray56_, mclVv(seed, "seed"), NULL));
    /*
     * end;
     */
    }
    /*
     * 
     * if(strcmp(cplxMode,'complex'))
     */
    if (mlfTobool(mlfStrcmp(mclVv(cplxMode, "cplxMode"), _mxarray38_))) {
        /*
         * y = (sqrt(imp*noisePower/2))*(randn(row,col)+j*randn(row,col));
         */
        mlfAssign(
          &y,
          mclMtimes(
            mlfSqrt(
              mclMrdivide(
                mclMtimes(mclVv(imp, "imp"), mclVv(noisePower, "noisePower")),
                _mxarray16_)),
            mclPlus(
              mlfNRandn(1, mclVv(row, "row"), mclVv(col, "col"), NULL),
              mclMtimes(
                _mxarray58_,
                mlfNRandn(1, mclVv(row, "row"), mclVv(col, "col"), NULL)))));
    /*
     * else
     */
    } else {
        /*
         * y = (sqrt(imp*noisePower))*randn(row,col);
         */
        mlfAssign(
          &y,
          mclMtimes(
            mlfSqrt(
              mclMtimes(mclVv(imp, "imp"), mclVv(noisePower, "noisePower"))),
            mlfNRandn(1, mclVv(row, "row"), mclVv(col, "col"), NULL)));
    /*
     * end;
     */
    }
    mclValidateOutput(y, 1, nargout_, "y", "wgn");
    mxDestroyArray(ans);
    mxDestroyArray(pModeSet);
    mxDestroyArray(cplxModeSet);
    mxDestroyArray(p);
    mxDestroyArray(row);
    mxDestroyArray(col);
    mxDestroyArray(pMode);
    mxDestroyArray(imp);
    mxDestroyArray(cplxMode);
    mxDestroyArray(seed);
    mxDestroyArray(numArg);
    mxDestroyArray(strArg);
    mxDestroyArray(n);
    mxDestroyArray(noisePower);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
    /*
     * 
     * % ------------------
     * % Utility functions
     * % ------------------
     * 
     * % --- ISSCALAR
     */
}

/*
 * The function "Mwgn_isscalar" is the implementation version of the
 * "wgn/isscalar" M-function from file "c:\matlab6p5\toolbox\comm\comm\wgn.m"
 * (lines 218-231). It contains the actual compiled code for that M-function.
 * It is a static function and must only be called from one of the interface
 * functions, appearing below.
 */
/*
 * function ecode = isscalar(Vec)
 */
static mxArray * Mwgn_isscalar(int nargout_, mxArray * Vec) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wgn);
    mxArray * ecode = NULL;
    mclCopyArray(&Vec);
    /*
     * if(ndims(Vec) == 2)
     */
    if (mclEqBool(mlfNdims(mclVa(Vec, "Vec")), _mxarray16_)) {
        /*
         * if(all([size(Vec,1)>1 size(Vec,2)>1]))
         */
        if (mlfTobool(
              mlfAll(
                mlfHorzcat(
                  mclGt(
                    mlfSize(mclValueVarargout(), mclVa(Vec, "Vec"), _mxarray6_),
                    _mxarray6_),
                  mclGt(
                    mlfSize(
                      mclValueVarargout(), mclVa(Vec, "Vec"), _mxarray16_),
                    _mxarray6_),
                  NULL),
                NULL))) {
            /*
             * ecode = 0; % Matrix
             */
            mlfAssign(&ecode, _mxarray2_);
        /*
         * else
         */
        } else {
            /*
             * ecode = all([size(Vec,1)==1 size(Vec,2)==1]);
             */
            mlfAssign(
              &ecode,
              mlfAll(
                mlfHorzcat(
                  mclEq(
                    mlfSize(mclValueVarargout(), mclVa(Vec, "Vec"), _mxarray6_),
                    _mxarray6_),
                  mclEq(
                    mlfSize(
                      mclValueVarargout(), mclVa(Vec, "Vec"), _mxarray16_),
                    _mxarray6_),
                  NULL),
                NULL));
        /*
         * end;
         */
        }
    /*
     * else
     */
    } else {
        /*
         * ecode = 0;
         */
        mlfAssign(&ecode, _mxarray2_);
    /*
     * end;
     */
    }
    mclValidateOutput(ecode, 1, nargout_, "ecode", "wgn/isscalar");
    mxDestroyArray(Vec);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return ecode;
    /*
     * return;
     * 
     * 
     */
}
