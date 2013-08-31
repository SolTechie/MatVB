/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Jun 14 04:54:08 2009
 */
/* Compiler settings for C:/MATLAB6p5/work/mydatafit/src\mydatafit_idl.idl:
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

#ifndef __mydatafit_idl_h__
#define __mydatafit_idl_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __Imydatafit_FWD_DEFINED__
#define __Imydatafit_FWD_DEFINED__
typedef interface Imydatafit Imydatafit;
#endif 	/* __Imydatafit_FWD_DEFINED__ */


#ifndef __mydatafit_FWD_DEFINED__
#define __mydatafit_FWD_DEFINED__

#ifdef __cplusplus
typedef class mydatafit mydatafit;
#else
typedef struct mydatafit mydatafit;
#endif /* __cplusplus */

#endif 	/* __mydatafit_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "mwcomtypes.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __Imydatafit_INTERFACE_DEFINED__
#define __Imydatafit_INTERFACE_DEFINED__

/* interface Imydatafit */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_Imydatafit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF135276-2276-4C0D-953E-FAEB04CB6B1C")
    Imydatafit : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MWFlags( 
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MWFlags( 
            /* [in] */ IMWFlags __RPC_FAR *pvFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE conv2num( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE conv2str( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [out][in] */ VARIANT __RPC_FAR *n,
            /* [in] */ VARIANT x) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE mypolyfit( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *z,
            /* [in] */ VARIANT x,
            /* [in] */ VARIANT y,
            /* [in] */ VARIANT n) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ImydatafitVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            Imydatafit __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            Imydatafit __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            Imydatafit __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            Imydatafit __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            Imydatafit __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            Imydatafit __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            Imydatafit __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MWFlags )( 
            Imydatafit __RPC_FAR * This,
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MWFlags )( 
            Imydatafit __RPC_FAR * This,
            /* [in] */ IMWFlags __RPC_FAR *pvFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *conv2num )( 
            Imydatafit __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *conv2str )( 
            Imydatafit __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [out][in] */ VARIANT __RPC_FAR *n,
            /* [in] */ VARIANT x);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *mypolyfit )( 
            Imydatafit __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *z,
            /* [in] */ VARIANT x,
            /* [in] */ VARIANT y,
            /* [in] */ VARIANT n);
        
        END_INTERFACE
    } ImydatafitVtbl;

    interface Imydatafit
    {
        CONST_VTBL struct ImydatafitVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Imydatafit_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define Imydatafit_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define Imydatafit_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define Imydatafit_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define Imydatafit_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define Imydatafit_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define Imydatafit_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define Imydatafit_get_MWFlags(This,ppvFlags)	\
    (This)->lpVtbl -> get_MWFlags(This,ppvFlags)

#define Imydatafit_put_MWFlags(This,pvFlags)	\
    (This)->lpVtbl -> put_MWFlags(This,pvFlags)

#define Imydatafit_conv2num(This,nargout,y,x)	\
    (This)->lpVtbl -> conv2num(This,nargout,y,x)

#define Imydatafit_conv2str(This,nargout,y,n,x)	\
    (This)->lpVtbl -> conv2str(This,nargout,y,n,x)

#define Imydatafit_mypolyfit(This,nargout,z,x,y,n)	\
    (This)->lpVtbl -> mypolyfit(This,nargout,z,x,y,n)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE Imydatafit_get_MWFlags_Proxy( 
    Imydatafit __RPC_FAR * This,
    /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags);


void __RPC_STUB Imydatafit_get_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE Imydatafit_put_MWFlags_Proxy( 
    Imydatafit __RPC_FAR * This,
    /* [in] */ IMWFlags __RPC_FAR *pvFlags);


void __RPC_STUB Imydatafit_put_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imydatafit_conv2num_Proxy( 
    Imydatafit __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT x);


void __RPC_STUB Imydatafit_conv2num_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imydatafit_conv2str_Proxy( 
    Imydatafit __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [out][in] */ VARIANT __RPC_FAR *n,
    /* [in] */ VARIANT x);


void __RPC_STUB Imydatafit_conv2str_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imydatafit_mypolyfit_Proxy( 
    Imydatafit __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *z,
    /* [in] */ VARIANT x,
    /* [in] */ VARIANT y,
    /* [in] */ VARIANT n);


void __RPC_STUB Imydatafit_mypolyfit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __Imydatafit_INTERFACE_DEFINED__ */



#ifndef __mydatafit_LIBRARY_DEFINED__
#define __mydatafit_LIBRARY_DEFINED__

/* library mydatafit */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_mydatafit;

EXTERN_C const CLSID CLSID_mydatafit;

#ifdef __cplusplus

class DECLSPEC_UUID("7143C8D8-EA3A-4AC6-8CC6-3A5CDE3EB92A")
mydatafit;
#endif
#endif /* __mydatafit_LIBRARY_DEFINED__ */

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
