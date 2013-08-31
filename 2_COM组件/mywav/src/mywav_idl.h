/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Jun 14 18:30:57 2009
 */
/* Compiler settings for C:/MATLAB6p5/work/mywav/src\mywav_idl.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __mywav_idl_h__
#define __mywav_idl_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __Imywav_FWD_DEFINED__
#define __Imywav_FWD_DEFINED__
typedef interface Imywav Imywav;
#endif 	/* __Imywav_FWD_DEFINED__ */


#ifndef __mywav_FWD_DEFINED__
#define __mywav_FWD_DEFINED__

#ifdef __cplusplus
typedef class mywav mywav;
#else
typedef struct mywav mywav;
#endif /* __cplusplus */

#endif 	/* __mywav_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "mwcomtypes.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __Imywav_INTERFACE_DEFINED__
#define __Imywav_INTERFACE_DEFINED__

/* interface Imywav */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_Imywav;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42F76964-ECDA-4680-841E-28EB923B45F1")
    Imywav : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MWFlags( 
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MWFlags( 
            /* [in] */ IMWFlags __RPC_FAR *pvFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE fzone( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE myprowav( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT opn,
            /* [in] */ VARIANT sav,
            /* [in] */ VARIANT spd,
            /* [in] */ VARIANT awg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE tzone( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ImywavVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            Imywav __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            Imywav __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            Imywav __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            Imywav __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            Imywav __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            Imywav __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            Imywav __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MWFlags )( 
            Imywav __RPC_FAR * This,
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MWFlags )( 
            Imywav __RPC_FAR * This,
            /* [in] */ IMWFlags __RPC_FAR *pvFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *fzone )( 
            Imywav __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *myprowav )( 
            Imywav __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT opn,
            /* [in] */ VARIANT sav,
            /* [in] */ VARIANT spd,
            /* [in] */ VARIANT awg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *tzone )( 
            Imywav __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x);
        
        END_INTERFACE
    } ImywavVtbl;

    interface Imywav
    {
        CONST_VTBL struct ImywavVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Imywav_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define Imywav_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define Imywav_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define Imywav_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define Imywav_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define Imywav_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define Imywav_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define Imywav_get_MWFlags(This,ppvFlags)	\
    (This)->lpVtbl -> get_MWFlags(This,ppvFlags)

#define Imywav_put_MWFlags(This,pvFlags)	\
    (This)->lpVtbl -> put_MWFlags(This,pvFlags)

#define Imywav_fzone(This,nargout,y,x)	\
    (This)->lpVtbl -> fzone(This,nargout,y,x)

#define Imywav_myprowav(This,nargout,y,opn,sav,spd,awg)	\
    (This)->lpVtbl -> myprowav(This,nargout,y,opn,sav,spd,awg)

#define Imywav_tzone(This,nargout,y,x)	\
    (This)->lpVtbl -> tzone(This,nargout,y,x)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE Imywav_get_MWFlags_Proxy( 
    Imywav __RPC_FAR * This,
    /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags);


void __RPC_STUB Imywav_get_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE Imywav_put_MWFlags_Proxy( 
    Imywav __RPC_FAR * This,
    /* [in] */ IMWFlags __RPC_FAR *pvFlags);


void __RPC_STUB Imywav_put_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imywav_fzone_Proxy( 
    Imywav __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT x);


void __RPC_STUB Imywav_fzone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imywav_myprowav_Proxy( 
    Imywav __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT opn,
    /* [in] */ VARIANT sav,
    /* [in] */ VARIANT spd,
    /* [in] */ VARIANT awg);


void __RPC_STUB Imywav_myprowav_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imywav_tzone_Proxy( 
    Imywav __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT x);


void __RPC_STUB Imywav_tzone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __Imywav_INTERFACE_DEFINED__ */



#ifndef __mywav_LIBRARY_DEFINED__
#define __mywav_LIBRARY_DEFINED__

/* library mywav */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_mywav;

EXTERN_C const CLSID CLSID_mywav;

#ifdef __cplusplus

class DECLSPEC_UUID("386F0C0A-26E5-4B8B-98AF-F2D10BF4040E")
mywav;
#endif
#endif /* __mywav_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
