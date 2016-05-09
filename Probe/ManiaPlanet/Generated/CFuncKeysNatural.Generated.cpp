#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncKeysNatural* CFuncKeysNatural::CreateInstance ()
    {
        return static_cast < CFuncKeysNatural* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Array < uint >& CFuncKeysNatural::GetNaturals () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Naturals" );
        struct
        {
            Array < uint >* pResult;
            Array < uint > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CFuncKeysNatural::SetNaturals ( Array < uint >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Naturals" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
