/*
 * MATLAB Compiler: 3.0
 * Date: Sun Jun 14 03:28:11 2009
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
#include "subplot.h"
#include "libsgl.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "libmwsglm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;
static mxArray * _mxarray4_;

static mxChar _array6_[4] = { 't', 'y', 'p', 'e' };
static mxArray * _mxarray5_;

static mxChar _array8_[4] = { 'a', 'x', 'e', 's' };
static mxArray * _mxarray7_;

static mxChar _array10_[37] = { 'R', 'e', 'q', 'u', 'i', 'r', 'e', 's',
                                ' ', 'v', 'a', 'l', 'i', 'd', ' ', 'a',
                                'x', 'e', 's', ' ', 'h', 'a', 'n', 'd',
                                'l', 'e', ' ', 'f', 'o', 'r', ' ', 'i',
                                'n', 'p', 'u', 't', '.' };
static mxArray * _mxarray9_;
static mxArray * _mxarray11_;
static mxArray * _mxarray12_;

static mxChar _array14_[33] = { 'I', 'n', 'd', 'e', 'x', ' ', 'e', 'x', 'c',
                                'e', 'e', 'd', 's', ' ', 'n', 'u', 'm', 'b',
                                'e', 'r', ' ', 'o', 'f', ' ', 's', 'u', 'b',
                                'p', 'l', 'o', 't', 's', '.' };
static mxArray * _mxarray13_;
static mxArray * _mxarray15_;

static mxChar _array17_[8] = { 'p', 'o', 's', 'i', 't', 'i', 'o', 'n' };
static mxArray * _mxarray16_;
static mxArray * _mxarray18_;

static mxChar _array20_[61] = { 's', 'u', 'b', 'p', 'l', 'o', 't', '(', 0x0027,
                                'p', 'o', 's', 'i', 't', 'i', 'o', 'n', 0x0027,
                                ',', ' ', '[', 'l', 'e', 'f', 't', ' ', 'b',
                                'o', 't', 't', 'o', 'm', ' ', 'w', 'i', 'd',
                                't', 'h', ' ', 'h', 'e', 'i', 'g', 'h', 't',
                                ']', ')', ' ', 'i', 's', ' ', 'w', 'h', 'a',
                                't', ' ', 'w', 'o', 'r', 'k', 's' };
static mxArray * _mxarray19_;

static mxChar _array22_[22] = { 'U', 'n', 'k', 'n', 'o', 'w', 'n', ' ',
                                'c', 'o', 'm', 'm', 'a', 'n', 'd', ' ',
                                'o', 'p', 't', 'i', 'o', 'n' };
static mxArray * _mxarray21_;
static mxArray * _mxarray23_;

static mxChar _array25_[7] = { 'r', 'e', 'p', 'l', 'a', 'c', 'e' };
static mxArray * _mxarray24_;

static mxChar _array27_[13] = { 'C', 'u', 'r', 'r', 'e', 'n', 't',
                                'F', 'i', 'g', 'u', 'r', 'e' };
static mxArray * _mxarray26_;

static mxChar _array29_[11] = { 'C', 'u', 'r', 'r', 'e', 'n',
                                't', 'A', 'x', 'e', 's' };
static mxArray * _mxarray28_;

static mxChar _array31_[20] = { 'I', 'l', 'l', 'e', 'g', 'a', 'l',
                                ' ', 'p', 'l', 'o', 't', ' ', 'n',
                                'u', 'm', 'b', 'e', 'r', '.' };
static mxArray * _mxarray30_;
static mxArray * _mxarray32_;
static mxArray * _mxarray33_;
static mxArray * _mxarray34_;

static mxChar _array36_[16] = { 'd', 'e', 'f', 'a', 'u', 'l', 't', 'a',
                                'x', 'e', 's', 'u', 'n', 'i', 't', 's' };
static mxArray * _mxarray35_;

static mxChar _array38_[10] = { 'n', 'o', 'r', 'm', 'a',
                                'l', 'i', 'z', 'e', 'd' };
static mxArray * _mxarray37_;

static mxChar _array40_[32] = { 'D', 'e', 'f', 'a', 'u', 'l', 't', 'A',
                                'x', 'e', 's', 'U', 'n', 'i', 't', 's',
                                ' ', 'n', 'o', 't', ' ', 'n', 'o', 'r',
                                'm', 'a', 'l', 'i', 'z', 'e', 'd', '.' };
static mxArray * _mxarray39_;

static mxChar _array42_[5] = { 'u', 'n', 'i', 't', 's' };
static mxArray * _mxarray41_;

static mxChar _array44_[19] = { 'D', 'e', 'f', 'a', 'u', 'l', 't',
                                'A', 'x', 'e', 's', 'P', 'o', 's',
                                'i', 't', 'i', 'o', 'n' };
static mxArray * _mxarray43_;
static mxArray * _mxarray45_;
static mxArray * _mxarray46_;

static mxChar _array48_[8] = { 'n', 'e', 'x', 't', 'p', 'l', 'o', 't' };
static mxArray * _mxarray47_;
static mxArray * _mxarray49_;

static mxChar _array51_[3] = { 'a', 'd', 'd' };
static mxArray * _mxarray50_;

static mxChar _array53_[46] = { 'F', 'u', 'n', 'c', 't', 'i', 'o', 'n',
                                ' ', 'c', 'a', 'l', 'l', 'e', 'd', ' ',
                                'w', 'i', 't', 'h', ' ', 't', 'o', 'o',
                                ' ', 'm', 'a', 'n', 'y', ' ', 'o', 'u',
                                't', 'p', 'u', 't', ' ', 'a', 'r', 'g',
                                'u', 'm', 'e', 'n', 't', 's' };
static mxArray * _mxarray52_;

static mxChar _array55_[8] = { 'N', 'e', 'x', 't', 'P', 'l', 'o', 't' };
static mxArray * _mxarray54_;
static mxArray * _mxarray56_;

static mxChar _array58_[4] = { 'T', 'y', 'p', 'e' };
static mxArray * _mxarray57_;

static mxChar _array60_[5] = { 'U', 'n', 'i', 't', 's' };
static mxArray * _mxarray59_;

static mxChar _array62_[8] = { 'P', 'o', 's', 'i', 't', 'i', 'o', 'n' };
static mxArray * _mxarray61_;

static mxChar _array64_[3] = { 'n', 'e', 'w' };
static mxArray * _mxarray63_;

static mxChar _array66_[6] = { 'n', 'o', 'r', 'm', 'a', 'l' };
static mxArray * _mxarray65_;

void InitializeModule_subplot(void) {
    _mxarray0_ = mclInitializeDouble(0.0);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeDouble(2.220446049250313e-16);
    _mxarray3_ = mclInitializeDouble(111.0);
    _mxarray4_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray5_ = mclInitializeString(4, _array6_);
    _mxarray7_ = mclInitializeString(4, _array8_);
    _mxarray9_ = mclInitializeString(37, _array10_);
    _mxarray11_ = mclInitializeDouble(10.0);
    _mxarray12_ = mclInitializeDouble(100.0);
    _mxarray13_ = mclInitializeString(33, _array14_);
    _mxarray15_ = mclInitializeDouble(2.0);
    _mxarray16_ = mclInitializeString(8, _array17_);
    _mxarray18_ = mclInitializeDouble(4.0);
    _mxarray19_ = mclInitializeString(61, _array20_);
    _mxarray21_ = mclInitializeString(22, _array22_);
    _mxarray23_ = mclInitializeDouble(3.0);
    _mxarray24_ = mclInitializeString(7, _array25_);
    _mxarray26_ = mclInitializeString(13, _array27_);
    _mxarray28_ = mclInitializeString(11, _array29_);
    _mxarray30_ = mclInitializeString(20, _array31_);
    _mxarray32_ = mclInitializeDouble(.18);
    _mxarray33_ = mclInitializeDouble(.09);
    _mxarray34_ = mclInitializeDouble(.9);
    _mxarray35_ = mclInitializeString(16, _array36_);
    _mxarray37_ = mclInitializeString(10, _array38_);
    _mxarray39_ = mclInitializeString(32, _array40_);
    _mxarray41_ = mclInitializeString(5, _array42_);
    _mxarray43_ = mclInitializeString(19, _array44_);
    _mxarray45_ = mclInitializeDouble(.5);
    _mxarray46_ = mclInitializeDouble(.7);
    _mxarray47_ = mclInitializeString(8, _array48_);
    _mxarray49_ = mclInitializeDouble(7.0);
    _mxarray50_ = mclInitializeString(3, _array51_);
    _mxarray52_ = mclInitializeString(46, _array53_);
    _mxarray54_ = mclInitializeString(8, _array55_);
    _mxarray56_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray57_ = mclInitializeString(4, _array58_);
    _mxarray59_ = mclInitializeString(5, _array60_);
    _mxarray61_ = mclInitializeString(8, _array62_);
    _mxarray63_ = mclInitializeString(3, _array64_);
    _mxarray65_ = mclInitializeString(6, _array66_);
}

void TerminateModule_subplot(void) {
    mxDestroyArray(_mxarray65_);
    mxDestroyArray(_mxarray63_);
    mxDestroyArray(_mxarray61_);
    mxDestroyArray(_mxarray59_);
    mxDestroyArray(_mxarray57_);
    mxDestroyArray(_mxarray56_);
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray49_);
    mxDestroyArray(_mxarray47_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray43_);
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Msubplot(int nargout_,
                          mxArray * nrows,
                          mxArray * ncols,
                          mxArray * thisPlot,
                          mxArray * replace);

_mexLocalFunctionTable _local_function_table_subplot
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNSubplot" contains the nargout interface for the "subplot"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph2d\subplot.m" (lines
 * 1-270). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNSubplot(int nargout,
                      mxArray * nrows,
                      mxArray * ncols,
                      mxArray * thisPlot,
                      mxArray * replace) {
    mxArray * theAxis = NULL;
    mlfEnterNewContext(0, 4, nrows, ncols, thisPlot, replace);
    theAxis = Msubplot(nargout, nrows, ncols, thisPlot, replace);
    mlfRestorePreviousContext(0, 4, nrows, ncols, thisPlot, replace);
    return mlfReturnValue(theAxis);
}

/*
 * The function "mlfSubplot" contains the normal interface for the "subplot"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph2d\subplot.m" (lines
 * 1-270). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfSubplot(mxArray * nrows,
                     mxArray * ncols,
                     mxArray * thisPlot,
                     mxArray * replace) {
    int nargout = 1;
    mxArray * theAxis = NULL;
    mlfEnterNewContext(0, 4, nrows, ncols, thisPlot, replace);
    theAxis = Msubplot(nargout, nrows, ncols, thisPlot, replace);
    mlfRestorePreviousContext(0, 4, nrows, ncols, thisPlot, replace);
    return mlfReturnValue(theAxis);
}

/*
 * The function "mlfVSubplot" contains the void interface for the "subplot"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph2d\subplot.m" (lines
 * 1-270). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVSubplot(mxArray * nrows,
                 mxArray * ncols,
                 mxArray * thisPlot,
                 mxArray * replace) {
    mxArray * theAxis = NULL;
    mlfEnterNewContext(0, 4, nrows, ncols, thisPlot, replace);
    theAxis = Msubplot(0, nrows, ncols, thisPlot, replace);
    mlfRestorePreviousContext(0, 4, nrows, ncols, thisPlot, replace);
    mxDestroyArray(theAxis);
}

/*
 * The function "mlxSubplot" contains the feval interface for the "subplot"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph2d\subplot.m" (lines
 * 1-270). The feval function calls the implementation version of subplot
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxSubplot(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[4];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: subplot Line: 1 Column: "
            "1 The function \"subplot\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: subplot Line: 1 Column:"
            " 1 The function \"subplot\" was called with m"
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
    mplhs[0] = Msubplot(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Msubplot" is the implementation version of the "subplot"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph2d\subplot.m" (lines
 * 1-270). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function theAxis = subplot(nrows, ncols, thisPlot, replace)
 */
