/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Jun 14 18:30:57 2009
 */
/* Compiler settings for C:/MATLAB6p5/work/mywav/src\mywav_idl.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 440
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "mywav_idl.h"

#define TYPE_FORMAT_STRING_SIZE   1011                              
#define PROC_FORMAT_STRING_SIZE   49                                

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: Imywav, ver. 0.0,
   GUID={0x42F76964,0xECDA,0x4680,{0x84,0x1E,0x28,0xEB,0x92,0x3B,0x45,0xF1}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")

/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE Imywav_get_MWFlags_Proxy( 
    Imywav __RPC_FAR * This,
    /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags)
{

    HRESULT _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(ppvFlags)
        {
        MIDL_memset(
               ppvFlags,
               0,
               sizeof( IMWFlags __RPC_FAR *__RPC_FAR * ));
        }
    RpcTryExcept
        {
        NdrProxyInitialize(
                      ( void __RPC_FAR *  )This,
                      ( PRPC_MESSAGE  )&_RpcMessage,
                      ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                      ( PMIDL_STUB_DESC  )&Object_StubDesc,
                      7);
        
        
        
        if(!ppvFlags)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            
            _StubMsg.BufferLength = 0U;
            NdrProxyGetBuffer(This, &_StubMsg);
            NdrProxySendReceive(This, &_StubMsg);
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ppvFlags,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[2],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            _RetVal = *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrProxyFreeBuffer(This, &_StubMsg);
            
            }
        RpcEndFinally
        
        }
    RpcExcept(_StubMsg.dwStubPhase != PROXY_SENDRECEIVE)
        {
        NdrClearOutParameters(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[2],
                         ( void __RPC_FAR * )ppvFlags);
        _RetVal = NdrProxyErrorHandler(RpcExceptionCode());
        }
    RpcEndExcept
    return _RetVal;
}

void __RPC_STUB Imywav_get_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase)
{
    IMWFlags __RPC_FAR *_M0;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags;
    
NdrStubInitialize(
                     _pRpcMessage,
                     &_StubMsg,
                     &Object_StubDesc,
                     _pRpcChannelBuffer);
    ( IMWFlags __RPC_FAR *__RPC_FAR * )ppvFlags = 0;
    RpcTryFinally
        {
        ppvFlags = &_M0;
        _M0 = 0;
        
        *_pdwStubPhase = STUB_CALL_SERVER;
        _RetVal = (((Imywav*) ((CStdStubBuffer *)This)->pvServerObject)->lpVtbl) -> get_MWFlags((Imywav *) ((CStdStubBuffer *)This)->pvServerObject,ppvFlags);
        
        *_pdwStubPhase = STUB_MARSHAL;
        
        _StubMsg.BufferLength = 0U + 4U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppvFlags,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[2] );
        
        _StubMsg.BufferLength += 16;
        
        NdrStubGetBuffer(This, _pRpcChannelBuffer, &_StubMsg);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppvFlags,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[2] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppvFlags,
                        &__MIDL_TypeFormatString.Format[2] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE Imywav_put_MWFlags_Proxy( 
    Imywav __RPC_FAR * This,
    /* [in] */ IMWFlags __RPC_FAR *pvFlags)
{

    HRESULT _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        NdrProxyInitialize(
                      ( void __RPC_FAR *  )This,
                      ( PRPC_MESSAGE  )&_RpcMessage,
                      ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                      ( PMIDL_STUB_DESC  )&Object_StubDesc,
                      8);
        
        
        
        RpcTryFinally
            {
            
            _StubMsg.BufferLength = 0U;
            NdrInterfacePointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR *)pvFlags,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
            
            NdrProxyGetBuffer(This, &_StubMsg);
            NdrInterfacePointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                         (unsigned char __RPC_FAR *)pvFlags,
                                         (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6] );
            
            NdrProxySendReceive(This, &_StubMsg);
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[6] );
            
            _RetVal = *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrProxyFreeBuffer(This, &_StubMsg);
            
            }
        RpcEndFinally
        
        }
    RpcExcept(_StubMsg.dwStubPhase != PROXY_SENDRECEIVE)
        {
        _RetVal = NdrProxyErrorHandler(RpcExceptionCode());
        }
    RpcEndExcept
    return _RetVal;
}

