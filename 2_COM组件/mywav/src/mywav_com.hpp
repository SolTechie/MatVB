#ifndef _mywav_com_HPP
#define _mywav_com_HPP 1

#include <windows.h>
#include "mywav.h"
#include "mywav_idl.h"
#include "mclcommain.h"
#include "mclcomclass.h"

class Cmywav : public CMCLClassImpl<Imywav, &IID_Imywav, Cmywav, &CLSID_mywav>
{
public:
    Cmywav() { }
    ~Cmywav() { }

    HRESULT __stdcall fzone(/* [in] */ long nargout,
                            /* [in,out] */ VARIANT* y, /* [in] */ VARIANT x);
    

    HRESULT __stdcall myprowav(/* [in] */ long nargout,
                               /* [in,out] */ VARIANT* y,
                               /* [in] */ VARIANT opn, /* [in] */ VARIANT sav,
                               /* [in] */ VARIANT spd,
                               /* [in] */ VARIANT awg);
    

    HRESULT __stdcall tzone(/* [in] */ long nargout,
                            /* [in,out] */ VARIANT* y, /* [in] */ VARIANT x);
    
};
#endif
