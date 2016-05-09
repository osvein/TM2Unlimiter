#include "StdInc.h"

extern "C" void Bootstrap ()
{

}

void InstallHooks ()
{
    dword dwOldPerm;
    VirtualProtect ( Address::Inst.CodeBase, Address::Inst.CodeSize, PAGE_READWRITE, &dwOldPerm );

    static Hooks::BlockMixHooks blockMixHooks;
    blockMixHooks.Init ();

    static Hooks::MapTaggingHooks mapTaggingHooks;
    mapTaggingHooks.Init ();

    static Hooks::UpdateHooks updateHooks;
    updateHooks.Init ();

    VirtualProtect ( Address::Inst.CodeBase, Address::Inst.CodeSize, PAGE_EXECUTE_READ, &dwOldPerm );
}

BOOL __stdcall DllMain ( HINSTANCE hInstance, DWORD dwReason, void* pReserved )
{
    switch ( dwReason )
    {
        case DLL_PROCESS_ATTACH:
        {
            DetourRestoreAfterWith ();
            InstallHooks ();
            break;
        }
    }
    return TRUE;
}
