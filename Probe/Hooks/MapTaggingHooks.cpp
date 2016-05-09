#include "StdInc.h"

namespace Hooks
{

    TM2Unlimiter* MapTaggingHooks::ms_pUnlimiter;

    void MapTaggingHooks::Init ()
    {
        ms_pUnlimiter = TM2Unlimiter::GetInstance ();

        HookEntry hooks[] = {
            // Enrich map XML with a TM2Unlimiter marker + custom blocks information
            { &Address::Inst.CGameCtnChallenge__WriteHeaderChunk_hookpos, &OnWroteChallengeXML },

            { NULL, NULL }
        };
        InstallHooks ( hooks );
    }

    _declspec(naked) void MapTaggingHooks::OnWroteChallengeXML ()
    {
        _asm
        {
            lea eax, [esp+0x10]
            push eax
            push esi
            mov ecx, ms_pUnlimiter
            call TM2Unlimiter::EnrichChallengeXml

            jmp Address::Inst.CGameCtnChallenge__WriteHeaderChunk_hookpos
        }
    }

}
