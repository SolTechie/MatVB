#include "mydatafit_com.hpp"
#include "matlab.hpp"


IMCLEvent* g_pEvent = NULL;
extern "C" _mex_information _lib_info;
static CMCLLibInfoC g_LibInfo(&_lib_info);
IMCLLibInfo* g_pLibInfo = &g_LibInfo;

HRESULT __stdcall Cmydatafit::conv2num(/* [in] */ long nargout,
                                       /* [in,out] */ VARIANT* y,
                                       /* [in] */ VARIANT x) {
    return( CallComFcn( mlxConv2num, (int) nargout, 1, 1, y, &x ) );
}


HRESULT __stdcall Cmydatafit::conv2str(/* [in] */ long nargout,
                                       /* [in,out] */ VARIANT* y,
                                       /* [in,out] */ VARIANT* n,
                                       /* [in] */ VARIANT x) {
    return( CallComFcn( mlxConv2str, (int) nargout, 2, 1, y, n, &x ) );
}


HRESULT __stdcall Cmydatafit::mypolyfit(/* [in] */ long nargout,
                                        /* [in,out] */ VARIANT* z,
                                        /* [in] */ VARIANT x,
                                        /* [in] */ VARIANT y,
                                        /* [in] */ VARIANT n) {
    return( CallComFcn( mlxMypolyfit, (int) nargout, 1, 3, z, &x, &y, &n ) );
}

class Init_term_mydatafit {
public:
    Init_term_mydatafit( )  { mydatafitInitialize(); }
    ~Init_term_mydatafit( ) { mydatafitTerminate(); }
};
Init_term_mydatafit mydatafit_init_term;

