#include "StdInc.h"

namespace ManiaPlanet
{

    CAudioMusic* CAudioMusic::CreateInstance ()
    {
        return static_cast < CAudioMusic* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Array < bool >& CAudioMusic::GetTracksEnabled () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TracksEnabled" );
        struct
        {
            Array < bool >* pResult;
            Array < bool > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CAudioMusic::SetTracksEnabled ( Array < bool >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TracksEnabled" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
