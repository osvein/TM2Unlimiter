#include "StdInc.h"

namespace Hooks
{

    void HooksBase::InstallHooks ( HookEntry* pHookEntries )
    {
        DetourTransactionBegin ();
        for ( HookEntry* pHookEntry = pHookEntries; pHookEntry->m_ppHookPos; pHookEntry++ )
        {
            DetourAttach ( pHookEntry->m_ppHookPos, pHookEntry->m_pTarget );
        }
        DetourTransactionCommit ();
    }

    _declspec(naked) void HooksBase::CallOriginalFunction ( void* pInstance, void* pMethod, int iArgsOffset, int iArgsSize )
    {
        _asm
        {
            push esi
            push edi

            lea esi, [esp+8+4+0x10]
            add esi, [esp+8+0xC]

            mov eax, [esp+8+4]
            mov edx, [esp+8+8]
            mov ecx, [esp+8+0x10]

            sub esp, ecx
            mov edi, esp
            rep movsb

            mov ecx, eax
            call edx

            pop edi
            pop esi
            retn 0x10
        }
    }

}
