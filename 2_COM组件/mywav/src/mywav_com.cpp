#include "mywav_com.hpp"
#include "matlab.hpp"


IMCLEvent* g_pEvent = NULL;
extern "C" _mex_information _lib_info;
static CMCLLibInfoC g_LibInfo(&_lib_info);
IMCLLibInfo* g_pLibInfo = &g_LibInfo;

HRESULT __stdcall Cmywav::fzone(/* [in] */ long nargout,
                                /* [in,out] */ VARIANT* y,
                                /* [in] */ VARIANT x) {
    return( CallComFcn( mlxFzone, (int) nargout, 1, 1, y, &x ) );
}


HRESULT __stdcall Cmywav::myprowav(/* [in] */ long nargout,
                                   /* [in,out] */ VARIANT* y,
                                   /* [in] */ VARIANT opn,
                                   /* [in] */ VARIANT sav,
                                   /* [in] */ VARIANT spd,
                                   /* [in] */ VARIANT awg) {
    return( CallComFcn( mlxMyprowav, (int) nargout, 1, 4,
                        y, &opn, &sav, &spd, &awg ) );
}


HRESULT __stdcall Cmywav::tzone(/* [in] */ long nargout,
                                /* [in,out] */ VARIANT* y,
                                /* [in] */ VARIANT x) {
    return( CallComFcn( mlxTzone, (int) nargout, 1, 1, y, &x ) );
}

class Init_term_mywav {
public:
    Init_term_mywav( )  { mywavInitialize(); }
    ~Init_term_mywav( ) { mywavTerminate(); }
};
Init_term_mywav mywav_init_term;

