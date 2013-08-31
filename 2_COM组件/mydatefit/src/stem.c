/*
 * MATLAB Compiler: 3.0
 * Date: Sun Jun 14 03:22:41 2009
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
#include "stem.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;

static mxChar _array2_[1] = { '-' };
static mxArray * _mxarray1_;

static mxChar _array4_[1] = { 'o' };
static mxArray * _mxarray3_;
static mxArray * _mxarray5_;

static mxChar _array7_[1] = { 'f' };
static mxArray * _mxarray6_;
static mxArray * _mxarray8_;

static mxChar _array10_[20] = { 'U', 'n', 'k', 'n', 'o', 'w', 'n',
                                ' ', 'o', 'p', 't', 'i', 'o', 'n',
                                ' ', '"', '%', 's', '"', '.' };
static mxArray * _mxarray9_;
static mxArray * _mxarray11_;

static mxChar _array13_[4] = { 'p', 'l', 'o', 't' };
static mxArray * _mxarray12_;
static mxArray * _mxarray14_;
static double _ieee_nan_;
static mxArray * _mxarray15_;

static mxChar _array17_[8] = { 'N', 'e', 'x', 't', 'P', 'l', 'o', 't' };
static mxArray * _mxarray16_;

static mxChar _array19_[6] = { 'p', 'a', 'r', 'e', 'n', 't' };
static mxArray * _mxarray18_;

static mxChar _array21_[2] = { 'o', 'n' };
static mxArray * _mxarray20_;
static mxArray * _mxarray22_;

static mxChar _array24_[5] = { 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray23_;

static mxChar _array26_[15] = { 'M', 'a', 'r', 'k', 'e', 'r', 'F', 'a',
                                'c', 'e', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray25_;

void InitializeModule_stem(void) {
    _mxarray0_ = mclInitializeDouble(0.0);
    _mxarray1_ = mclInitializeString(1, _array2_);
    _mxarray3_ = mclInitializeString(1, _array4_);
    _mxarray5_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray6_ = mclInitializeString(1, _array7_);
    _mxarray8_ = mclInitializeDouble(1.0);
    _mxarray9_ = mclInitializeString(20, _array10_);
    _mxarray11_ = mclInitializeDouble(2.0);
    _mxarray12_ = mclInitializeString(4, _array13_);
    _mxarray14_ = mclInitializeDouble(3.0);
    _ieee_nan_ = mclGetNaN();
    _mxarray15_ = mclInitializeDouble(_ieee_nan_);
    _mxarray16_ = mclInitializeString(8, _array17_);
    _mxarray18_ = mclInitializeString(6, _array19_);
    _mxarray20_ = mclInitializeString(2, _array21_);
    _mxarray22_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray23_ = mclInitializeString(5, _array24_);
    _mxarray25_ = mclInitializeString(15, _array26_);
}

void TerminateModule_stem(void) {
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mstem(int nargout_, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_stem
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNStem" contains the nargout interface for the "stem"
 * M-function from file "c:\matlab6p5\toolbox\matlab\specgraph\stem.m" (lines
 * 1-84). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNStem(int nargout, ...) {
    mxArray * varargin = NULL;
    mxArray * hh = NULL;
    mlfVarargin(&varargin, nargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    hh = Mstem(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfReturnValue(hh);
}

/*
 * The function "mlfStem" contains the normal interface for the "stem"
 * M-function from file "c:\matlab6p5\toolbox\matlab\specgraph\stem.m" (lines
 * 1-84). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfStem(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * hh = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    hh = Mstem(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfReturnValue(hh);
}

/*
 * The function "mlfVStem" contains the void interface for the "stem"
 * M-function from file "c:\matlab6p5\toolbox\matlab\specgraph\stem.m" (lines
 * 1-84). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVStem(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * hh = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    hh = Mstem(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxStem" contains the feval interface for the "stem"
 * M-function from file "c:\matlab6p5\toolbox\matlab\specgraph\stem.m" (lines
 * 1-84). The feval function calls the implementation version of stem through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
void mlxStem(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stem Line: 1 Column: 1 The function \"stem\""
            " was called with more than the declared number of outputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mstem(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 0);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "Mstem" is the implementation version of the "stem" M-function
 * from file "c:\matlab6p5\toolbox\matlab\specgraph\stem.m" (lines 1-84). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function hh = stem(varargin)
 */
