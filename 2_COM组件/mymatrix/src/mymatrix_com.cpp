#include "mymatrix_com.hpp"
#include "matlab.hpp"


IMCLEvent* g_pEvent = NULL;
extern "C" _mex_information _lib_info;
static CMCLLibInfoC g_LibInfo(&_lib_info);
IMCLLibInfo* g_pLibInfo = &g_LibInfo;

HRESULT __stdcall Cmymatrix::conv2fraction(/* [in] */ long nargout,
                                           /* [in,out] */ VARIANT* y,
                                           /* [in] */ VARIANT x) {
    return( CallComFcn( mlxConv2fraction, (int) nargout, 1, 1, y, &x ) );
}


HRESULT __stdcall Cmymatrix::conv2num(/* [in] */ long nargout,
                                      /* [in,out] */ VARIANT* y,
                                      /* [in] */ VARIANT x) {
    return( CallComFcn( mlxConv2num, (int) nargout, 1, 1, y, &x ) );
}


HRESULT __stdcall Cmymatrix::conv2str(/* [in] */ long nargout,
                                      /* [in,out] */ VARIANT* y,
                                      /* [in,out] */ VARIANT* n,
                                      /* [in] */ VARIANT x) {
    return( CallComFcn( mlxConv2str, (int) nargout, 2, 1, y, n, &x ) );
}


HRESULT __stdcall Cmymatrix::guassseidel(/* [in] */ long nargout,
                                         /* [in,out] */ VARIANT* x,
                                         /* [in,out] */ VARIANT* cnt,
                                         /* [in] */ VARIANT A,
                                         /* [in] */ VARIANT b,
                                         /* [in] */ VARIANT e) {
    return( CallComFcn( mlxGuassseidel, (int) nargout,
                        2, 3, x, cnt, &A, &b, &e ) );
}


HRESULT __stdcall Cmymatrix::myeye(/* [in] */ long nargout,
                                   /* [in,out] */ VARIANT* y,
                                   /* [in] */ VARIANT x) {
    return( CallComFcn( mlxMyeye, (int) nargout, 1, 1, y, &x ) );
}


HRESULT __stdcall Cmymatrix::mymagic(/* [in] */ long nargout,
                                     /* [in,out] */ VARIANT* y,
                                     /* [in] */ VARIANT x) {
    return( CallComFcn( mlxMymagic, (int) nargout, 1, 1, y, &x ) );
}


HRESULT __stdcall Cmymatrix::myminus(/* [in] */ long nargout,
                                     /* [in,out] */ VARIANT* y,
                                     /* [in] */ VARIANT a,
                                     /* [in] */ VARIANT b) {
    return( CallComFcn( mlxMyminus, (int) nargout, 1, 2, y, &a, &b ) );
}


HRESULT __stdcall Cmymatrix::mymultiply(/* [in] */ long nargout,
                                        /* [in,out] */ VARIANT* y,
                                        /* [in] */ VARIANT a,
                                        /* [in] */ VARIANT b) {
    return( CallComFcn( mlxMymultiply, (int) nargout, 1, 2, y, &a, &b ) );
}


HRESULT __stdcall Cmymatrix::mypascal(/* [in] */ long nargout,
                                      /* [in,out] */ VARIANT* y,
                                      /* [in] */ VARIANT x) {
    return( CallComFcn( mlxMypascal, (int) nargout, 1, 1, y, &x ) );
}


HRESULT __stdcall Cmymatrix::myplus(/* [in] */ long nargout,
                                    /* [in,out] */ VARIANT* y,
                                    /* [in] */ VARIANT a,
                                    /* [in] */ VARIANT b) {
    return( CallComFcn( mlxMyplus, (int) nargout, 1, 2, y, &a, &b ) );
}


HRESULT __stdcall Cmymatrix::myrot(/* [in] */ long nargout,
                                   /* [in,out] */ VARIANT* y,
                                   /* [in] */ VARIANT x) {
    return( CallComFcn( mlxMyrot, (int) nargout, 1, 1, y, &x ) );
}


HRESULT __stdcall Cmymatrix::mysolve(/* [in] */ long nargout,
                                     /* [in,out] */ VARIANT* y,
                                     /* [in] */ VARIANT a,
                                     /* [in] */ VARIANT b) {
    return( CallComFcn( mlxMysolve, (int) nargout, 1, 2, y, &a, &b ) );
}

class Init_term_mymatrix {
public:
    Init_term_mymatrix( )  { mymatrixInitialize(); }
    ~Init_term_mymatrix( ) { mymatrixTerminate(); }
};
Init_term_mymatrix mymatrix_init_term;

