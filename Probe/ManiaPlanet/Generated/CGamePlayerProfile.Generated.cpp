#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerProfile* CGamePlayerProfile::CreateInstance ()
    {
        return static_cast < CGamePlayerProfile* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGamePlayerProfileChunk_AccountSettings* CGamePlayerProfile::GetAccountSettings () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AccountSettings" );
        class CGamePlayerProfileChunk_AccountSettings* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlayerProfile::SetAccountSettings ( class CGamePlayerProfileChunk_AccountSettings* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AccountSettings" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    List < nodptr<class CGamePlayerProfileChunk> >& CGamePlayerProfile::GetChunks () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Chunks" );
        struct
        {
            List < nodptr<class CGamePlayerProfileChunk> >* pResult;
            List < nodptr<class CGamePlayerProfileChunk> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlayerProfile::SetChunks ( List < nodptr<class CGamePlayerProfileChunk> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Chunks" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGamePlayerProfileChunk_Campaign> >& CGamePlayerProfile::GetCustomCampaigns () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CustomCampaigns" );
        struct
        {
            List < nodptr<class CGamePlayerProfileChunk_Campaign> >* pResult;
            List < nodptr<class CGamePlayerProfileChunk_Campaign> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlayerProfile::SetCustomCampaigns ( List < nodptr<class CGamePlayerProfileChunk_Campaign> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CustomCampaigns" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringW CGamePlayerProfile::GetDisplayProfileName () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DisplayProfileName" );
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

    void CGamePlayerProfile::SetDisplayProfileName ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DisplayProfileName" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGamePlayerProfileChunk_GameScores* CGamePlayerProfile::GetGameScores () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GameScores" );
        class CGamePlayerProfileChunk_GameScores* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlayerProfile::SetGameScores ( class CGamePlayerProfileChunk_GameScores* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GameScores" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGamePlayerProfileChunk_GameSettings* CGamePlayerProfile::GetGameSettings () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GameSettings" );
        class CGamePlayerProfileChunk_GameSettings* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlayerProfile::SetGameSettings ( class CGamePlayerProfileChunk_GameSettings* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GameSettings" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGamePlayerProfileChunk_GameStats* CGamePlayerProfile::GetGameStats () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GameStats" );
        class CGamePlayerProfileChunk_GameStats* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlayerProfile::SetGameStats ( class CGamePlayerProfileChunk_GameStats* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GameStats" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    List < nodptr<class CGamePlayerProfileChunk_InputBindingsConfig> >& CGamePlayerProfile::GetInputBindingsConfigs () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "InputBindingsConfigs" );
        struct
        {
            List < nodptr<class CGamePlayerProfileChunk_InputBindingsConfig> >* pResult;
            List < nodptr<class CGamePlayerProfileChunk_InputBindingsConfig> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlayerProfile::SetInputBindingsConfigs ( List < nodptr<class CGamePlayerProfileChunk_InputBindingsConfig> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "InputBindingsConfigs" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGamePlayerProfileChunk_InterfaceSettings* CGamePlayerProfile::GetInterfaceSettings () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "InterfaceSettings" );
        class CGamePlayerProfileChunk_InterfaceSettings* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlayerProfile::SetInterfaceSettings ( class CGamePlayerProfileChunk_InterfaceSettings* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "InterfaceSettings" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    List < nodptr<class CGamePlayerProfileChunk_PackagesInfos> >& CGamePlayerProfile::GetPackagesInfosChunks () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PackagesInfosChunks" );
        struct
        {
            List < nodptr<class CGamePlayerProfileChunk_PackagesInfos> >* pResult;
            List < nodptr<class CGamePlayerProfileChunk_PackagesInfos> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlayerProfile::SetPackagesInfosChunks ( List < nodptr<class CGamePlayerProfileChunk_PackagesInfos> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PackagesInfosChunks" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringA CGamePlayerProfile::GetProfileName () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ProfileName" );
        struct
        {
            StringA* pResult;
            StringA storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlayerProfile::SetProfileName ( StringA value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ProfileName" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CScriptTraitsPersistent* CGamePlayerProfile::GetScriptPersistentTraits_NoTitle () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScriptPersistentTraits_NoTitle" );
        class CScriptTraitsPersistent* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlayerProfile::SetScriptPersistentTraits_NoTitle ( class CScriptTraitsPersistent* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScriptPersistentTraits_NoTitle" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    uint CGamePlayerProfile::GetTotalPlayTime () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TotalPlayTime" );
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

    void CGamePlayerProfile::SetTotalPlayTime ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TotalPlayTime" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGamePlayerProfileChunk_VehiclesSettings* CGamePlayerProfile::GetVehiclesSettings () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VehiclesSettings" );
        class CGamePlayerProfileChunk_VehiclesSettings* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlayerProfile::SetVehiclesSettings ( class CGamePlayerProfileChunk_VehiclesSettings* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VehiclesSettings" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
