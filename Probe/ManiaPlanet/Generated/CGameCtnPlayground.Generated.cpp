#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnPlayground* CGameCtnPlayground::CreateInstance ()
    {
        return static_cast < CGameCtnPlayground* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGameCtnChallengeScript* CGameCtnPlayground::GetChallengeScript () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeScript" );
        class CGameCtnChallengeScript* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnPlayground::SetChallengeScript ( class CGameCtnChallengeScript* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeScript" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameScene* CGameCtnPlayground::GetGameScene () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GameScene" );
        class CGameScene* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnPlayground::SetGameScene ( class CGameScene* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GameScene" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnGhost* CGameCtnPlayground::GetGuideGhost () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GuideGhost" );
        class CGameCtnGhost* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnPlayground::SetGuideGhost ( class CGameCtnGhost* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GuideGhost" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnGhost* CGameCtnPlayground::GetPlayerBestGhost () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayerBestGhost" );
        class CGameCtnGhost* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnPlayground::SetPlayerBestGhost ( class CGameCtnGhost* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayerBestGhost" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnGhost* CGameCtnPlayground::GetPlayerRecordedGhost () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayerRecordedGhost" );
        class CGameCtnGhost* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnPlayground::SetPlayerRecordedGhost ( class CGameCtnGhost* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayerRecordedGhost" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