void __RPC_STUB Imywav_put_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase)
{
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    IMWFlags __RPC_FAR *pvFlags;
    
NdrStubInitialize(
                     _pRpcMessage,
                     &_StubMsg,
                     &Object_StubDesc,
                     _pRpcChannelBuffer);
    pvFlags = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[6] );
        
        NdrInterfacePointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&pvFlags,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[6],
                                       (unsigned char)0 );
        
        
        *_pdwStubPhase = STUB_CALL_SERVER;
        _RetVal = (((Imywav*) ((CStdStubBuffer *)This)->pvServerObject)->lpVtbl) -> put_MWFlags((Imywav *) ((CStdStubBuffer *)This)->pvServerObject,pvFlags);
        
        *_pdwStubPhase = STUB_MARSHAL;
        
        _StubMsg.BufferLength = 4U;
        NdrStubGetBuffer(This, _pRpcChannelBuffer, &_StubMsg);
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrInterfacePointerFree( &_StubMsg,
                                 (unsigned char __RPC_FAR *)pvFlags,
                                 &__MIDL_TypeFormatString.Format[6] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imywav_fzone_Proxy( 
    Imywav __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT x)
{

    HRESULT _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        NdrProxyInitialize(
                      ( void __RPC_FAR *  )This,
                      ( PRPC_MESSAGE  )&_RpcMessage,
                      ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                      ( PMIDL_STUB_DESC  )&Object_StubDesc,
                      9);
        
        
        
        if(!y)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            
            _StubMsg.BufferLength = 4U + 4U + 15U;
            NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)y,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
            
            NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)&x,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrProxyGetBuffer(This, &_StubMsg);
            *(( long __RPC_FAR * )_StubMsg.Buffer)++ = nargout;
            
            NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)y,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
            
            NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)&x,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrProxySendReceive(This, &_StubMsg);
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12] );
            
            NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&y,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986],
                                      (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            _RetVal = *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrProxyFreeBuffer(This, &_StubMsg);
            
            }
        RpcEndFinally
        
        }
    RpcExcept(_StubMsg.dwStubPhase != PROXY_SENDRECEIVE)
        {
        NdrClearOutParameters(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[24],
                         ( void __RPC_FAR * )y);
        _RetVal = NdrProxyErrorHandler(RpcExceptionCode());
        }
    RpcEndExcept
    return _RetVal;
}

void __RPC_STUB Imywav_fzone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase)
{
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    void __RPC_FAR *_p_x;
    long nargout;
    VARIANT x;
    VARIANT __RPC_FAR *y;
    
NdrStubInitialize(
                     _pRpcMessage,
                     &_StubMsg,
                     &Object_StubDesc,
                     _pRpcChannelBuffer);
    ( VARIANT __RPC_FAR * )y = 0;
    _p_x = &x;
    MIDL_memset(
               _p_x,
               0,
               sizeof( VARIANT  ));
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12] );
        
        nargout = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&y,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986],
                                  (unsigned char)0 );
        
        NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&_p_x,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000],
                                  (unsigned char)0 );
        
        
        *_pdwStubPhase = STUB_CALL_SERVER;
        _RetVal = (((Imywav*) ((CStdStubBuffer *)This)->pvServerObject)->lpVtbl) -> fzone(
         (Imywav *) ((CStdStubBuffer *)This)->pvServerObject,
         nargout,
         y,
         x);
        
        *_pdwStubPhase = STUB_MARSHAL;
        
        _StubMsg.BufferLength = 8U + 11U;
        NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)y,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
        
        _StubMsg.BufferLength += 16;
        
        NdrStubGetBuffer(This, _pRpcChannelBuffer, &_StubMsg);
        NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)y,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)y,
                        &__MIDL_TypeFormatString.Format[24] );
        
        NdrUserMarshalFree( &_StubMsg,
                            (unsigned char __RPC_FAR *)&x,
                            &__MIDL_TypeFormatString.Format[1000] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imywav_myprowav_Proxy( 
    Imywav __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT opn,
    /* [in] */ VARIANT sav,
    /* [in] */ VARIANT spd,
    /* [in] */ VARIANT awg)
{

    HRESULT _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        NdrProxyInitialize(
                      ( void __RPC_FAR *  )This,
                      ( PRPC_MESSAGE  )&_RpcMessage,
                      ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                      ( PMIDL_STUB_DESC  )&Object_StubDesc,
                      10);
        
        
        
        if(!y)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            
            _StubMsg.BufferLength = 4U + 4U + 15U + 15U + 15U + 15U;
            NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)y,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
            
            NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)&opn,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)&sav,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)&spd,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)&awg,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrProxyGetBuffer(This, &_StubMsg);
            *(( long __RPC_FAR * )_StubMsg.Buffer)++ = nargout;
            
            NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)y,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
            
            NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)&opn,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)&sav,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)&spd,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)&awg,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrProxySendReceive(This, &_StubMsg);
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[24] );
            
            NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&y,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986],
                                      (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            _RetVal = *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrProxyFreeBuffer(This, &_StubMsg);
            
            }
        RpcEndFinally
        
        }
    RpcExcept(_StubMsg.dwStubPhase != PROXY_SENDRECEIVE)
        {
        NdrClearOutParameters(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[24],
                         ( void __RPC_FAR * )y);
        _RetVal = NdrProxyErrorHandler(RpcExceptionCode());
        }
    RpcEndExcept
    return _RetVal;
}

