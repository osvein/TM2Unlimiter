#include "StdInc.h"

namespace ManiaPlanet
{

    CQmRuleEvent* CQmRuleEvent::CreateInstance ()
    {
        return static_cast < CQmRuleEvent* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CQmActor* CQmRuleEvent::GetActor () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Actor" );
        class CQmActor* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQmRuleEvent::SetActor ( class CQmActor* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Actor" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameAttributes* CQmRuleEvent::GetAttributes () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Attributes" );
        class CGameAttributes* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQmRuleEvent::SetAttributes ( class CGameAttributes* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Attributes" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CQmBoard* CQmRuleEvent::GetBoard () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Board" );
        class CQmBoard* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQmRuleEvent::SetBoard ( class CQmBoard* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Board" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    uint CQmRuleEvent::GetDebugNatural () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DebugNatural" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleEvent::SetDebugNatural ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DebugNatural" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CQmRuleEvent::GetDuration () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Duration" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleEvent::SetDuration ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Duration" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CQmRuleEvent::GetFinishTime () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FinishTime" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleEvent::SetFinishTime ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FinishTime" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CQmRuleEvent::GetIsInternal () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsInternal" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleEvent::SetIsInternal ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsInternal" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CQmRuleEvent::GetNextTime () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NextTime" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleEvent::SetNextTime ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NextTime" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CQmRuleEvent::GetOnCancelResult () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OnCancelResult" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleEvent::SetOnCancelResult ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OnCancelResult" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CQmRuleEvent::GetPeriod () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Period" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleEvent::SetPeriod ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Period" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CQmPlayer* CQmRuleEvent::GetPlayer () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Player" );
        class CQmPlayer* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQmRuleEvent::SetPlayer ( class CQmPlayer* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Player" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    uint CQmRuleEvent::GetPreparation () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Preparation" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleEvent::SetPreparation ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Preparation" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CQmPlaygroundRulesManager* CQmRuleEvent::GetRulesManager () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RulesManager" );
        class CQmPlaygroundRulesManager* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQmRuleEvent::SetRulesManager ( class CQmPlaygroundRulesManager* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RulesManager" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CQmRuleEvent::GetShowInHistory () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShowInHistory" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleEvent::SetShowInHistory ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShowInHistory" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CQmBoardSquare* CQmRuleEvent::GetSquare () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Square" );
        class CQmBoardSquare* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQmRuleEvent::SetSquare ( class CQmBoardSquare* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Square" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    uint CQmRuleEvent::GetState () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "State" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleEvent::SetState ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "State" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CQmRuleEvent::GetSuccess () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Success" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleEvent::SetSuccess ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Success" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CQmRuleEvent::ActivateRandomActionCard ( class CQmPlayer* pPlayer, class CQmActor* pActor, StringA strFromList, StringA strToList )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ActivateRandomActionCard" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strToList );
        stack.Push ( strFromList );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pPlayer ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::ActivateRandomEffectCard ( class CQmPlayer* pPlayer, class CQmActor* pActor, class CQmActor* pTarget, StringA strFromList, StringA strToList )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ActivateRandomEffectCard" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strToList );
        stack.Push ( strFromList );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pTarget ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pPlayer ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::AddActionsToChoice ( class CQmActor* pActor, StringA strDeck )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddActionsToChoice" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strDeck );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    int CQmRuleEvent::AddRelDirStringToDir ( int iSrcDir, StringA strRelDir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddRelDirStringToDir" );
        int iDestDir;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strRelDir );
        stack.Push ( iSrcDir );
        stack.Push ( iDestDir );
        CallMethod ( &stack, NULL );
        return iDestDir;
    }

    int CQmRuleEvent::AddRelDirToDir ( int iSrcDir, int iRelDir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddRelDirToDir" );
        int iDestDir;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iRelDir );
        stack.Push ( iSrcDir );
        stack.Push ( iDestDir );
        CallMethod ( &stack, NULL );
        return iDestDir;
    }

    void CQmRuleEvent::AddVisualEffectAttack ( class CQmActor* pActor, int iDirection, int iDuration )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddVisualEffectAttack" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDuration );
        stack.Push ( iDirection );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        CallMethod ( &stack, NULL );
    }

    void CQmRuleEvent::AddVisualEffectBonusText ( class CQmActor* pActor, int iValue, StringA strIcon, int iDuration )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddVisualEffectBonusText" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDuration );
        stack.Push ( strIcon );
        stack.Push ( iValue );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        CallMethod ( &stack, NULL );
    }

    void CQmRuleEvent::AddVisualEffectDoorClose ( class CQmActor* pActor, int iDuration )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddVisualEffectDoorClose" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDuration );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        CallMethod ( &stack, NULL );
    }

    void CQmRuleEvent::AddVisualEffectDoorOpen ( class CQmActor* pActor, int iDuration )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddVisualEffectDoorOpen" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDuration );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        CallMethod ( &stack, NULL );
    }

    void CQmRuleEvent::AddVisualEffectHit ( class CQmActor* pActor, int iDuration )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddVisualEffectHit" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDuration );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        CallMethod ( &stack, NULL );
    }

    void CQmRuleEvent::AddVisualEffectMalusText ( class CQmActor* pActor, int iValue, StringA strIcon, int iDuration )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddVisualEffectMalusText" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDuration );
        stack.Push ( strIcon );
        stack.Push ( iValue );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        CallMethod ( &stack, NULL );
    }

    void CQmRuleEvent::AddVisualEffectScreenFadeIn ( int iDuration )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddVisualEffectScreenFadeIn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDuration );
        CallMethod ( &stack, NULL );
    }

    void CQmRuleEvent::AddVisualEffectScreenFadeOut ( int iDuration )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddVisualEffectScreenFadeOut" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDuration );
        CallMethod ( &stack, NULL );
    }

    void CQmRuleEvent::AddVisualEffectWait ( int iDuration )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddVisualEffectWait" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDuration );
        CallMethod ( &stack, NULL );
    }

    bool CQmRuleEvent::ApplyDamage ( class CQmActor* pActor, int iDamage )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ApplyDamage" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDamage );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::CallScript ( StringA strName )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CallScript" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strName );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::CancelAppliedEffects ( class CQmActor* pActor, StringA strName )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CancelAppliedEffects" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strName );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::CancelApplyingEffects ( class CQmActor* pActor, StringA strName )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CancelApplyingEffects" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strName );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    int CQmRuleEvent::CreateActorInInventory ( class CQmActor* pOwner, StringA strActorName )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CreateActorInInventory" );
        int iInventoryIndex;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strActorName );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pOwner ) );
        stack.Push ( iInventoryIndex );
        CallMethod ( &stack, NULL );
        return iInventoryIndex;
    }

    bool CQmRuleEvent::CreateRuleAction ( StringA strName, class CQmPlayer* pPlayer, class CQmActor* pActor )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CreateRuleAction" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pPlayer ) );
        stack.Push ( strName );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::CreateRuleEffect ( StringA strName, class CQmPlayer* pPlayer, class CQmActor* pActor, class CQmActor* pTarget )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CreateRuleEffect" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pTarget ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pPlayer ) );
        stack.Push ( strName );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::DrawCard ( class CQmPlayer* pPlayer, StringA strFromList, StringA strToList, StringA strFillList, int iCardCount )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DrawCard" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iCardCount );
        stack.Push ( strFillList );
        stack.Push ( strToList );
        stack.Push ( strFromList );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pPlayer ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    int CQmRuleEvent::FindSquareWithCard ( StringA strCardName, int iFromSquareIndex, bool bCanLoop )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FindSquareWithCard" );
        int iSquareIndex;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( bCanLoop );
        stack.Push ( iFromSquareIndex );
        stack.Push ( strCardName );
        stack.Push ( iSquareIndex );
        CallMethod ( &stack, NULL );
        return iSquareIndex;
    }

    int CQmRuleEvent::GetCardCount ( StringA strListId )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetCardCount" );
        int iCount;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strListId );
        stack.Push ( iCount );
        CallMethod ( &stack, NULL );
        return iCount;
    }

    int CQmRuleEvent::GetDirectionBetweenActors ( class CQmActor* pFirstActor, class CQmActor* pSecondActor )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetDirectionBetweenActors" );
        int iDirection;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pSecondActor ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pFirstActor ) );
        stack.Push ( iDirection );
        CallMethod ( &stack, NULL );
        return iDirection;
    }

    int CQmRuleEvent::GetDirectionBetweenSquares ( class CQmBoardSquare* pFirstSquare, class CQmBoardSquare* pSecondSquare )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetDirectionBetweenSquares" );
        int iDirection;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pSecondSquare ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pFirstSquare ) );
        stack.Push ( iDirection );
        CallMethod ( &stack, NULL );
        return iDirection;
    }

    float CQmRuleEvent::GetDistanceBetweenActors ( class CQmActor* pFirstActor, class CQmActor* pSecondActor )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetDistanceBetweenActors" );
        float fDistance;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pSecondActor ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pFirstActor ) );
        stack.Push ( fDistance );
        CallMethod ( &stack, NULL );
        return fDistance;
    }

    float CQmRuleEvent::GetDistanceBetweenSquares ( class CQmBoardSquare* pFirstSquare, class CQmBoardSquare* pSecondSquare )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetDistanceBetweenSquares" );
        float fDistance;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pSecondSquare ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pFirstSquare ) );
        stack.Push ( fDistance );
        CallMethod ( &stack, NULL );
        return fDistance;
    }

    int CQmRuleEvent::GetNeighbourSquare ( class CQmBoardSquare* pSquare, int iDirection )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetNeighbourSquare" );
        int iSquareIndex;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDirection );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pSquare ) );
        stack.Push ( iSquareIndex );
        CallMethod ( &stack, NULL );
        return iSquareIndex;
    }

    int CQmRuleEvent::GetOpposedDir ( int iSrcDir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetOpposedDir" );
        int iDestDir;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iSrcDir );
        stack.Push ( iDestDir );
        CallMethod ( &stack, NULL );
        return iDestDir;
    }

    bool CQmRuleEvent::GetPlayerCardEventListId ( class CQmPlayer* pPlayer, StringA strListId )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetPlayerCardEventListId" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strListId );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pPlayer ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    int CQmRuleEvent::GetRelativeSquare ( class CQmActor* pActor, int iDirection, int iCount )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetRelativeSquare" );
        int iSquareIndex;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iCount );
        stack.Push ( iDirection );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( iSquareIndex );
        CallMethod ( &stack, NULL );
        return iSquareIndex;
    }

    int CQmRuleEvent::GetSquareIndex ( class CQmBoardSquare* pSquare )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetSquareIndex" );
        int iSquareIndex;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pSquare ) );
        stack.Push ( iSquareIndex );
        CallMethod ( &stack, NULL );
        return iSquareIndex;
    }

    float CQmRuleEvent::GetSquareSize ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetSquareSize" );
        float fSize;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( fSize );
        CallMethod ( &stack, NULL );
        return fSize;
    }

    bool CQmRuleEvent::MoveActorOnSquare ( class CQmPlayer* pPlayer, class CQmActor* pActor, class CQmBoardSquare* pSquare, int iDirection, bool bActivateEvents, bool bForceNewMove )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MoveActorOnSquare" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( bForceNewMove );
        stack.Push ( bActivateEvents );
        stack.Push ( iDirection );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pSquare ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pPlayer ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    int CQmRuleEvent::RandNat ( int iMin, int iMax )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RandNat" );
        int iResult;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iMax );
        stack.Push ( iMin );
        stack.Push ( iResult );
        CallMethod ( &stack, NULL );
        return iResult;
    }

    bool CQmRuleEvent::RemoveActor ( class CQmActor* pActor )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveActor" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::RemoveActorFromInventory ( class CQmActor* pOwner, class CQmActor* pActor )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveActorFromInventory" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pOwner ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::SetActionChoices ( class CQmActor* pActor, StringA strDeck )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SetActionChoices" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strDeck );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::SetActionChoicesName ( class CQmActor* pActor, StringA strName )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SetActionChoicesName" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strName );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::SetPlayerCheckpoint ( class CQmPlayer* pPlayer )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SetPlayerCheckpoint" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pPlayer ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::TransferActorFromInventory ( class CQmActor* pOwner, class CQmActor* pActor )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TransferActorFromInventory" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pOwner ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::TransferActorToInventory ( class CQmActor* pOwner, class CQmActor* pActor )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TransferActorToInventory" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pActor ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pOwner ) );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::TransferAllCards ( StringA strFromList, StringA strToList )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TransferAllCards" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strToList );
        stack.Push ( strFromList );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::TransferCard ( StringA strFromList, StringA strCard, StringA strToList )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TransferCard" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strToList );
        stack.Push ( strCard );
        stack.Push ( strFromList );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::TransferCards ( StringA strFromList, int iFromCardIndex, StringA strToList, int iToCardIndex, int iCardCount )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TransferCards" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iCardCount );
        stack.Push ( iToCardIndex );
        stack.Push ( strToList );
        stack.Push ( iFromCardIndex );
        stack.Push ( strFromList );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::TransferRandomCard ( StringA strFromList, StringA strToList )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TransferRandomCard" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strToList );
        stack.Push ( strFromList );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

    bool CQmRuleEvent::TransferRandomCards ( StringA strFromList, StringA strToList, int iNbCards )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TransferRandomCards" );
        bool bSuccess;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iNbCards );
        stack.Push ( strToList );
        stack.Push ( strFromList );
        stack.Push ( bSuccess );
        CallMethod ( &stack, NULL );
        return bSuccess;
    }

}
