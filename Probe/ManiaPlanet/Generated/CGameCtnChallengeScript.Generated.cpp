#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnChallengeScript* CGameCtnChallengeScript::CreateInstance ()
    {
        return static_cast < CGameCtnChallengeScript* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGameCtnChallenge* CGameCtnChallengeScript::GetMap () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Map" );
        class CGameCtnChallenge* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnChallengeScript::SetMap ( class CGameCtnChallenge* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Map" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CGameCtnChallengeScript::StartClip ( StringW wstrClipName )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StartClip" );
        bool bResult;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( wstrClipName );
        stack.Push ( bResult );
        CallMethod ( &stack, NULL );
        return bResult;
    }

}