void __RPC_STUB Imywav_myprowav_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase)
{
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    void __RPC_FAR *_p_awg;
    void __RPC_FAR *_p_opn;
    void __RPC_FAR *_p_sav;
    void __RPC_FAR *_p_spd;
    VARIANT awg;
    long nargout;
    VARIANT opn;
    VARIANT sav;
    VARIANT spd;
    VARIANT __RPC_FAR *y;
    
NdrStubInitialize(
                     _pRpcMessage,
                     &_StubMsg,
                     &Object_StubDesc,
                     _pRpcChannelBuffer);
    ( VARIANT __RPC_FAR * )y = 0;
    _p_opn = &opn;
    MIDL_memset(
               _p_opn,
               0,
               sizeof( VARIANT  ));
    _p_sav = &sav;
    MIDL_memset(
               _p_sav,
               0,
               sizeof( VARIANT  ));
    _p_spd = &spd;
    MIDL_memset(
               _p_spd,
               0,
               sizeof( VARIANT  ));
    _p_awg = &awg;
    MIDL_memset(
               _p_awg,
               0,
               sizeof( VARIANT  ));
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[24] );
        
        nargout = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&y,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986],
                                  (unsigned char)0 );
        
        NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&_p_opn,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000],
                                  (unsigned char)0 );
        
        NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&_p_sav,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000],
                                  (unsigned char)0 );
        
        NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&_p_spd,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000],
                                  (unsigned char)0 );
        
        NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&_p_awg,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000],
                                  (unsigned char)0 );
        
        
        *_pdwStubPhase = STUB_CALL_SERVER;
        _RetVal = (((Imywav*) ((CStdStubBuffer *)This)->pvServerObject)->lpVtbl) -> myprowav(
            (Imywav *) ((CStdStubBuffer *)This)->pvServerObject,
            nargout,
            y,
            opn,
            sav,
            spd,
            awg);
        
        *_pdwStubPhase = STUB_MARSHAL;
        
        _StubMsg.BufferLength = 8U + 11U;
        NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)y,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
        
        _StubMsg.BufferLength += 16;
        
        NdrStubGetBuffer(This, _pRpcChannelBuffer, &_StubMsg);
        NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)y,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)y,
                        &__MIDL_TypeFormatString.Format[24] );
        
        NdrUserMarshalFree( &_StubMsg,
                            (unsigned char __RPC_FAR *)&opn,
                            &__MIDL_TypeFormatString.Format[1000] );
        
        NdrUserMarshalFree( &_StubMsg,
                            (unsigned char __RPC_FAR *)&sav,
                            &__MIDL_TypeFormatString.Format[1000] );
        
        NdrUserMarshalFree( &_StubMsg,
                            (unsigned char __RPC_FAR *)&spd,
                            &__MIDL_TypeFormatString.Format[1000] );
        
        NdrUserMarshalFree( &_StubMsg,
                            (unsigned char __RPC_FAR *)&awg,
                            &__MIDL_TypeFormatString.Format[1000] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Imywav_tzone_Proxy( 
    Imywav __RPC_FAR * This,
    /* [in] */ long nargout,
    /* [out][in] */ VARIANT __RPC_FAR *y,
    /* [in] */ VARIANT x)
{

    HRESULT _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        NdrProxyInitialize(
                      ( void __RPC_FAR *  )This,
                      ( PRPC_MESSAGE  )&_RpcMessage,
                      ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                      ( PMIDL_STUB_DESC  )&Object_StubDesc,
                      11);
        
        
        
        if(!y)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            
            _StubMsg.BufferLength = 4U + 4U + 15U;
            NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)y,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
            
            NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)&x,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrProxyGetBuffer(This, &_StubMsg);
            *(( long __RPC_FAR * )_StubMsg.Buffer)++ = nargout;
            
            NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)y,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
            
            NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)&x,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000] );
            
            NdrProxySendReceive(This, &_StubMsg);
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12] );
            
            NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&y,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986],
                                      (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            _RetVal = *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrProxyFreeBuffer(This, &_StubMsg);
            
            }
        RpcEndFinally
        
        }
    RpcExcept(_StubMsg.dwStubPhase != PROXY_SENDRECEIVE)
        {
        NdrClearOutParameters(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[24],
                         ( void __RPC_FAR * )y);
        _RetVal = NdrProxyErrorHandler(RpcExceptionCode());
        }
    RpcEndExcept
    return _RetVal;
}