static mxArray * Mstem(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stem);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * hh = NULL;
    mxArray * h = NULL;
    mxArray * h3 = NULL;
    mxArray * graph2d = NULL;
    mxArray * i = NULL;
    mxArray * h2 = NULL;
    mxArray * h1 = NULL;
    mxArray * hold_state = NULL;
    mxArray * next = NULL;
    mxArray * cax = NULL;
    mxArray * yy = NULL;
    mxArray * xx = NULL;
    mxArray * n = NULL;
    mxArray * y = NULL;
    mxArray * x = NULL;
    mxArray * ans = NULL;
    mxArray * msg = NULL;
    mxArray * m = NULL;
    mxArray * c = NULL;
    mxArray * l = NULL;
    mxArray * v = NULL;
    mxArray * col = NULL;
    mxArray * ms = NULL;
    mxArray * ls = NULL;
    mxArray * fill = NULL;
    mxArray * nin = NULL;
    mclCopyArray(&varargin);
    /*
     * %STEM   Discrete sequence or "stem" plot.
     * %   STEM(Y) plots the data sequence Y as stems from the x axis
     * %   terminated with circles for the data value.
     * %
     * %   STEM(X,Y) plots the data sequence Y at the values specified
     * %   in X.
     * %
     * %   STEM(...,'filled') produces a stem plot with filled markers.
     * %
     * %   STEM(...,'LINESPEC') uses the linetype specified for the stems and
     * %   markers.  See PLOT for possibilities.
     * %
     * %   H = STEM(...) returns a vector of line handles.
     * %
     * %   See also PLOT, BAR, STAIRS.
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.19 $  $Date: 2002/06/05 20:05:17 $
     * 
     * nin = nargin;
     */
    mlfAssign(&nin, mlfScalar(nargin_));
    /*
     * 
     * fill = 0;
     */
    mlfAssign(&fill, _mxarray0_);
    /*
     * ls = '-';
     */
    mlfAssign(&ls, _mxarray1_);
    /*
     * ms = 'o';
     */
    mlfAssign(&ms, _mxarray3_);
    /*
     * col = '';
     */
    mlfAssign(&col, _mxarray5_);
    /*
     * 
     * % Parse the string inputs
     * while isstr(varargin{nin}),
     */
    while (mlfTobool(
             mclFeval(
               mclValueVarargout(),
               mlxIsstr,
               mlfIndexRef(
                 mclVa(varargin, "varargin"), "{?}", mclVv(nin, "nin")),
               NULL))) {
        /*
         * v = varargin{nin};
         */
        mlfAssign(
          &v,
          mlfIndexRef(mclVa(varargin, "varargin"), "{?}", mclVv(nin, "nin")));
        /*
         * if ~isempty(v) & strcmp(lower(v(1)),'f')
         */
        {
            mxArray * a_ = mclInitialize(mclNot(mlfIsempty(mclVv(v, "v"))));
            if (mlfTobool(a_)
                && mlfTobool(
                     mclAnd(
                       a_,
                       mlfStrcmp(
                         mlfLower(mclIntArrayRef1(mclVv(v, "v"), 1)),
                         _mxarray6_)))) {
                mxDestroyArray(a_);
                /*
                 * fill = 1;
                 */
                mlfAssign(&fill, _mxarray8_);
                /*
                 * nin = nin-1;
                 */
                mlfAssign(&nin, mclMinus(mclVv(nin, "nin"), _mxarray8_));
            /*
             * else
             */
            } else {
                mxDestroyArray(a_);
                /*
                 * [l,c,m,msg] = colstyle(v);
                 */
                mlfAssign(&l, mlfColstyle(&c, &m, &msg, mclVv(v, "v")));
                /*
                 * if ~isempty(msg), 
                 */
                if (mclNotBool(mlfIsempty(mclVv(msg, "msg")))) {
                    /*
                     * error(sprintf('Unknown option "%s".',v));
                     */
                    mlfError(
                      mlfSprintf(NULL, _mxarray9_, mclVv(v, "v"), NULL), NULL);
                /*
                 * end
                 */
                }
                /*
                 * if ~isempty(l), ls = l; end
                 */
                if (mclNotBool(mlfIsempty(mclVv(l, "l")))) {
                    mlfAssign(&ls, mclVv(l, "l"));
                }
                /*
                 * if ~isempty(c), col = c; end
                 */
                if (mclNotBool(mlfIsempty(mclVv(c, "c")))) {
                    mlfAssign(&col, mclVv(c, "c"));
                }
                /*
                 * if ~isempty(m), ms = m; end
                 */
                if (mclNotBool(mlfIsempty(mclVv(m, "m")))) {
                    mlfAssign(&ms, mclVv(m, "m"));
                }
                /*
                 * nin = nin-1;
                 */
                mlfAssign(&nin, mclMinus(mclVv(nin, "nin"), _mxarray8_));
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
     * error(nargchk(1,2,nin));
     */
    mlfError(mlfNargchk(_mxarray8_, _mxarray11_, mclVv(nin, "nin")), NULL);
    /*
     * 
     * [msg,x,y] = xychk(varargin{1:nin},'plot');
     */
    mlfAssign(
      &msg,
      mlfXychk(
        &x,
        &y,
        NULL,
        mlfIndexRef(
          mclVa(varargin, "varargin"),
          "{?}",
          mlfColon(_mxarray8_, mclVv(nin, "nin"), NULL)),
        _mxarray12_,
        NULL));
    /*
     * if ~isempty(msg), error(msg); end
     */
    if (mclNotBool(mlfIsempty(mclVv(msg, "msg")))) {
        mlfError(mclVv(msg, "msg"), NULL);
    }
    /*
     * 
     * if min(size(x))==1, x = x(:); end
     */
    if (mclEqBool(
          mlfMin(
            NULL,
            mlfSize(mclValueVarargout(), mclVv(x, "x"), NULL),
            NULL,
            NULL),
          _mxarray8_)) {
        mlfAssign(&x, mclArrayRef1(mclVv(x, "x"), mlfCreateColonIndex()));
    }
    /*
     * if min(size(y))==1, y = y(:); end
     */
    if (mclEqBool(
          mlfMin(
            NULL,
            mlfSize(mclValueVarargout(), mclVv(y, "y"), NULL),
            NULL,
            NULL),
          _mxarray8_)) {
        mlfAssign(&y, mclArrayRef1(mclVv(y, "y"), mlfCreateColonIndex()));
    }
    /*
     * 
     * % Set up data using fancing indexing
     * [m,n] = size(x);
     */
    mlfSize(mlfVarargout(&m, &n, NULL), mclVv(x, "x"), NULL);
    /*
     * xx = zeros(3*m,n);
     */
    mlfAssign(
      &xx,
      mlfZeros(mclMtimes(_mxarray14_, mclVv(m, "m")), mclVv(n, "n"), NULL));
    /*
     * xx(1:3:3*m,:) = x;
     */
    mclArrayAssign2(
      &xx,
      mclVv(x, "x"),
      mlfColon(_mxarray8_, _mxarray14_, mclMtimes(_mxarray14_, mclVv(m, "m"))),
      mlfCreateColonIndex());
    /*
     * xx(2:3:3*m,:) = x;
     */
    mclArrayAssign2(
      &xx,
      mclVv(x, "x"),
      mlfColon(_mxarray11_, _mxarray14_, mclMtimes(_mxarray14_, mclVv(m, "m"))),
      mlfCreateColonIndex());
    /*
     * xx(3:3:3*m,:) = NaN;
     */
    mclArrayAssign2(
      &xx,
      _mxarray15_,
      mlfColon(_mxarray14_, _mxarray14_, mclMtimes(_mxarray14_, mclVv(m, "m"))),
      mlfCreateColonIndex());
    /*
     * 
     * [m,n] = size(y);
     */
    mlfSize(mlfVarargout(&m, &n, NULL), mclVv(y, "y"), NULL);
    /*
     * yy = zeros(3*m,n);
     */
    mlfAssign(
      &yy,
      mlfZeros(mclMtimes(_mxarray14_, mclVv(m, "m")), mclVv(n, "n"), NULL));
    /*
     * yy(2:3:3*m,:) = y;
     */
    mclArrayAssign2(
      &yy,
      mclVv(y, "y"),
      mlfColon(_mxarray11_, _mxarray14_, mclMtimes(_mxarray14_, mclVv(m, "m"))),
      mlfCreateColonIndex());
    /*
     * yy(3:3:3*m,:) = NaN;
     */
    mclArrayAssign2(
      &yy,
      _mxarray15_,
      mlfColon(_mxarray14_, _mxarray14_, mclMtimes(_mxarray14_, mclVv(m, "m"))),
      mlfCreateColonIndex());
    /*
     * 
     * cax = newplot;
     */
    mlfAssign(&cax, mlfNNewplot(1, NULL));
    /*
     * next = lower(get(cax,'NextPlot'));
     */
    mlfAssign(
      &next, mlfLower(mlfNGet(1, mclVv(cax, "cax"), _mxarray16_, NULL)));
    /*
     * hold_state = ishold;
     */
    mlfAssign(&hold_state, mlfIshold(NULL));
    /*
     * 
     * h1 = plot(x,y,[col,ms],'parent',cax); hold on,
     */
    mlfAssign(
      &h1,
      mlfNPlot(
        1,
        mclVv(x, "x"),
        mclVv(y, "y"),
        mlfHorzcat(mclVv(col, "col"), mclVv(ms, "ms"), NULL),
        _mxarray18_,
        mclVv(cax, "cax"),
        NULL));
    mlfHold(_mxarray20_);
    /*
     * h2 = plot(xx,yy,[col,ls],'parent',cax);
     */
    mlfAssign(
      &h2,
      mlfNPlot(
        1,
        mclVv(xx, "xx"),
        mclVv(yy, "yy"),
        mlfHorzcat(mclVv(col, "col"), mclVv(ls, "ls"), NULL),
        _mxarray18_,
        mclVv(cax, "cax"),
        NULL));
    /*
     * for i=1:length(h1), % Make the color of the 'o's the same as the lines.
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclLengthInt(mclVv(h1, "h1"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray22_);
        } else {
            /*
             * c = get(h2(i),'Color');
             * set(h1(i),'Color',c)
             * if fill, set(h1(i),'MarkerFaceColor',c), end
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &c,
                  mlfNGet(
                    1,
                    mclIntArrayRef1(mclVv(h2, "h2"), v_), _mxarray23_, NULL));
                mclPrintAns(
                  &ans,
                  mlfNSet(
                    0,
                    mclIntArrayRef1(mclVv(h1, "h1"), v_),
                    _mxarray23_,
                    mclVv(c, "c"),
                    NULL));
                if (mlfTobool(mclVv(fill, "fill"))) {
                    mclPrintAns(
                      &ans,
                      mlfNSet(
                        0,
                        mclIntArrayRef1(mclVv(h1, "h1"), v_),
                        _mxarray25_,
                        mclVv(c, "c"),
                        NULL));
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
     * 
     * h3 = graph2d.constantline(0); % draw horizontal line through 0
     */
    mlfAssign(
      &h3,
      mlfIndexRef(mclVv(graph2d, "graph2d"), ".constantline(?)", _mxarray0_));
    /*
     * 
     * h = [h1;h2;double(h3)];
     */
    mlfAssign(
      &h,
      mlfVertcat(
        mclVv(h1, "h1"), mclVv(h2, "h2"), mlfDouble(mclVv(h3, "h3")), NULL));
    /*
     * if ~hold_state, set(cax,'NextPlot',next); end
     */
    if (mclNotBool(mclVv(hold_state, "hold_state"))) {
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVv(cax, "cax"), _mxarray16_, mclVv(next, "next"), NULL));
    }
    /*
     * 
     * if nargout>0, hh = h; end
     */
    if (nargout_ > 0) {
        mlfAssign(&hh, mclVv(h, "h"));
    }
    mclValidateOutput(hh, 1, nargout_, "hh", "stem");
    mxDestroyArray(nin);
    mxDestroyArray(fill);
    mxDestroyArray(ls);
    mxDestroyArray(ms);
    mxDestroyArray(col);
    mxDestroyArray(v);
    mxDestroyArray(l);
    mxDestroyArray(c);
    mxDestroyArray(m);
    mxDestroyArray(msg);
    mxDestroyArray(ans);
    mxDestroyArray(x);
    mxDestroyArray(y);
    mxDestroyArray(n);
    mxDestroyArray(xx);
    mxDestroyArray(yy);
    mxDestroyArray(cax);
    mxDestroyArray(next);
    mxDestroyArray(hold_state);
    mxDestroyArray(h1);
    mxDestroyArray(h2);
    mxDestroyArray(i);
    mxDestroyArray(graph2d);
    mxDestroyArray(h3);
    mxDestroyArray(h);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return hh;
}
