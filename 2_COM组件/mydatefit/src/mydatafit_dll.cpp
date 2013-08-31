#include "mclcommain.h"
#include "mydatafit_com.hpp"
#include "mydatafit_idl_i.c"
#include "mwcomutil_i.c"
#include "mwcomtypes_i.c"

CMCLModule g_Module;

static _MCLOBJECT_MAP_ENTRY objectmap[] = 
{
    {
        &CLSID_mydatafit, Cmydatafit::RegisterClass,
        Cmydatafit::UnregisterClass, Cmydatafit::GetClassObject,
        "mydatafit", "mydatafit.mydatafit", "mydatafit.mydatafit.1_0"
    },
    {
        NULL, NULL, NULL, NULL, "", "", ""
    }
};

extern "C" { 

BOOL WINAPI DllMain( HINSTANCE hInstance, DWORD dwReason, void *pv )
{
    return g_Module.InitMain(objectmap, &LIBID_mydatafit, 1,
                             0, hInstance, dwReason, pv);
}

HRESULT __stdcall DllCanUnloadNow()
{
    return (g_Module.GetLockCount()==0) ? S_OK : S_FALSE;
}

HRESULT __stdcall DllGetClassObject(REFCLSID clsid, REFIID iid, void **ppv )
{
    return g_Module.GetClassObject( clsid, iid, ppv );
}

HRESULT __stdcall DllRegisterServer()
{
    return g_Module.UpdateRegistry( TRUE );
}

HRESULT __stdcall DllUnregisterServer()
{
    return g_Module.UpdateRegistry( FALSE );
}

}

