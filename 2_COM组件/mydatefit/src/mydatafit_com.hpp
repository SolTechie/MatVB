#ifndef _mydatafit_com_HPP
#define _mydatafit_com_HPP 1

#include <windows.h>
#include "mydatafit.h"
#include "mydatafit_idl.h"
#include "mclcommain.h"
#include "mclcomclass.h"

class Cmydatafit : public CMCLClassImpl<Imydatafit, &IID_Imydatafit,
                                        Cmydatafit, &CLSID_mydatafit>
{
public:
    Cmydatafit() { }
    ~Cmydatafit() { }

    HRESULT __stdcall conv2num(/* [in] */ long nargout,
                               /* [in,out] */ VARIANT* y,
                               /* [in] */ VARIANT x);
    

    HRESULT __stdcall conv2str(/* [in] */ long nargout,
                               /* [in,out] */ VARIANT* y,
                               /* [in,out] */ VARIANT* n,
                               /* [in] */ VARIANT x);
    

    HRESULT __stdcall mypolyfit(/* [in] */ long nargout,
                                /* [in,out] */ VARIANT* z,
                                /* [in] */ VARIANT x, /* [in] */ VARIANT y,
                                /* [in] */ VARIANT n);
    
};
#endif
