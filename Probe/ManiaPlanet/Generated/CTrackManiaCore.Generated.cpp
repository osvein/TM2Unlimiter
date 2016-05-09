#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaCore* CTrackManiaCore::CreateInstance ()
    {
        return static_cast < CTrackManiaCore* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGameManiaPlanet* CTrackManiaCore::GetDummy () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Dummy" );
        class CGameManiaPlanet* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CTrackManiaCore::SetDummy ( class CGameManiaPlanet* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Dummy" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