void __RPC_STUB Imywav_tzone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase)
{
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    void __RPC_FAR *_p_x;
    long nargout;
    VARIANT x;
    VARIANT __RPC_FAR *y;
    
NdrStubInitialize(
                     _pRpcMessage,
                     &_StubMsg,
                     &Object_StubDesc,
                     _pRpcChannelBuffer);
    ( VARIANT __RPC_FAR * )y = 0;
    _p_x = &x;
    MIDL_memset(
               _p_x,
               0,
               sizeof( VARIANT  ));
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12] );
        
        nargout = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&y,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986],
                                  (unsigned char)0 );
        
        NdrUserMarshalUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&_p_x,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1000],
                                  (unsigned char)0 );
        
        
        *_pdwStubPhase = STUB_CALL_SERVER;
        _RetVal = (((Imywav*) ((CStdStubBuffer *)This)->pvServerObject)->lpVtbl) -> tzone(
         (Imywav *) ((CStdStubBuffer *)This)->pvServerObject,
         nargout,
         y,
         x);
        
        *_pdwStubPhase = STUB_MARSHAL;
        
        _StubMsg.BufferLength = 8U + 11U;
        NdrUserMarshalBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)y,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
        
        _StubMsg.BufferLength += 16;
        
        NdrStubGetBuffer(This, _pRpcChannelBuffer, &_StubMsg);
        NdrUserMarshalMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)y,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[986] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)y,
                        &__MIDL_TypeFormatString.Format[24] );
        
        NdrUserMarshalFree( &_StubMsg,
                            (unsigned char __RPC_FAR *)&x,
                            &__MIDL_TypeFormatString.Format[1000] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[1];

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x50100a4, /* MIDL Version 5.1.164 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    1,  /* Flags */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

CINTERFACE_PROXY_VTABLE(12) _ImywavProxyVtbl = 
{
    &IID_Imywav,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch_GetTypeInfoCount_Proxy */ ,
    0 /* IDispatch_GetTypeInfo_Proxy */ ,
    0 /* IDispatch_GetIDsOfNames_Proxy */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    Imywav_get_MWFlags_Proxy ,
    Imywav_put_MWFlags_Proxy ,
    Imywav_fzone_Proxy ,
    Imywav_myprowav_Proxy ,
    Imywav_tzone_Proxy
};


static const PRPC_STUB_FUNCTION Imywav_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    Imywav_get_MWFlags_Stub,
    Imywav_put_MWFlags_Stub,
    Imywav_fzone_Stub,
    Imywav_myprowav_Stub,
    Imywav_tzone_Stub
};

