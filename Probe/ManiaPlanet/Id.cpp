#include "StdInc.h"

namespace ManiaPlanet
{

    Id::Id ()
    {
        m_iKey = -1;
    }

    Id::Id ( const Id& other )
    {
        *this = other;
    }

    Id::Id ( const char* psz )
    {
        *this = psz;
    }

    _declspec(naked) const char* Id::Resolve () const
    {
        _asm jmp Address::Inst.Id__Resolve
    }

    Id& Id::operator= ( const char* psz )
    {
        _asm
        {
            push psz
            mov ecx, this
            call Address::Inst.Id__AssignPsz
        }
        return *this;
    }

}
