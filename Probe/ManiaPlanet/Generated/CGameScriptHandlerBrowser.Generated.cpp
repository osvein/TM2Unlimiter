#include "StdInc.h"

namespace ManiaPlanet
{

    CGameScriptHandlerBrowser* CGameScriptHandlerBrowser::CreateInstance ()
    {
        return static_cast < CGameScriptHandlerBrowser* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CGameScriptHandlerBrowser::BuddyDoResultToString ( eBuddyDoResult value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BuddyDoResult" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameScriptHandlerBrowser::eBuddyDoResult CGameScriptHandlerBrowser::ParseBuddyDoResult ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BuddyDoResult" );
        return (eBuddyDoResult)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    StringW CGameScriptHandlerBrowser::GetBuddyDoErrorMessage () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BuddyDoErrorMessage" );
        struct
        {
            StringW* pResult;
            StringW storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameScriptHandlerBrowser::SetBuddyDoErrorMessage ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BuddyDoErrorMessage" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGameScriptHandlerBrowser::eBuddyDoResult CGameScriptHandlerBrowser::GetBuddyDoResult () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BuddyDoResult" );
        struct
        {
            eBuddyDoResult* pResult;
            eBuddyDoResult storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameScriptHandlerBrowser::SetBuddyDoResult ( CGameScriptHandlerBrowser::eBuddyDoResult value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BuddyDoResult" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnChallenge* CGameScriptHandlerBrowser::GetCurMap () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CurMap" );
        class CGameCtnChallenge* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameScriptHandlerBrowser::SetCurMap ( class CGameCtnChallenge* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CurMap" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameManiaTitle* CGameScriptHandlerBrowser::GetLoadedTitle () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "LoadedTitle" );
        class CGameManiaTitle* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameScriptHandlerBrowser::SetLoadedTitle ( class CGameManiaTitle* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "LoadedTitle" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGamePlayerInfo* CGameScriptHandlerBrowser::GetLocalUser () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "LocalUser" );
        class CGamePlayerInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameScriptHandlerBrowser::SetLocalUser ( class CGamePlayerInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "LocalUser" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    void CGameScriptHandlerBrowser::BuddyDo ( uint action, StringA strBuddyLogin, bool bIsSilent )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BuddyDo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( bIsSilent );
        stack.Push ( strBuddyLogin );
        stack.Push ( action );
        CallMethod ( &stack, NULL );
    }

    void CGameScriptHandlerBrowser::ShowCurMapCard ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShowCurMapCard" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
