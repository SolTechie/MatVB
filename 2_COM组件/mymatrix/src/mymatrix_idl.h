/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sat Jun 13 16:15:25 2009
 */
/* Compiler settings for C:/MATLAB6p5/work/mymatrix/src\mymatrix_idl.idl:
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

#ifndef __mymatrix_idl_h__
#define __mymatrix_idl_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __Imymatrix_FWD_DEFINED__
#define __Imymatrix_FWD_DEFINED__
typedef interface Imymatrix Imymatrix;
#endif 	/* __Imymatrix_FWD_DEFINED__ */


#ifndef __mymatrix_FWD_DEFINED__
#define __mymatrix_FWD_DEFINED__

#ifdef __cplusplus
typedef class mymatrix mymatrix;
#else
typedef struct mymatrix mymatrix;
#endif /* __cplusplus */

#endif 	/* __mymatrix_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "mwcomtypes.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __Imymatrix_INTERFACE_DEFINED__
#define __Imymatrix_INTERFACE_DEFINED__

/* interface Imymatrix */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_Imymatrix;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF0791E3-1D83-4AA1-9005-0E7F293913C6")
    Imymatrix : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MWFlags( 
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MWFlags( 
            /* [in] */ IMWFlags __RPC_FAR *pvFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE conv2fraction( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE conv2num( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE conv2str( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [out][in] */ VARIANT __RPC_FAR *n,
            /* [in] */ VARIANT x) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE guassseidel( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *x,
            /* [out][in] */ VARIANT __RPC_FAR *cnt,
            /* [in] */ VARIANT A,
            /* [in] */ VARIANT b,
            /* [in] */ VARIANT e) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE myeye( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE mymagic( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE myminus( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT a,
            /* [in] */ VARIANT b) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE mymultiply( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT a,
            /* [in] */ VARIANT b) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE mypascal( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE myplus( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT a,
            /* [in] */ VARIANT b) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE myrot( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE mysolve( 
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT a,
            /* [in] */ VARIANT b) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ImymatrixVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            Imymatrix __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            Imymatrix __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            Imymatrix __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MWFlags )( 
            Imymatrix __RPC_FAR * This,
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MWFlags )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ IMWFlags __RPC_FAR *pvFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *conv2fraction )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *conv2num )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *conv2str )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [out][in] */ VARIANT __RPC_FAR *n,
            /* [in] */ VARIANT x);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *guassseidel )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *x,
            /* [out][in] */ VARIANT __RPC_FAR *cnt,
            /* [in] */ VARIANT A,
            /* [in] */ VARIANT b,
            /* [in] */ VARIANT e);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *myeye )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *mymagic )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *myminus )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT a,
            /* [in] */ VARIANT b);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *mymultiply )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT a,
            /* [in] */ VARIANT b);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *mypascal )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *myplus )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT a,
            /* [in] */ VARIANT b);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *myrot )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT x);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *mysolve )( 
            Imymatrix __RPC_FAR * This,
            /* [in] */ long nargout,
            /* [out][in] */ VARIANT __RPC_FAR *y,
            /* [in] */ VARIANT a,
            /* [in] */ VARIANT b);
        
        END_INTERFACE
    } ImymatrixVtbl;

    interface Imymatrix
    {
        CONST_VTBL struct ImymatrixVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Imymatrix_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define Imymatrix_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define Imymatrix_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define Imymatrix_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define Imymatrix_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define Imymatrix_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define Imymatrix_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define Imymatrix_get_MWFlags(This,ppvFlags)	\
    (This)->lpVtbl -> get_MWFlags(This,ppvFlags)

#define Imymatrix_put_MWFlags(This,pvFlags)	\
    (This)->lpVtbl -> put_MWFlags(This,pvFlags)

#define Imymatrix_conv2fraction(This,nargout,y,x)	\
    (This)->lpVtbl -> conv2fraction(This,nargout,y,x)

#define Imymatrix_conv2num(This,nargout,y,x)	\
    (This)->lpVtbl -> conv2num(This,nargout,y,x)

#define Imymatrix_conv2str(This,nargout,y,n,x)	\
    (This)->lpVtbl -> conv2str(This,nargout,y,n,x)

#define Imymatrix_guassseidel(This,nargout,x,cnt,A,b,e)	\
    (This)->lpVtbl -> guassseidel(This,nargout,x,cnt,A,b,e)

#define Imymatrix_myeye(This,nargout,y,x)	\
    (This)->lpVtbl -> myeye(This,nargout,y,x)

#define Imymatrix_mymagic(This,nargout,y,x)	\
    (This)->lpVtbl -> mymagic(This,nargout,y,x)

#define Imymatrix_myminus(This,nargout,y,a,b)	\
    (This)->lpVtbl -> myminus(This,nargout,y,a,b)

#define Imymatrix_mymultiply(This,nargout,y,a,b)	\
    (This)->lpVtbl -> mymultiply(This,nargout,y,a,b)

#define Imymatrix_mypascal(This,nargout,y,x)	\
    (This)->lpVtbl -> mypascal(This,nargout,y,x)

#define Imymatrix_myplus(This,nargout,y,a,b)	\
    (This)->lpVtbl -> myplus(This,nargout,y,a,b)

#define Imymatrix_myrot(This,nargout,y,x)	\
    (This)->lpVtbl -> myrot(This,nargout,y,x)

#define Imymatrix_mysolve(This,nargout,y,a,b)	\
    (This)->lpVtbl -> mysolve(This,nargout,y,a,b)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE Imymatrix_get_MWFlags_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags);