static mxArray * Msubplot(int nargout_,
                          mxArray * nrows,
                          mxArray * ncols,
                          mxArray * thisPlot,
                          mxArray * replace) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_subplot);
    int nargin_ = mclNargin(4, nrows, ncols, thisPlot, replace, NULL);
    mxArray * theAxis = NULL;
    mxArray * ax = NULL;
    mxArray * intersect = NULL;
    mxArray * sibpos = NULL;
    mxArray * units = NULL;
    mxArray * i = NULL;
    mxArray * got_one = NULL;
    mxArray * sibs = NULL;
    mxArray * nextstate = NULL;
    mxArray * height = NULL;
    mxArray * width = NULL;
    mxArray * totalheight = NULL;
    mxArray * totalwidth = NULL;
    mxArray * row_offset = NULL;
    mxArray * col_offset = NULL;
    mxArray * def_pos = NULL;
    mxArray * tmp = NULL;
    mxArray * col = NULL;
    mxArray * row = NULL;
    mxArray * PERC_OFFSET_T = NULL;
    mxArray * PERC_OFFSET_B = NULL;
    mxArray * PERC_OFFSET_R = NULL;
    mxArray * PERC_OFFSET_L = NULL;
    mxArray * pos_size = NULL;
    mxArray * ans = NULL;
    mxArray * code = NULL;
    mxArray * position = NULL;
    mxArray * handle = NULL;
    mxArray * tol = NULL;
    mxArray * delay_destroy = NULL;
    mxArray * create_axis = NULL;
    mxArray * kill_siblings = NULL;
    mxArray * narg = NULL;
    mclCopyArray(&nrows);
    mclCopyArray(&ncols);
    mclCopyArray(&thisPlot);
    mclCopyArray(&replace);
    /*
     * %SUBPLOT Create axes in tiled positions.
     * %   H = SUBPLOT(m,n,p), or SUBPLOT(mnp), breaks the Figure window
     * %   into an m-by-n matrix of small axes, selects the p-th axes for 
     * %   for the current plot, and returns the axis handle.  The axes 
     * %   are counted along the top row of the Figure window, then the
     * %   second row, etc.  For example,
     * % 
     * %       SUBPLOT(2,1,1), PLOT(income)
     * %       SUBPLOT(2,1,2), PLOT(outgo)
     * % 
     * %   plots income on the top half of the window and outgo on the
     * %   bottom half.
     * % 
     * %   SUBPLOT(m,n,p), if the axis already exists, makes it current.
     * %   SUBPLOT(m,n,p,'replace'), if the axis already exists, deletes it and
     * %   creates a new axis.
     * %   SUBPLOT(m,n,P), where P is a vector, specifies an axes position
     * %   that covers all the subplot positions listed in P.
     * %   SUBPLOT(H), where H is an axis handle, is another way of making
     * %   an axis current for subsequent plotting commands.
     * %
     * %   SUBPLOT('position',[left bottom width height]) creates an
     * %   axis at the specified position in normalized coordinates (in 
     * %   in the range from 0.0 to 1.0).
     * %
     * %   If a SUBPLOT specification causes a new axis to overlap an
     * %   existing axis, the existing axis is deleted - unless the position
     * %   of the new and existing axis are identical.  For example,
     * %   the statement SUBPLOT(1,2,1) deletes all existing axes overlapping
     * %   the left side of the Figure window and creates a new axis on that
     * %   side - unless there is an axes there with a position that exactly
     * %   matches the position of the new axes (and 'replace' was not specified),
     * %   in which case all other overlapping axes will be deleted and the 
     * %   matching axes will become the current axes.
     * %   
     * %
     * %   SUBPLOT(111) is an exception to the rules above, and is not
     * %   identical in behavior to SUBPLOT(1,1,1).  For reasons of backwards
     * %   compatibility, it is a special case of subplot which does not
     * %   immediately create an axes, but instead sets up the figure so that
     * %   the next graphics command executes CLF RESET in the figure
     * %   (deleting all children of the figure), and creates a new axes in
     * %   the default position.  This syntax does not return a handle, so it
     * %   is an error to specify a return argument.  The delayed CLF RESET
     * %   is accomplished by setting the figure's NextPlot to 'replace'.
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.22 $  $Date: 2002/04/08 21:44:37 $
     * 
     * % we will kill all overlapping axes siblings if we encounter the mnp
     * % or m,n,p specifier (excluding '111').
     * % But if we get the 'position' or H specifier, we won't check for and
     * % delete overlapping siblings:
     * narg = nargin;
     */
    mlfAssign(&narg, mlfScalar(nargin_));
    /*
     * kill_siblings = 0;
     */
    mlfAssign(&kill_siblings, _mxarray0_);
    /*
     * create_axis = 1;
     */
    mlfAssign(&create_axis, _mxarray1_);
    /*
     * delay_destroy = 0;
     */
    mlfAssign(&delay_destroy, _mxarray0_);
    /*
     * tol = sqrt(eps);
     */
    mlfAssign(&tol, mlfSqrt(_mxarray2_));
    /*
     * if narg == 0 % make compatible with 3.5, i.e. subplot == subplot(111)
     */
    if (mclEqBool(mclVv(narg, "narg"), _mxarray0_)) {
        /*
         * nrows = 111;
         */
        mlfAssign(&nrows, _mxarray3_);
        /*
         * narg = 1;
         */
        mlfAssign(&narg, _mxarray1_);
    /*
     * end
     */
    }
    /*
     * 
     * %check for encoded format
     * handle = '';
     */
    mlfAssign(&handle, _mxarray4_);
    /*
     * position = '';
     */
    mlfAssign(&position, _mxarray4_);
    /*
     * 
     * if narg == 1
     */
    if (mclEqBool(mclVv(narg, "narg"), _mxarray1_)) {
        /*
         * % The argument could be one of 3 things:
         * % 1) a 3-digit number 100 < num < 1000, of the format mnp
         * % 2) a 3-character string containing a number as above
         * % 3) an axis handle
         * code = nrows;
         */
        mlfAssign(&code, mclVa(nrows, "nrows"));
        /*
         * 
         * % turn string into a number:
         * if(isstr(code)) 
         */
        if (mlfTobool(mlfIsstr(mclVv(code, "code")))) {
            /*
             * code = str2double(code);
             */
            mlfAssign(&code, mlfStr2double(mclVv(code, "code")));
        /*
         * end
         */
        }
        /*
         * 
         * % number with a fractional part can only be an identifier:
         * if(rem(code,1) > 0)
         */
        if (mclGtBool(mlfRem(mclVv(code, "code"), _mxarray1_), _mxarray0_)) {
            /*
             * handle = code;
             */
            mlfAssign(&handle, mclVv(code, "code"));
            /*
             * if ~strcmp(get(handle,'type'),'axes')
             */
            if (mclNotBool(
                  mlfStrcmp(
                    mlfNGet(1, mclVv(handle, "handle"), _mxarray5_, NULL),
                    _mxarray7_))) {
                /*
                 * error('Requires valid axes handle for input.')
                 */
                mlfError(_mxarray9_, NULL);
            /*
             * end
             */
            }
            /*
             * create_axis = 0;
             */
            mlfAssign(&create_axis, _mxarray0_);
        /*
         * % all other numbers will be converted to mnp format:
         * else
         */
        } else {
            /*
             * thisPlot = rem(code, 10);
             */
            mlfAssign(&thisPlot, mlfRem(mclVv(code, "code"), _mxarray11_));
            /*
             * ncols = rem( fix(code-thisPlot)/10,10);
             */
            mlfAssign(
              &ncols,
              mlfRem(
                mclMrdivide(
                  mlfFix(
                    mclMinus(mclVv(code, "code"), mclVa(thisPlot, "thisPlot"))),
                  _mxarray11_),
                _mxarray11_));
            /*
             * nrows = fix(code/100);
             */
            mlfAssign(
              &nrows, mlfFix(mclMrdivide(mclVv(code, "code"), _mxarray12_)));
            /*
             * if nrows*ncols < thisPlot
             */
            if (mclLtBool(
                  mclMtimes(mclVa(nrows, "nrows"), mclVa(ncols, "ncols")),
                  mclVa(thisPlot, "thisPlot"))) {
                /*
                 * error('Index exceeds number of subplots.');
                 */
                mlfError(_mxarray13_, NULL);
            /*
             * end
             */
            }
            /*
             * kill_siblings = 1;
             */
            mlfAssign(&kill_siblings, _mxarray1_);
            /*
             * if(code == 111)
             */
            if (mclEqBool(mclVv(code, "code"), _mxarray3_)) {
                /*
                 * create_axis   = 0;
                 */
                mlfAssign(&create_axis, _mxarray0_);
                /*
                 * delay_destroy = 1;
                 */
                mlfAssign(&delay_destroy, _mxarray1_);
            /*
             * else
             */
            } else {
                /*
                 * create_axis   = 1;
                 */
                mlfAssign(&create_axis, _mxarray1_);
                /*
                 * delay_destroy = 0;
                 */
                mlfAssign(&delay_destroy, _mxarray0_);
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
     * elseif narg == 2
     */
    } else if (mclEqBool(mclVv(narg, "narg"), _mxarray15_)) {
        /*
         * % The arguments MUST be the string 'position' and a 4-element vector:
         * if(strcmp(lower(nrows), 'position'))
         */
        if (mlfTobool(
              mlfStrcmp(mlfLower(mclVa(nrows, "nrows")), _mxarray16_))) {
            /*
             * pos_size = size(ncols);
             */
            mlfAssign(
              &pos_size,
              mlfSize(mclValueVarargout(), mclVa(ncols, "ncols"), NULL));
            /*
             * if(pos_size(1) * pos_size(2) == 4)
             */
            if (mclEqBool(
                  mclMtimes(
                    mclIntArrayRef1(mclVv(pos_size, "pos_size"), 1),
                    mclIntArrayRef1(mclVv(pos_size, "pos_size"), 2)),
                  _mxarray18_)) {
                /*
                 * position = ncols;
                 */
                mlfAssign(&position, mclVa(ncols, "ncols"));
            /*
             * else
             */
            } else {
                /*
                 * error(['subplot(''position'',',...
                 */
                mlfError(_mxarray19_, NULL);
            /*
             * ' [left bottom width height]) is what works'])
             * end
             */
            }
        /*
         * else
         */
        } else {
            /*
             * error('Unknown command option')
             */
            mlfError(_mxarray21_, NULL);
        /*
         * end
         */
        }
        /*
         * kill_siblings = 1; % Kill overlaps here also.
         */
        mlfAssign(&kill_siblings, _mxarray1_);
    /*
     * 
     * elseif narg == 3
     */
    } else if (mclEqBool(mclVv(narg, "narg"), _mxarray23_)) {
        /*
         * % passed in subplot(m,n,p) -- we should kill overlaps
         * % here too:
         * kill_siblings = 1;
         */
        mlfAssign(&kill_siblings, _mxarray1_);
    /*
     * 
     * elseif narg == 4
     */
    } else if (mclEqBool(mclVv(narg, "narg"), _mxarray18_)) {
        /*
         * % passed in subplot(m,n,p,'replace') - probably
         * if strncmp(lower(replace),'replace',1)
         */
        if (mlfTobool(
              mlfStrncmp(
                mlfLower(mclVa(replace, "replace")),
                _mxarray24_,
                _mxarray1_))) {
            /*
             * kill_siblings = 2; % kill nomatter what
             */
            mlfAssign(&kill_siblings, _mxarray15_);
        /*
         * else
         */
        } else {
            /*
             * kill_siblings = 1; % kill if it overlaps stuff
             */
            mlfAssign(&kill_siblings, _mxarray1_);
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
     * 
     * 
     * 
     * % if we recovered an identifier earlier, use it:
     * if(~isempty(handle))
     */
    if (mclNotBool(mlfIsempty(mclVv(handle, "handle")))) {
        /*
         * set(get(0,'CurrentFigure'),'CurrentAxes',handle);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0,
            mlfNGet(1, _mxarray0_, _mxarray26_, NULL),
            _mxarray28_,
            mclVv(handle, "handle"),
            NULL));
    /*
     * % if we haven't recovered position yet, generate it from mnp info:
     * elseif(isempty(position))
     */
    } else if (mlfTobool(mlfIsempty(mclVv(position, "position")))) {
        /*
         * if (min(thisPlot) < 1)
         */
        if (mclLtBool(
              mlfMin(NULL, mclVa(thisPlot, "thisPlot"), NULL, NULL),
              _mxarray1_)) {
            /*
             * error('Illegal plot number.')
             */
            mlfError(_mxarray30_, NULL);
        /*
         * elseif (max(thisPlot) > ncols*nrows)
         */
        } else if (mclGtBool(
                     mlfMax(NULL, mclVa(thisPlot, "thisPlot"), NULL, NULL),
                     mclMtimes(mclVa(ncols, "ncols"), mclVa(nrows, "nrows")))) {
            /*
             * error('Index exceeds number of subplots.')
             */
            mlfError(_mxarray13_, NULL);
        /*
         * else
         */
        } else {
            /*
             * % This is the percent offset from the subplot grid of the plotbox.
             * PERC_OFFSET_L = 2*0.09;
             */
            mlfAssign(&PERC_OFFSET_L, _mxarray32_);
            /*
             * PERC_OFFSET_R = 2*0.045;
             */
            mlfAssign(&PERC_OFFSET_R, _mxarray33_);
            /*
             * PERC_OFFSET_B = PERC_OFFSET_L;
             */
            mlfAssign(&PERC_OFFSET_B, mclVv(PERC_OFFSET_L, "PERC_OFFSET_L"));
            /*
             * PERC_OFFSET_T = PERC_OFFSET_R;
             */
            mlfAssign(&PERC_OFFSET_T, mclVv(PERC_OFFSET_R, "PERC_OFFSET_R"));
            /*
             * if nrows > 2
             */
            if (mclGtBool(mclVa(nrows, "nrows"), _mxarray15_)) {
                /*
                 * PERC_OFFSET_T = 0.9*PERC_OFFSET_T;
                 */
                mlfAssign(
                  &PERC_OFFSET_T,
                  mclMtimes(
                    _mxarray34_, mclVv(PERC_OFFSET_T, "PERC_OFFSET_T")));
                /*
                 * PERC_OFFSET_B = 0.9*PERC_OFFSET_B;
                 */
                mlfAssign(
                  &PERC_OFFSET_B,
                  mclMtimes(
                    _mxarray34_, mclVv(PERC_OFFSET_B, "PERC_OFFSET_B")));
            /*
             * end
             */
            }
            /*
             * if ncols > 2
             */
            if (mclGtBool(mclVa(ncols, "ncols"), _mxarray15_)) {
                /*
                 * PERC_OFFSET_L = 0.9*PERC_OFFSET_L;
                 */
                mlfAssign(
                  &PERC_OFFSET_L,
                  mclMtimes(
                    _mxarray34_, mclVv(PERC_OFFSET_L, "PERC_OFFSET_L")));
                /*
                 * PERC_OFFSET_R = 0.9*PERC_OFFSET_R;
                 */
                mlfAssign(
                  &PERC_OFFSET_R,
                  mclMtimes(
                    _mxarray34_, mclVv(PERC_OFFSET_R, "PERC_OFFSET_R")));
            /*
             * end
             */
            }
            /*
             * 
             * row = (nrows-1) -fix((thisPlot-1)/ncols);
             */
            mlfAssign(
              &row,
              mclMinus(
                mclMinus(mclVa(nrows, "nrows"), _mxarray1_),
                mlfFix(
                  mclMrdivide(
                    mclMinus(mclVa(thisPlot, "thisPlot"), _mxarray1_),
                    mclVa(ncols, "ncols")))));
            /*
             * col = rem (thisPlot-1, ncols);
             */
            mlfAssign(
              &col,
              mlfRem(
                mclMinus(mclVa(thisPlot, "thisPlot"), _mxarray1_),
                mclVa(ncols, "ncols")));
            /*
             * 
             * % For this to work the default axes position must be in normalized coordinates
             * if ~strcmp(get(gcf,'defaultaxesunits'),'normalized')
             */
            if (mclNotBool(
                  mlfStrcmp(
                    mlfNGet(1, mlfGcf(), _mxarray35_, NULL), _mxarray37_))) {
                /*
                 * warning('DefaultAxesUnits not normalized.')
                 */
                mclPrintAns(&ans, mlfNWarning(0, NULL, _mxarray39_, NULL));
                /*
                 * tmp = axes;
                 */
                mlfAssign(&tmp, mlfNAxes(1, NULL));
                /*
                 * set(axes,'units','normalized')
                 */
                mclPrintAns(
                  &ans,
                  mlfNSet(
                    0, mlfNAxes(1, NULL), _mxarray41_, _mxarray37_, NULL));
                /*
                 * def_pos = get(tmp,'position');
                 */
                mlfAssign(
                  &def_pos, mlfNGet(1, mclVv(tmp, "tmp"), _mxarray16_, NULL));
                /*
                 * delete(tmp)
                 */
                mlfDelete(mclVv(tmp, "tmp"), NULL);
            /*
             * else
             */
            } else {
                /*
                 * def_pos = get(gcf,'DefaultAxesPosition');
                 */
                mlfAssign(&def_pos, mlfNGet(1, mlfGcf(), _mxarray43_, NULL));
            /*
             * end
             */
            }
            /*
             * col_offset = def_pos(3)*(PERC_OFFSET_L+PERC_OFFSET_R)/ ...
             */
            mlfAssign(
              &col_offset,
              mclMrdivide(
                mclMtimes(
                  mclIntArrayRef1(mclVv(def_pos, "def_pos"), 3),
                  mclPlus(
                    mclVv(PERC_OFFSET_L, "PERC_OFFSET_L"),
                    mclVv(PERC_OFFSET_R, "PERC_OFFSET_R"))),
                mclMinus(
                  mclMinus(
                    mclVa(ncols, "ncols"),
                    mclVv(PERC_OFFSET_L, "PERC_OFFSET_L")),
                  mclVv(PERC_OFFSET_R, "PERC_OFFSET_R"))));
            /*
             * (ncols-PERC_OFFSET_L-PERC_OFFSET_R);
             * row_offset = def_pos(4)*(PERC_OFFSET_B+PERC_OFFSET_T)/ ...
             */
            mlfAssign(
              &row_offset,
              mclMrdivide(
                mclMtimes(
                  mclIntArrayRef1(mclVv(def_pos, "def_pos"), 4),
                  mclPlus(
                    mclVv(PERC_OFFSET_B, "PERC_OFFSET_B"),
                    mclVv(PERC_OFFSET_T, "PERC_OFFSET_T"))),
                mclMinus(
                  mclMinus(
                    mclVa(nrows, "nrows"),
                    mclVv(PERC_OFFSET_B, "PERC_OFFSET_B")),
                  mclVv(PERC_OFFSET_T, "PERC_OFFSET_T"))));
            /*
             * (nrows-PERC_OFFSET_B-PERC_OFFSET_T);
             * totalwidth = def_pos(3) + col_offset;
             */
            mlfAssign(
              &totalwidth,
              mclPlus(
                mclIntArrayRef1(mclVv(def_pos, "def_pos"), 3),
                mclVv(col_offset, "col_offset")));
            /*
             * totalheight = def_pos(4) + row_offset;
             */
            mlfAssign(
              &totalheight,
              mclPlus(
                mclIntArrayRef1(mclVv(def_pos, "def_pos"), 4),
                mclVv(row_offset, "row_offset")));
            /*
             * width = totalwidth/ncols*(max(col)-min(col)+1)-col_offset;
             */
            mlfAssign(
              &width,
              mclMinus(
                mclMtimes(
                  mclMrdivide(
                    mclVv(totalwidth, "totalwidth"), mclVa(ncols, "ncols")),
                  mclPlus(
                    mclMinus(
                      mlfMax(NULL, mclVv(col, "col"), NULL, NULL),
                      mlfMin(NULL, mclVv(col, "col"), NULL, NULL)),
                    _mxarray1_)),
                mclVv(col_offset, "col_offset")));
            /*
             * height = totalheight/nrows*(max(row)-min(row)+1)-row_offset;
             */
            mlfAssign(
              &height,
              mclMinus(
                mclMtimes(
                  mclMrdivide(
                    mclVv(totalheight, "totalheight"), mclVa(nrows, "nrows")),
                  mclPlus(
                    mclMinus(
                      mlfMax(NULL, mclVv(row, "row"), NULL, NULL),
                      mlfMin(NULL, mclVv(row, "row"), NULL, NULL)),
                    _mxarray1_)),
                mclVv(row_offset, "row_offset")));
            /*
             * position = [def_pos(1)+min(col)*totalwidth/ncols ...
             */
            mlfAssign(
              &position,
              mlfHorzcat(
                mclPlus(
                  mclIntArrayRef1(mclVv(def_pos, "def_pos"), 1),
                  mclMrdivide(
                    mclMtimes(
                      mlfMin(NULL, mclVv(col, "col"), NULL, NULL),
                      mclVv(totalwidth, "totalwidth")),
                    mclVa(ncols, "ncols"))),
                mclPlus(
                  mclIntArrayRef1(mclVv(def_pos, "def_pos"), 2),
                  mclMrdivide(
                    mclMtimes(
                      mlfMin(NULL, mclVv(row, "row"), NULL, NULL),
                      mclVv(totalheight, "totalheight")),
                    mclVa(nrows, "nrows"))),
                mclVv(width, "width"),
                mclVv(height, "height"),
                NULL));
            /*
             * def_pos(2)+min(row)*totalheight/nrows ...
             * width height];
             * if width <= 0.5*totalwidth/ncols
             */
            if (mclLeBool(
                  mclVv(width, "width"),
                  mclMrdivide(
                    mclMtimes(_mxarray45_, mclVv(totalwidth, "totalwidth")),
                    mclVa(ncols, "ncols")))) {
                /*
                 * position(1) = def_pos(1)+min(col)*(def_pos(3)/ncols);
                 */
                mclIntArrayAssign1(
                  &position,
                  mclPlus(
                    mclIntArrayRef1(mclVv(def_pos, "def_pos"), 1),
                    mclMtimes(
                      mlfMin(NULL, mclVv(col, "col"), NULL, NULL),
                      mclMrdivide(
                        mclIntArrayRef1(mclVv(def_pos, "def_pos"), 3),
                        mclVa(ncols, "ncols")))),
                  1);
                /*
                 * position(3) = 0.7*(def_pos(3)/ncols)*(max(col)-min(col)+1);
                 */
                mclIntArrayAssign1(
                  &position,
                  mclMtimes(
                    mclMtimes(
                      _mxarray46_,
                      mclMrdivide(
                        mclIntArrayRef1(mclVv(def_pos, "def_pos"), 3),
                        mclVa(ncols, "ncols"))),
                    mclPlus(
                      mclMinus(
                        mlfMax(NULL, mclVv(col, "col"), NULL, NULL),
                        mlfMin(NULL, mclVv(col, "col"), NULL, NULL)),
                      _mxarray1_)),
                  3);
            /*
             * end
             */
            }
            /*
             * if height <= 0.5*totalheight/nrows
             */
            if (mclLeBool(
                  mclVv(height, "height"),
                  mclMrdivide(
                    mclMtimes(_mxarray45_, mclVv(totalheight, "totalheight")),
                    mclVa(nrows, "nrows")))) {
                /*
                 * position(2) = def_pos(2)+min(row)*(def_pos(4)/nrows);
                 */
                mclIntArrayAssign1(
                  &position,
                  mclPlus(
                    mclIntArrayRef1(mclVv(def_pos, "def_pos"), 2),
                    mclMtimes(
                      mlfMin(NULL, mclVv(row, "row"), NULL, NULL),
                      mclMrdivide(
                        mclIntArrayRef1(mclVv(def_pos, "def_pos"), 4),
                        mclVa(nrows, "nrows")))),
                  2);
                /*
                 * position(4) = 0.7*(def_pos(4)/nrows)*(max(row)-min(row)+1);
                 */
                mclIntArrayAssign1(
                  &position,
                  mclMtimes(
                    mclMtimes(
                      _mxarray46_,
                      mclMrdivide(
                        mclIntArrayRef1(mclVv(def_pos, "def_pos"), 4),
                        mclVa(nrows, "nrows"))),
                    mclPlus(
                      mclMinus(
                        mlfMax(NULL, mclVv(row, "row"), NULL, NULL),
                        mlfMin(NULL, mclVv(row, "row"), NULL, NULL)),
                      _mxarray1_)),
                  4);
            /*
             * end
             */
            }
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
     * % kill overlapping siblings if mnp specifier was used:
     * nextstate = get(gcf,'nextplot');
     */
    mlfAssign(&nextstate, mlfNGet(1, mlfGcf(), _mxarray47_, NULL));
    /*
     * 
     * if strncmp(nextstate,'replace',7)
     */
    if (mlfTobool(
          mlfStrncmp(
            mclVv(nextstate, "nextstate"), _mxarray24_, _mxarray49_))) {
        /*
         * nextstate = 'add'; 
         */
        mlfAssign(&nextstate, _mxarray50_);
    /*
     * end
     */
    }
    /*
     * 
     * if(kill_siblings)
     */
    if (mlfTobool(mclVv(kill_siblings, "kill_siblings"))) {
        /*
         * if delay_destroy
         */
        if (mlfTobool(mclVv(delay_destroy, "delay_destroy"))) {
            /*
             * if nargout
             */
            if (nargout_ != 0) {
                /*
                 * error('Function called with too many output arguments')
                 */
                mlfError(_mxarray52_, NULL);
            /*
             * else
             */
            } else {
                /*
                 * set(gcf,'NextPlot','replace'); 
                 */
                mclAssignAns(
                  &ans, mlfNSet(0, mlfGcf(), _mxarray54_, _mxarray24_, NULL));
                /*
                 * return
                 */
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
         * sibs = datachildren(gcf);
         */
        mlfAssign(&sibs, mlfDatachildren(mlfGcf()));
        /*
         * got_one = 0;
         */
        mlfAssign(&got_one, _mxarray0_);
        /*
         * for i = 1:length(sibs)
         */
        {
            int v_ = mclForIntStart(1);
            int e_ = mclLengthInt(mclVv(sibs, "sibs"));
            if (v_ > e_) {
                mlfAssign(&i, _mxarray56_);
            } else {
                /*
                 * % Be aware that handles in this list might be destroyed before
                 * % we get to them, because of other objects' DeleteFcn callbacks...
                 * if(ishandle(sibs(i)) & strcmp(get(sibs(i),'Type'),'axes'))
                 * units = get(sibs(i),'Units');
                 * set(sibs(i),'Units','normalized')
                 * sibpos = get(sibs(i),'Position');
                 * set(sibs(i),'Units',units);
                 * intersect = 1;
                 * if((position(1) >= sibpos(1) + sibpos(3)-tol) | ...
                 * (sibpos(1) >= position(1) + position(3)-tol) | ...
                 * (position(2) >= sibpos(2) + sibpos(4)-tol) | ...
                 * (sibpos(2) >= position(2) + position(4)-tol))
                 * intersect = 0;
                 * end
                 * if intersect
                 * % if already found the position match axis (got_one)
                 * % or if this intersecting axis doesn't have matching pos
                 * % or if we know we want to make a new axes anyway (kill_siblings==2)
                 * % delete it
                 * if got_one | ...
                 * any(abs(sibpos - position) > tol) | ...
                 * kill_siblings==2
                 * delete(sibs(i));
                 * % otherwise, the intersecting sibs' pos matches subplot area
                 * else
                 * got_one = 1;
                 * set(gcf,'CurrentAxes',sibs(i));
                 * if strcmp(nextstate,'new')
                 * create_axis = 1;
                 * else
                 * create_axis = 0;
                 * end
                 * end
                 * end
                 * end
                 * end
                 */
                for (; ; ) {
                    mxArray * a_
                      = mclInitialize(
                          mlfIshandle(
                            mclIntArrayRef1(mclVv(sibs, "sibs"), v_)));
                    if (mlfTobool(a_)
                        && mlfTobool(
                             mclAnd(
                               a_,
                               mlfStrcmp(
                                 mlfNGet(
                                   1,
                                   mclIntArrayRef1(mclVv(sibs, "sibs"), v_),
                                   _mxarray57_,
                                   NULL),
                                 _mxarray7_)))) {
                        mxDestroyArray(a_);
                        mlfAssign(
                          &units,
                          mlfNGet(
                            1,
                            mclIntArrayRef1(mclVv(sibs, "sibs"), v_),
                            _mxarray59_,
                            NULL));
                        mclPrintAns(
                          &ans,
                          mlfNSet(
                            0,
                            mclIntArrayRef1(mclVv(sibs, "sibs"), v_),
                            _mxarray59_,
                            _mxarray37_,
                            NULL));
                        mlfAssign(
                          &sibpos,
                          mlfNGet(
                            1,
                            mclIntArrayRef1(mclVv(sibs, "sibs"), v_),
                            _mxarray61_,
                            NULL));
                        mclAssignAns(
                          &ans,
                          mlfNSet(
                            0,
                            mclIntArrayRef1(mclVv(sibs, "sibs"), v_),
                            _mxarray59_,
                            mclVv(units, "units"),
                            NULL));
                        mlfAssign(&intersect, _mxarray1_);
                        {
                            mxArray * a_0
                              = mclInitialize(
                                  mclGe(
                                    mclIntArrayRef1(
                                      mclVv(position, "position"), 1),
                                    mclMinus(
                                      mclPlus(
                                        mclIntArrayRef1(
                                          mclVv(sibpos, "sibpos"), 1),
                                        mclIntArrayRef1(
                                          mclVv(sibpos, "sibpos"), 3)),
                                      mclVv(tol, "tol"))));
                            if (mlfTobool(a_0)) {
                                mlfAssign(&a_0, mlfScalar(1));
                            } else {
                                mlfAssign(
                                  &a_0,
                                  mclOr(
                                    a_0,
                                    mclGe(
                                      mclIntArrayRef1(
                                        mclVv(sibpos, "sibpos"), 1),
                                      mclMinus(
                                        mclPlus(
                                          mclIntArrayRef1(
                                            mclVv(position, "position"), 1),
                                          mclIntArrayRef1(
                                            mclVv(position, "position"), 3)),
                                        mclVv(tol, "tol")))));
                            }
                            if (mlfTobool(a_0)) {
                                mlfAssign(&a_0, mlfScalar(1));
                            } else {
                                mlfAssign(
                                  &a_0,
                                  mclOr(
                                    a_0,
                                    mclGe(
                                      mclIntArrayRef1(
                                        mclVv(position, "position"), 2),
                                      mclMinus(
                                        mclPlus(
                                          mclIntArrayRef1(
                                            mclVv(sibpos, "sibpos"), 2),
                                          mclIntArrayRef1(
                                            mclVv(sibpos, "sibpos"), 4)),
                                        mclVv(tol, "tol")))));
                            }
                            if (mlfTobool(a_0)
                                || mlfTobool(
                                     mclOr(
                                       a_0,
                                       mclGe(
                                         mclIntArrayRef1(
                                           mclVv(sibpos, "sibpos"), 2),
                                         mclMinus(
                                           mclPlus(
                                             mclIntArrayRef1(
                                               mclVv(position, "position"), 2),
                                             mclIntArrayRef1(
                                               mclVv(position, "position"),
                                               4)),
                                           mclVv(tol, "tol")))))) {
                                mxDestroyArray(a_0);
                                mlfAssign(&intersect, _mxarray0_);
                            } else {
                                mxDestroyArray(a_0);
                            }
                        }
                        if (mlfTobool(mclVv(intersect, "intersect"))) {
                            mxArray * a_1
                              = mclInitialize(mclVv(got_one, "got_one"));
                            if (mlfTobool(a_1)) {
                                mlfAssign(&a_1, mlfScalar(1));
                            } else {
                                mlfAssign(
                                  &a_1,
                                  mclOr(
                                    a_1,
                                    mlfAny(
                                      mclGt(
                                        mlfAbs(
                                          mclMinus(
                                            mclVv(sibpos, "sibpos"),
                                            mclVv(position, "position"))),
                                        mclVv(tol, "tol")),
                                      NULL)));
                            }
                            if (mlfTobool(a_1)
                                || mlfTobool(
                                     mclOr(
                                       a_1,
                                       mclEq(
                                         mclVv(kill_siblings, "kill_siblings"),
                                         _mxarray15_)))) {
                                mxDestroyArray(a_1);
                                mlfDelete(
                                  mclIntArrayRef1(mclVv(sibs, "sibs"), v_),
                                  NULL);
                            } else {
                                mxDestroyArray(a_1);
                                mlfAssign(&got_one, _mxarray1_);
                                mclAssignAns(
                                  &ans,
                                  mlfNSet(
                                    0,
                                    mlfGcf(),
                                    _mxarray28_,
                                    mclIntArrayRef1(mclVv(sibs, "sibs"), v_),
                                    NULL));
                                if (mlfTobool(
                                      mlfStrcmp(
                                        mclVv(nextstate, "nextstate"),
                                        _mxarray63_))) {
                                    mlfAssign(&create_axis, _mxarray1_);
                                } else {
                                    mlfAssign(&create_axis, _mxarray0_);
                                }
                            }
                        }
                    } else {
                        mxDestroyArray(a_);
                    }
                    if (v_ == e_) {
                        break;
                    }
                    ++v_;
                }
                mlfAssign(&i, mlfScalar(v_));
            }
        }
        /*
         * set(gcf,'NextPlot',nextstate);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mlfGcf(), _mxarray54_, mclVv(nextstate, "nextstate"), NULL));
    /*
     * end
     */
    }
    /*
     * 
     * % create the axis:
     * if create_axis
     */
    if (mlfTobool(mclVv(create_axis, "create_axis"))) {
        /*
         * if strcmp(nextstate,'new')
         */
        if (mlfTobool(mlfStrcmp(mclVv(nextstate, "nextstate"), _mxarray63_))) {
            /*
             * figure
             */
            mclPrintAns(&ans, mlfNFigure(0, NULL));
        /*
         * end
         */
        }
        /*
         * ax = axes('units','normal','Position', position);
         */
        mlfAssign(
          &ax,
          mlfNAxes(
            1,
            _mxarray41_,
            _mxarray65_,
            _mxarray61_,
            mclVv(position, "position"),
            NULL));
        /*
         * set(ax,'units',get(gcf,'defaultaxesunits'))
         */
        mclPrintAns(
          &ans,
          mlfNSet(
            0,
            mclVv(ax, "ax"),
            _mxarray41_,
            mlfNGet(1, mlfGcf(), _mxarray35_, NULL),
            NULL));
    /*
     * else 
     */
    } else {
        /*
         * ax = gca; 
         */
        mlfAssign(&ax, mlfGca(NULL));
    /*
     * end
     */
    }
    /*
     * 
     * % return identifier, if requested:
     * if(nargout > 0)
     */
    if (nargout_ > 0) {
        /*
         * theAxis = ax;
         */
        mlfAssign(&theAxis, mclVv(ax, "ax"));
    /*
     * end
     */
    }
    return_:
    mclValidateOutput(theAxis, 1, nargout_, "theAxis", "subplot");
    mxDestroyArray(narg);
    mxDestroyArray(kill_siblings);
    mxDestroyArray(create_axis);
    mxDestroyArray(delay_destroy);
    mxDestroyArray(tol);
    mxDestroyArray(handle);
    mxDestroyArray(position);
    mxDestroyArray(code);
    mxDestroyArray(ans);
    mxDestroyArray(pos_size);
    mxDestroyArray(PERC_OFFSET_L);
    mxDestroyArray(PERC_OFFSET_R);
    mxDestroyArray(PERC_OFFSET_B);
    mxDestroyArray(PERC_OFFSET_T);
    mxDestroyArray(row);
    mxDestroyArray(col);
    mxDestroyArray(tmp);
    mxDestroyArray(def_pos);
    mxDestroyArray(col_offset);
    mxDestroyArray(row_offset);
    mxDestroyArray(totalwidth);
    mxDestroyArray(totalheight);
    mxDestroyArray(width);
    mxDestroyArray(height);
    mxDestroyArray(nextstate);
    mxDestroyArray(sibs);
    mxDestroyArray(got_one);
    mxDestroyArray(i);
    mxDestroyArray(units);
    mxDestroyArray(sibpos);
    mxDestroyArray(intersect);
    mxDestroyArray(ax);
    mxDestroyArray(replace);
    mxDestroyArray(thisPlot);
    mxDestroyArray(ncols);
    mxDestroyArray(nrows);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return theAxis;
}
