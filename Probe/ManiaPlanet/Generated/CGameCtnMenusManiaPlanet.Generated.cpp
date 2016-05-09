#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMenusManiaPlanet* CGameCtnMenusManiaPlanet::CreateInstance ()
    {
        return static_cast < CGameCtnMenusManiaPlanet* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameCtnChallengeInfo> >& CGameCtnMenusManiaPlanet::GetChallengeInfosCampaign () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeInfosCampaign" );
        struct
        {
            List < nodptr<class CGameCtnChallengeInfo> >* pResult;
            List < nodptr<class CGameCtnChallengeInfo> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnMenusManiaPlanet::SetChallengeInfosCampaign ( List < nodptr<class CGameCtnChallengeInfo> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeInfosCampaign" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnCampaign* CGameCtnMenusManiaPlanet::GetCurrentCampaign () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CurrentCampaign" );
        class CGameCtnCampaign* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnMenusManiaPlanet::SetCurrentCampaign ( class CGameCtnCampaign* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CurrentCampaign" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CGameCtnMenusManiaPlanet::GetMenuManiaPlanet_IsEditMenuVisible () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MenuManiaPlanet_IsEditMenuVisible" );
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

    void CGameCtnMenusManiaPlanet::SetMenuManiaPlanet_IsEditMenuVisible ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MenuManiaPlanet_IsEditMenuVisible" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameCtnMenusManiaPlanet::GetMenuManiaPlanet_IsEditingStations () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MenuManiaPlanet_IsEditingStations" );
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

    void CGameCtnMenusManiaPlanet::SetMenuManiaPlanet_IsEditingStations ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MenuManiaPlanet_IsEditingStations" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
