#ifndef _mymatrix_com_HPP
#define _mymatrix_com_HPP 1

#include <windows.h>
#include "mymatrix.h"
#include "mymatrix_idl.h"
#include "mclcommain.h"
#include "mclcomclass.h"

class Cmymatrix : public CMCLClassImpl<Imymatrix, &IID_Imymatrix,
                                       Cmymatrix, &CLSID_mymatrix>
{
public:
    Cmymatrix() { }
    ~Cmymatrix() { }

    HRESULT __stdcall conv2fraction(/* [in] */ long nargout,
                                    /* [in,out] */ VARIANT* y,
                                    /* [in] */ VARIANT x);
    

    HRESULT __stdcall conv2num(/* [in] */ long nargout,
                               /* [in,out] */ VARIANT* y,
                               /* [in] */ VARIANT x);
    

    HRESULT __stdcall conv2str(/* [in] */ long nargout,
                               /* [in,out] */ VARIANT* y,
                               /* [in,out] */ VARIANT* n,
                               /* [in] */ VARIANT x);
    

    HRESULT __stdcall guassseidel(/* [in] */ long nargout,
                                  /* [in,out] */ VARIANT* x,
                                  /* [in,out] */ VARIANT* cnt,
                                  /* [in] */ VARIANT A, /* [in] */ VARIANT b,
                                  /* [in] */ VARIANT e);
    

    HRESULT __stdcall myeye(/* [in] */ long nargout,
                            /* [in,out] */ VARIANT* y, /* [in] */ VARIANT x);
    

    HRESULT __stdcall mymagic(/* [in] */ long nargout,
                              /* [in,out] */ VARIANT* y,
                              /* [in] */ VARIANT x);
    

    HRESULT __stdcall myminus(/* [in] */ long nargout,
                              /* [in,out] */ VARIANT* y,
                              /* [in] */ VARIANT a, /* [in] */ VARIANT b);
    

    HRESULT __stdcall mymultiply(/* [in] */ long nargout,
                                 /* [in,out] */ VARIANT* y,
                                 /* [in] */ VARIANT a, /* [in] */ VARIANT b);
    

    HRESULT __stdcall mypascal(/* [in] */ long nargout,
                               /* [in,out] */ VARIANT* y,
                               /* [in] */ VARIANT x);
    

    HRESULT __stdcall myplus(/* [in] */ long nargout,
                             /* [in,out] */ VARIANT* y,
                             /* [in] */ VARIANT a, /* [in] */ VARIANT b);
    

    HRESULT __stdcall myrot(/* [in] */ long nargout,
                            /* [in,out] */ VARIANT* y, /* [in] */ VARIANT x);
    

    HRESULT __stdcall mysolve(/* [in] */ long nargout,
                              /* [in,out] */ VARIANT* y,
                              /* [in] */ VARIANT a, /* [in] */ VARIANT b);
    
};
#endif
