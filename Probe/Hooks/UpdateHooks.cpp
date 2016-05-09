#include "StdInc.h"

namespace Hooks
{

    void UpdateHooks::Init ()
    {
        HookEntry hooks[] = {
            // Prevent updating ManiaPlanet.exe
            { &Address::Inst.CGameManiaPlanet__UpdateFilesForGameResources_hookpos, &OnDefiningUpdateGroups },
            
            { NULL, NULL }
        };
        InstallHooks ( hooks );
    }

    _declspec(naked) void UpdateHooks::OnDefiningUpdateGroups ()
    {
        _asm jmp Address::Inst.CGameManiaPlanet__UpdateFilesForGameResources_retnpos
    }

}
