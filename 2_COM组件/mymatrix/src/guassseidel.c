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
#include "guassseidel.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static double _ieee_plusinf_;
static mxArray * _mxarray3_;

void InitializeModule_guassseidel(void) {
    _mxarray0_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray1_ = mclInitializeDouble(0.0);
    _mxarray2_ = mclInitializeDouble(1.0);
    _ieee_plusinf_ = mclGetInf();
    _mxarray3_ = mclInitializeDouble(_ieee_plusinf_);
}

void TerminateModule_guassseidel(void) {
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mguassseidel(mxArray * * cnt,
                              int nargout_,
                              mxArray * A,
                              mxArray * b,
                              mxArray * e);

_mexLocalFunctionTable _local_function_table_guassseidel
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfGuassseidel" contains the normal interface for the
 * "guassseidel" M-function from file "c:\matlab6p5\work\guassseidel.m" (lines
 * 1-21). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfGuassseidel(mxArray * * cnt,
                         mxArray * A,
                         mxArray * b,
                         mxArray * e) {
    int nargout = 1;
    mxArray * x = NULL;
    mxArray * cnt__ = NULL;
    mlfEnterNewContext(1, 3, cnt, A, b, e);
    if (cnt != NULL) {
        ++nargout;
    }
    x = Mguassseidel(&cnt__, nargout, A, b, e);
    mlfRestorePreviousContext(1, 3, cnt, A, b, e);
    if (cnt != NULL) {
        mclCopyOutputArg(cnt, cnt__);
    } else {
        mxDestroyArray(cnt__);
    }
    return mlfReturnValue(x);
}

/*
 * The function "mlxGuassseidel" contains the feval interface for the
 * "guassseidel" M-function from file "c:\matlab6p5\work\guassseidel.m" (lines
 * 1-21). The feval function calls the implementation version of guassseidel
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxGuassseidel(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guassseidel Line: 1 Column"
            ": 1 The function \"guassseidel\" was called with"
            " more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guassseidel Line: 1 Column"
            ": 1 The function \"guassseidel\" was called with"
            " more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mguassseidel(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mguassseidel" is the implementation version of the
 * "guassseidel" M-function from file "c:\matlab6p5\work\guassseidel.m" (lines
 * 1-21). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [x,cnt]=GuassSeidel(A,b,e)
 */
static mxArray * Mguassseidel(mxArray * * cnt,
                              int nargout_,
                              mxArray * A,
                              mxArray * b,
                              mxArray * e) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_guassseidel);
    mxArray * x = NULL;
    mxArray * j = NULL;
    mxArray * s = NULL;
    mxArray * x_new = NULL;
    mxArray * i = NULL;
    mxArray * n = NULL;
    mclCopyArray(&A);
    mclCopyArray(&b);
    mclCopyArray(&e);
    /*
     * n=length(A);
     */
    mlfAssign(&n, mlfScalar(mclLengthInt(mclVa(A, "A"))));
    /*
     * for i=1:n
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(n, "n"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray0_);
        } else {
            /*
             * x(i)=0;
             * x_new(i)=1;
             * end
             */
            for (; ; ) {
                mclIntArrayAssign1(&x, _mxarray1_, v_);
                mclIntArrayAssign1(&x_new, _mxarray2_, v_);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * cnt=0;
     */
    mlfAssign(cnt, _mxarray1_);
    /*
     * while(norm(x_new-x,inf)>=abs(e)) %无穷范数表示x_new-x中的最大项，迭代终止条件
     */
    while (mclGeBool(
             mlfNorm(
               mclMinus(mclVv(x_new, "x_new"), mclVv(x, "x")), _mxarray3_),
             mlfAbs(mclVa(e, "e")))) {
        /*
         * cnt=cnt+1;
         */
        mlfAssign(cnt, mclPlus(mclVv(*cnt, "cnt"), _mxarray2_));
        /*
         * x=x_new;
         */
        mlfAssign(&x, mclVv(x_new, "x_new"));
        /*
         * for i=1:n
         */
        {
            int v_ = mclForIntStart(1);
            int e_ = mclForIntEnd(mclVv(n, "n"));
            if (v_ > e_) {
                mlfAssign(&i, _mxarray0_);
            } else {
                /*
                 * s=0;
                 * for j=1:n
                 * if(j~=i)
                 * s=s+A(i,j)*x_new(j);%用x_new(j)而不用x(j)，雅克比与GuassSeidel的区别        
                 * end
                 * end
                 * x_new(i)=(b(i)-s)/A(i,i);
                 * end
                 */
                for (; ; ) {
                    mlfAssign(&s, _mxarray1_);
                    {
                        int v_0 = mclForIntStart(1);
                        int e_0 = mclForIntEnd(mclVv(n, "n"));
                        if (v_0 > e_0) {
                            mlfAssign(&j, _mxarray0_);
                        } else {
                            for (; ; ) {
                                if (mclNeBool(mlfScalar(v_0), mlfScalar(v_))) {
                                    mlfAssign(
                                      &s,
                                      mclPlus(
                                        mclVv(s, "s"),
                                        mclMtimes(
                                          mclIntArrayRef2(
                                            mclVa(A, "A"), v_, v_0),
                                          mclIntArrayRef1(
                                            mclVv(x_new, "x_new"), v_0))));
                                }
                                if (v_0 == e_0) {
                                    break;
                                }
                                ++v_0;
                            }
                            mlfAssign(&j, mlfScalar(v_0));
                        }
                    }
                    mclIntArrayAssign1(
                      &x_new,
                      mclMrdivide(
                        mclMinus(
                          mclIntArrayRef1(mclVa(b, "b"), v_), mclVv(s, "s")),
                        mclIntArrayRef2(mclVa(A, "A"), v_, v_)),
                      v_);
                    if (v_ == e_) {
                        break;
                    }
                    ++v_;
                }
                mlfAssign(&i, mlfScalar(v_));
            }
        }
    /*
     * end
     */
    }
    /*
     * x=x_new';
     */
    mlfAssign(&x, mlfCtranspose(mclVv(x_new, "x_new")));
    mclValidateOutput(x, 1, nargout_, "x", "guassseidel");
    mclValidateOutput(*cnt, 2, nargout_, "cnt", "guassseidel");
    mxDestroyArray(n);
    mxDestroyArray(i);
    mxDestroyArray(x_new);
    mxDestroyArray(s);
    mxDestroyArray(j);
    mxDestroyArray(e);
    mxDestroyArray(b);
    mxDestroyArray(A);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return x;
}
