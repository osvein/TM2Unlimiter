#include "StdInc.h"

namespace ManiaPlanet
{

    _declspec(naked) void CMwNod::Release ()
    {
        _asm jmp Address::Inst.CMwNod__Release
    }

    _declspec(naked) void CMwNod::GetProperty ( CMwStack* pStack, void* pValue ) const
    {
        _asm jmp Address::Inst.CMwNod__GetProperty
    }

    _declspec(naked) void CMwNod::CallMethod ( CMwStack* pStack, void* pValue )
    {
        _asm jmp Address::Inst.CMwNod__CallMethod
    }

}