void __RPC_STUB Imymatrix_get_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE Imymatrix_put_MWFlags_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ IMWFlags __RPC_FAR *pvFlags);


void __RPC_STUB Imymatrix_put_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_conv2fraction_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT x);


void __RPC_STUB Imymatrix_conv2fraction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_conv2num_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT x);


void __RPC_STUB Imymatrix_conv2num_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_conv2str_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [out][in] */ VARIANT __RPC_FAR *n,
    /* [in] */ VARIANT x);


void __RPC_STUB Imymatrix_conv2str_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_guassseidel_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *x,
    /* [out][in] */ VARIANT __RPC_FAR *cnt,
    /* [in] */ VARIANT A,
    /* [in] */ VARIANT b,
    /* [in] */ VARIANT e);


void __RPC_STUB Imymatrix_guassseidel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_myeye_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT x);


void __RPC_STUB Imymatrix_myeye_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_mymagic_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT x);


void __RPC_STUB Imymatrix_mymagic_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_myminus_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT a,
    /* [in] */ VARIANT b);


void __RPC_STUB Imymatrix_myminus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_mymultiply_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT a,
    /* [in] */ VARIANT b);


void __RPC_STUB Imymatrix_mymultiply_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_mypascal_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT x);


void __RPC_STUB Imymatrix_mypascal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_myplus_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT a,
    /* [in] */ VARIANT b);


void __RPC_STUB Imymatrix_myplus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_myrot_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT x);


void __RPC_STUB Imymatrix_myrot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imymatrix_mysolve_Proxy( 
    Imymatrix __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT a,
    /* [in] */ VARIANT b);


void __RPC_STUB Imymatrix_mysolve_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __Imymatrix_INTERFACE_DEFINED__ */



#ifndef __mymatrix_LIBRARY_DEFINED__
#define __mymatrix_LIBRARY_DEFINED__

/* library mymatrix */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_mymatrix;

EXTERN_C const CLSID CLSID_mymatrix;

#ifdef __cplusplus

class DECLSPEC_UUID("E6FB83CF-05E0-4ADD-A1EB-1F66034313DF")
mymatrix;
#endif
#endif /* __mymatrix_LIBRARY_DEFINED__ */

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