CInterfaceStubVtbl _ImywavStubVtbl =
{
    &IID_Imywav,
    0,
    12,
    &Imywav_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[1] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub because it uses these features:
#error   [wire_marshal] or [user_marshal] attribute.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  2 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */
/*  4 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  6 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */
/* 10 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 12 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 14 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 18 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x4,		/* x86, MIPS & PPC Stack size = 4 */
#else
			0x4,		/* Alpha Stack size = 4 */
#endif
/* 20 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */
/* 22 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 24 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 28 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 30 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x4,		/* x86, MIPS & PPC Stack size = 4 */
#else
			0x4,		/* Alpha Stack size = 4 */
#endif
/* 32 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */
/* 34 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x4,		/* x86, MIPS & PPC Stack size = 4 */
#else
			0x4,		/* Alpha Stack size = 4 */
#endif
/* 36 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */
/* 38 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x4,		/* x86, MIPS & PPC Stack size = 4 */
#else
			0x4,		/* Alpha Stack size = 4 */
#endif
/* 40 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */
/* 42 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x4,		/* x86, MIPS & PPC Stack size = 4 */
#else
			0x4,		/* Alpha Stack size = 4 */
#endif
/* 44 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */
/* 46 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  8 */	NdrFcLong( 0xa295776 ),	/* 170481526 */
/* 12 */	NdrFcShort( 0x23a1 ),	/* 9121 */
/* 14 */	NdrFcShort( 0x410a ),	/* 16650 */
/* 16 */	0x94,		/* 148 */
			0xbd,		/* 189 */
/* 18 */	0xc,		/* 12 */
			0x6c,		/* 108 */
/* 20 */	0x61,		/* 97 */
			0xb8,		/* 184 */
/* 22 */	0x91,		/* 145 */
			0xb7,		/* 183 */
/* 24 */	
			0x11, 0x0,	/* FC_RP */
/* 26 */	NdrFcShort( 0x3c0 ),	/* Offset= 960 (986) */
/* 28 */	
			0x13, 0x0,	/* FC_OP */
/* 30 */	NdrFcShort( 0x3a8 ),	/* Offset= 936 (966) */
/* 32 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 34 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 36 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 38 */	NdrFcShort( 0x2 ),	/* Offset= 2 (40) */
/* 40 */	NdrFcShort( 0x10 ),	/* 16 */
/* 42 */	NdrFcShort( 0x2b ),	/* 43 */
/* 44 */	NdrFcLong( 0x3 ),	/* 3 */
/* 48 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 50 */	NdrFcLong( 0x11 ),	/* 17 */
/* 54 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 56 */	NdrFcLong( 0x2 ),	/* 2 */
/* 60 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 62 */	NdrFcLong( 0x4 ),	/* 4 */
/* 66 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 68 */	NdrFcLong( 0x5 ),	/* 5 */
/* 72 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 74 */	NdrFcLong( 0xb ),	/* 11 */
/* 78 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 80 */	NdrFcLong( 0xa ),	/* 10 */
/* 84 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 86 */	NdrFcLong( 0x6 ),	/* 6 */
/* 90 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (304) */
/* 92 */	NdrFcLong( 0x7 ),	/* 7 */
/* 96 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 98 */	NdrFcLong( 0x8 ),	/* 8 */
/* 102 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (310) */
/* 104 */	NdrFcLong( 0xd ),	/* 13 */
/* 108 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (334) */
/* 110 */	NdrFcLong( 0x9 ),	/* 9 */
/* 114 */	NdrFcShort( 0xee ),	/* Offset= 238 (352) */
/* 116 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 120 */	NdrFcShort( 0xfa ),	/* Offset= 250 (370) */
/* 122 */	NdrFcLong( 0x24 ),	/* 36 */
/* 126 */	NdrFcShort( 0x304 ),	/* Offset= 772 (898) */
/* 128 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 132 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (898) */
/* 134 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 138 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (902) */
/* 140 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 144 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (906) */
/* 146 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 150 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (910) */
/* 152 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 156 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (914) */
/* 158 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 162 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (918) */
/* 164 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 168 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (906) */
/* 170 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 174 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (910) */
/* 176 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 180 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (922) */
/* 182 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 186 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (918) */
/* 188 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 192 */	NdrFcShort( 0x2de ),	/* Offset= 734 (926) */
/* 194 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 198 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (930) */
/* 200 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 204 */	NdrFcShort( 0x2da ),	/* Offset= 730 (934) */
/* 206 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 210 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (938) */
/* 212 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 216 */	NdrFcShort( 0x2d6 ),	/* Offset= 726 (942) */
/* 218 */	NdrFcLong( 0x10 ),	/* 16 */
/* 222 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 224 */	NdrFcLong( 0x12 ),	/* 18 */
/* 228 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 230 */	NdrFcLong( 0x13 ),	/* 19 */
/* 234 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 236 */	NdrFcLong( 0x16 ),	/* 22 */
/* 240 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 242 */	NdrFcLong( 0x17 ),	/* 23 */
/* 246 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 248 */	NdrFcLong( 0xe ),	/* 14 */
/* 252 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (950) */
/* 254 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 258 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (962) */
/* 260 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 264 */	NdrFcShort( 0x27e ),	/* Offset= 638 (902) */
/* 266 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 270 */	NdrFcShort( 0x27c ),	/* Offset= 636 (906) */
/* 272 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 276 */	NdrFcShort( 0x27a ),	/* Offset= 634 (910) */
/* 278 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 282 */	NdrFcShort( 0x274 ),	/* Offset= 628 (910) */
/* 284 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 288 */	NdrFcShort( 0x26e ),	/* Offset= 622 (910) */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* Offset= 0 (294) */
/* 296 */	NdrFcLong( 0x1 ),	/* 1 */
/* 300 */	NdrFcShort( 0x0 ),	/* Offset= 0 (300) */
/* 302 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (301) */
/* 304 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 310 */	
			0x13, 0x0,	/* FC_OP */
/* 312 */	NdrFcShort( 0xc ),	/* Offset= 12 (324) */
/* 314 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 316 */	NdrFcShort( 0x2 ),	/* 2 */
/* 318 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 320 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 322 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 324 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (314) */
/* 330 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 332 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 334 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 346 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 348 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 350 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 352 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 354 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 364 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 366 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 368 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 370 */	
			0x13, 0x0,	/* FC_OP */
/* 372 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (880) */
/* 374 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 376 */	NdrFcShort( 0x18 ),	/* 24 */
/* 378 */	NdrFcShort( 0xa ),	/* 10 */
/* 380 */	NdrFcLong( 0x8 ),	/* 8 */
/* 384 */	NdrFcShort( 0x58 ),	/* Offset= 88 (472) */
/* 386 */	NdrFcLong( 0xd ),	/* 13 */
/* 390 */	NdrFcShort( 0x78 ),	/* Offset= 120 (510) */
/* 392 */	NdrFcLong( 0x9 ),	/* 9 */
/* 396 */	NdrFcShort( 0x94 ),	/* Offset= 148 (544) */
/* 398 */	NdrFcLong( 0xc ),	/* 12 */
/* 402 */	NdrFcShort( 0xbc ),	/* Offset= 188 (590) */
/* 404 */	NdrFcLong( 0x24 ),	/* 36 */
/* 408 */	NdrFcShort( 0x114 ),	/* Offset= 276 (684) */
/* 410 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 414 */	NdrFcShort( 0x130 ),	/* Offset= 304 (718) */
/* 416 */	NdrFcLong( 0x10 ),	/* 16 */
/* 420 */	NdrFcShort( 0x148 ),	/* Offset= 328 (748) */
/* 422 */	NdrFcLong( 0x2 ),	/* 2 */
/* 426 */	NdrFcShort( 0x160 ),	/* Offset= 352 (778) */
/* 428 */	NdrFcLong( 0x3 ),	/* 3 */
/* 432 */	NdrFcShort( 0x178 ),	/* Offset= 376 (808) */
/* 434 */	NdrFcLong( 0x14 ),	/* 20 */
/* 438 */	NdrFcShort( 0x190 ),	/* Offset= 400 (838) */
/* 440 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (439) */
/* 442 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 444 */	NdrFcShort( 0x4 ),	/* 4 */
/* 446 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 452 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 454 */	NdrFcShort( 0x4 ),	/* 4 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	0x13, 0x0,	/* FC_OP */
/* 466 */	NdrFcShort( 0xffffff72 ),	/* Offset= -142 (324) */
/* 468 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 470 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 472 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 478 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 480 */	NdrFcShort( 0x4 ),	/* 4 */
/* 482 */	NdrFcShort( 0x4 ),	/* 4 */
/* 484 */	0x11, 0x0,	/* FC_RP */
/* 486 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (442) */
/* 488 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 490 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 492 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 504 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 506 */	NdrFcShort( 0xffffff54 ),	/* Offset= -172 (334) */
/* 508 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 510 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x6 ),	/* Offset= 6 (522) */
/* 518 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 520 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 522 */	
			0x11, 0x0,	/* FC_RP */
/* 524 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (492) */
/* 526 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 538 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 540 */	NdrFcShort( 0xffffff44 ),	/* Offset= -188 (352) */
/* 542 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 544 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x6 ),	/* Offset= 6 (556) */
/* 552 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 554 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 556 */	
			0x11, 0x0,	/* FC_RP */
/* 558 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (526) */
/* 560 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 562 */	NdrFcShort( 0x4 ),	/* 4 */
/* 564 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 570 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 572 */	NdrFcShort( 0x4 ),	/* 4 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	0x13, 0x0,	/* FC_OP */
/* 584 */	NdrFcShort( 0x17e ),	/* Offset= 382 (966) */
/* 586 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 588 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 590 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x6 ),	/* Offset= 6 (602) */
/* 598 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 600 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 602 */	
			0x11, 0x0,	/* FC_RP */
/* 604 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (560) */
/* 606 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 608 */	NdrFcLong( 0x2f ),	/* 47 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 618 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 620 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 622 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 624 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 628 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 630 */	NdrFcShort( 0x4 ),	/* 4 */
/* 632 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 634 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 636 */	NdrFcShort( 0x10 ),	/* 16 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0xa ),	/* Offset= 10 (650) */
/* 642 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 644 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 646 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (606) */
/* 648 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 650 */	
			0x13, 0x0,	/* FC_OP */
/* 652 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (624) */
/* 654 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 656 */	NdrFcShort( 0x4 ),	/* 4 */
/* 658 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 664 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 666 */	NdrFcShort( 0x4 ),	/* 4 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	0x13, 0x0,	/* FC_OP */
/* 678 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (634) */
/* 680 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 682 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 684 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x6 ),	/* Offset= 6 (696) */
/* 692 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 694 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 696 */	
			0x11, 0x0,	/* FC_RP */
/* 698 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (654) */
/* 700 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 704 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 706 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 708 */	NdrFcShort( 0x10 ),	/* 16 */
/* 710 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 712 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 714 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (700) */
			0x5b,		/* FC_END */
/* 718 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x18 ),	/* 24 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0xa ),	/* Offset= 10 (734) */
/* 726 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 728 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 730 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (706) */
/* 732 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 734 */	
			0x11, 0x0,	/* FC_RP */
/* 736 */	NdrFcShort( 0xffffff0c ),	/* Offset= -244 (492) */
/* 738 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 742 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 748 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 752 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 754 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 756 */	NdrFcShort( 0x4 ),	/* 4 */
/* 758 */	NdrFcShort( 0x4 ),	/* 4 */
/* 760 */	0x13, 0x0,	/* FC_OP */
/* 762 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (738) */
/* 764 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 766 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 768 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 770 */	NdrFcShort( 0x2 ),	/* 2 */
/* 772 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 778 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 782 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 784 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 786 */	NdrFcShort( 0x4 ),	/* 4 */
/* 788 */	NdrFcShort( 0x4 ),	/* 4 */
/* 790 */	0x13, 0x0,	/* FC_OP */
/* 792 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (768) */
/* 794 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 796 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 798 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 800 */	NdrFcShort( 0x4 ),	/* 4 */
/* 802 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 808 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 812 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 814 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 816 */	NdrFcShort( 0x4 ),	/* 4 */
/* 818 */	NdrFcShort( 0x4 ),	/* 4 */
/* 820 */	0x13, 0x0,	/* FC_OP */
/* 822 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (798) */
/* 824 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 826 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 828 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 832 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 838 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 844 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 846 */	NdrFcShort( 0x4 ),	/* 4 */
/* 848 */	NdrFcShort( 0x4 ),	/* 4 */
/* 850 */	0x13, 0x0,	/* FC_OP */
/* 852 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (828) */
/* 854 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 856 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 858 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 862 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 864 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 866 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 870 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 872 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 874 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 876 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (858) */
/* 878 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 880 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 882 */	NdrFcShort( 0x28 ),	/* 40 */
/* 884 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (866) */
/* 886 */	NdrFcShort( 0x0 ),	/* Offset= 0 (886) */
/* 888 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 890 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 892 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 894 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffdf7 ),	/* Offset= -521 (374) */
			0x5b,		/* FC_END */
/* 898 */	
			0x13, 0x0,	/* FC_OP */
/* 900 */	NdrFcShort( 0xfffffef6 ),	/* Offset= -266 (634) */
/* 902 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 904 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 906 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 908 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 910 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 912 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 914 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 916 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 918 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 920 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 922 */	
			0x13, 0x0,	/* FC_OP */
/* 924 */	NdrFcShort( 0xfffffd94 ),	/* Offset= -620 (304) */
/* 926 */	
			0x13, 0x10,	/* FC_OP */
/* 928 */	NdrFcShort( 0xfffffd96 ),	/* Offset= -618 (310) */
/* 930 */	
			0x13, 0x10,	/* FC_OP */
/* 932 */	NdrFcShort( 0xfffffdaa ),	/* Offset= -598 (334) */
/* 934 */	
			0x13, 0x10,	/* FC_OP */
/* 936 */	NdrFcShort( 0xfffffdb8 ),	/* Offset= -584 (352) */
/* 938 */	
			0x13, 0x10,	/* FC_OP */
/* 940 */	NdrFcShort( 0xfffffdc6 ),	/* Offset= -570 (370) */
/* 942 */	
			0x13, 0x10,	/* FC_OP */
/* 944 */	NdrFcShort( 0x2 ),	/* Offset= 2 (946) */
/* 946 */	
			0x13, 0x0,	/* FC_OP */
/* 948 */	NdrFcShort( 0xfffffc4c ),	/* Offset= -948 (0) */
/* 950 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 952 */	NdrFcShort( 0x10 ),	/* 16 */
/* 954 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 956 */	0x2,		/* FC_CHAR */
			0x38,		/* FC_ALIGNM4 */
/* 958 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 960 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 962 */	
			0x13, 0x0,	/* FC_OP */
/* 964 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (950) */
/* 966 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 968 */	NdrFcShort( 0x20 ),	/* 32 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* Offset= 0 (972) */
/* 974 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 976 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 978 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 980 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 982 */	NdrFcShort( 0xfffffc4a ),	/* Offset= -950 (32) */
/* 984 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 986 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x10 ),	/* 16 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0xfffffc3a ),	/* Offset= -966 (28) */
/* 996 */	
			0x12, 0x0,	/* FC_UP */
/* 998 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (966) */
/* 1000 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (996) */

			0x0
        }
    };

const CInterfaceProxyVtbl * _mywav_idl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ImywavProxyVtbl,
    0
};

const CInterfaceStubVtbl * _mywav_idl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ImywavStubVtbl,
    0
};

PCInterfaceName const _mywav_idl_InterfaceNamesList[] = 
{
    "Imywav",
    0
};

const IID *  _mywav_idl_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _mywav_idl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _mywav_idl, pIID, n)

int __stdcall _mywav_idl_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_mywav_idl_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo mywav_idl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _mywav_idl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _mywav_idl_StubVtblList,
    (const PCInterfaceName * ) & _mywav_idl_InterfaceNamesList,
    (const IID ** ) & _mywav_idl_BaseIIDList,
    & _mywav_idl_IID_Lookup, 
    1,
    1,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
