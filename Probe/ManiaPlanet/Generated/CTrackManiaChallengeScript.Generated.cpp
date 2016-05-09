#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaChallengeScript* CTrackManiaChallengeScript::CreateInstance ()
    {
        return static_cast < CTrackManiaChallengeScript* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CTrackManiaPlayer* CTrackManiaChallengeScript::GetPlayer () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Player" );
        class CTrackManiaPlayer* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CTrackManiaChallengeScript::SetPlayer ( class CTrackManiaPlayer* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Player" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
