#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockInfo* CGameCtnBlockInfo::CreateInstance ()
    {
        return static_cast < CGameCtnBlockInfo* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CGameCtnBlockInfo::BaseTypeToString ( eBaseType value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BaseType" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnBlockInfo::eBaseType CGameCtnBlockInfo::ParseBaseType ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BaseType" );
        return (eBaseType)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGameCtnBlockInfo::DirToString ( eDir value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Dir" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnBlockInfo::eDir CGameCtnBlockInfo::ParseDir ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Dir" );
        return (eDir)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGameCtnBlockInfo::EdWayPointTypeToString ( eEdWayPointType value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "EdWayPointType" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnBlockInfo::eEdWayPointType CGameCtnBlockInfo::ParseEdWayPointType ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "EdWayPointType" );
        return (eEdWayPointType)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGameCtnBlockInfo::WayPointTypeToString ( eWayPointType value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "WayPointType" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnBlockInfo::eWayPointType CGameCtnBlockInfo::ParseWayPointType ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "WayPointType" );
        return (eWayPointType)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    List < nodptr<class CGameCtnBlockInfoVariantAir> >& CGameCtnBlockInfo::GetAdditionalVariantsAir () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AdditionalVariantsAir" );
        struct
        {
            List < nodptr<class CGameCtnBlockInfoVariantAir> >* pResult;
            List < nodptr<class CGameCtnBlockInfoVariantAir> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfo::SetAdditionalVariantsAir ( List < nodptr<class CGameCtnBlockInfoVariantAir> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AdditionalVariantsAir" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGameCtnBlockInfoVariantGround> >& CGameCtnBlockInfo::GetAdditionalVariantsGround () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AdditionalVariantsGround" );
        struct
        {
            List < nodptr<class CGameCtnBlockInfoVariantGround> >* pResult;
            List < nodptr<class CGameCtnBlockInfoVariantGround> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfo::SetAdditionalVariantsGround ( List < nodptr<class CGameCtnBlockInfoVariantGround> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AdditionalVariantsGround" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGameCtnBlockInfo::eBaseType CGameCtnBlockInfo::GetBaseType () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BaseType" );
        struct
        {
            eBaseType* pResult;
            eBaseType storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfo::SetBaseType ( CGameCtnBlockInfo::eBaseType value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BaseType" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGameCtnBlockInfo::eDir CGameCtnBlockInfo::GetDir () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Dir" );
        struct
        {
            eDir* pResult;
            eDir storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfo::SetDir ( CGameCtnBlockInfo::eDir value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Dir" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameCtnBlockInfo::GetEdNoRespawn () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EdNoRespawn" );
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

    void CGameCtnBlockInfo::SetEdNoRespawn ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EdNoRespawn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGameCtnBlockInfo::eEdWayPointType CGameCtnBlockInfo::GetEdWayPointType () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EdWayPointType" );
        struct
        {
            eEdWayPointType* pResult;
            eEdWayPointType storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfo::SetEdWayPointType ( CGameCtnBlockInfo::eEdWayPointType value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EdWayPointType" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CPlugFogVolumeBox* CGameCtnBlockInfo::GetFogVolumeBox () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FogVolumeBox" );
        class CPlugFogVolumeBox* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetFogVolumeBox ( class CPlugFogVolumeBox* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FogVolumeBox" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CGameCtnBlockInfo::GetIconAutoUseGround () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IconAutoUseGround" );
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

    void CGameCtnBlockInfo::SetIconAutoUseGround ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IconAutoUseGround" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CMwNod* CGameCtnBlockInfo::GetIconMacroBlockInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IconMacroBlockInfo" );
        class CMwNod* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetIconMacroBlockInfo ( class CMwNod* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IconMacroBlockInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGamePodiumInfo* CGameCtnBlockInfo::GetIntroInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IntroInfo" );
        class CGamePodiumInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetIntroInfo ( class CGamePodiumInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IntroInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CGameCtnBlockInfo::GetIsObsolete () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsObsolete" );
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

    void CGameCtnBlockInfo::SetIsObsolete ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsObsolete" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameCtnBlockInfo::GetIsPillar () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsPillar" );
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

    void CGameCtnBlockInfo::SetIsPillar ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsPillar" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameCtnBlockInfo::GetIsRoad () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsRoad" );
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

    void CGameCtnBlockInfo::SetIsRoad ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsRoad" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameCtnBlockInfo::GetIsTerrain () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsTerrain" );
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

    void CGameCtnBlockInfo::SetIsTerrain ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsTerrain" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringW CGameCtnBlockInfo::GetName () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Name" );
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

    void CGameCtnBlockInfo::SetName ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Name" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameCtnBlockInfo::GetNoRespawn () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoRespawn" );
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

    void CGameCtnBlockInfo::SetNoRespawn ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoRespawn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CScenePhyCharSpecialProperty* CGameCtnBlockInfo::GetPhyCharSpecialProperty () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PhyCharSpecialProperty" );
        class CScenePhyCharSpecialProperty* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetPhyCharSpecialProperty ( class CScenePhyCharSpecialProperty* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PhyCharSpecialProperty" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CGameCtnBlockInfo::GetPhyCharSpecialPropertyCustomizable () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PhyCharSpecialPropertyCustomizable" );
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

    void CGameCtnBlockInfo::SetPhyCharSpecialPropertyCustomizable ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PhyCharSpecialPropertyCustomizable" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGamePodiumInfo* CGameCtnBlockInfo::GetPodiumInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PodiumInfo" );
        class CGamePodiumInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetPodiumInfo ( class CGamePodiumInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PodiumInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    Matrix43 CGameCtnBlockInfo::GetPrecalcPartLoc () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PrecalcPartLoc" );
        struct
        {
            Matrix43* pResult;
            Matrix43 storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfo::SetPrecalcPartLoc ( Matrix43 value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PrecalcPartLoc" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CMwNod* CGameCtnBlockInfo::GetPrecalcPartParams () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PrecalcPartParams" );
        class CMwNod* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetPrecalcPartParams ( class CMwNod* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PrecalcPartParams" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugSound* CGameCtnBlockInfo::GetSound1 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sound1" );
        class CPlugSound* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetSound1 ( class CPlugSound* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sound1" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    Matrix43 CGameCtnBlockInfo::GetSound1Loc () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sound1Loc" );
        struct
        {
            Matrix43* pResult;
            Matrix43 storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfo::SetSound1Loc ( Matrix43 value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sound1Loc" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CPlugSound* CGameCtnBlockInfo::GetSound2 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sound2" );
        class CPlugSound* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetSound2 ( class CPlugSound* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sound2" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    Matrix43 CGameCtnBlockInfo::GetSound2Loc () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sound2Loc" );
        struct
        {
            Matrix43* pResult;
            Matrix43 storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfo::SetSound2Loc ( Matrix43 value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sound2Loc" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnBlockInfo* CGameCtnBlockInfo::GetSymmetricalBlockInfoConnected () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SymmetricalBlockInfoConnected" );
        class CGameCtnBlockInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetSymmetricalBlockInfoConnected ( class CGameCtnBlockInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SymmetricalBlockInfoConnected" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    Id CGameCtnBlockInfo::GetSymmetricalBlockInfoId () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SymmetricalBlockInfoId" );
        struct
        {
            Id* pResult;
            Id storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfo::SetSymmetricalBlockInfoId ( Id value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SymmetricalBlockInfoId" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnBlockInfoVariantAir* CGameCtnBlockInfo::GetVariantAir () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VariantAir" );
        class CGameCtnBlockInfoVariantAir* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetVariantAir ( class CGameCtnBlockInfoVariantAir* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VariantAir" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnBlockInfoVariantAir* CGameCtnBlockInfo::GetVariantBaseAir () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VariantBaseAir" );
        class CGameCtnBlockInfoVariantAir* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetVariantBaseAir ( class CGameCtnBlockInfoVariantAir* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VariantBaseAir" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnBlockInfoVariantGround* CGameCtnBlockInfo::GetVariantBaseGround () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VariantBaseGround" );
        class CGameCtnBlockInfoVariantGround* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetVariantBaseGround ( class CGameCtnBlockInfoVariantGround* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VariantBaseGround" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnBlockInfoVariantGround* CGameCtnBlockInfo::GetVariantGround () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VariantGround" );
        class CGameCtnBlockInfoVariantGround* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetVariantGround ( class CGameCtnBlockInfoVariantGround* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VariantGround" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    CGameCtnBlockInfo::eWayPointType CGameCtnBlockInfo::GetWayPointType () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "WayPointType" );
        struct
        {
            eWayPointType* pResult;
            eWayPointType storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfo::SetWayPointType ( CGameCtnBlockInfo::eWayPointType value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "WayPointType" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameWaypointSpecialProperty* CGameCtnBlockInfo::GetWaypointSpecialProperty () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "WaypointSpecialProperty" );
        class CGameWaypointSpecialProperty* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfo::SetWaypointSpecialProperty ( class CGameWaypointSpecialProperty* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "WaypointSpecialProperty" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
