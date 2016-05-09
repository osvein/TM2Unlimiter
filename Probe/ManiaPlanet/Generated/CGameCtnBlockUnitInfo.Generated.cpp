#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockUnitInfo* CGameCtnBlockUnitInfo::CreateInstance ()
    {
        return static_cast < CGameCtnBlockUnitInfo* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CGameCtnBlockUnitInfo::BottomClipDirToString ( eBottomClipDir value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BottomClipDir" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnBlockUnitInfo::eBottomClipDir CGameCtnBlockUnitInfo::ParseBottomClipDir ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BottomClipDir" );
        return (eBottomClipDir)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGameCtnBlockUnitInfo::PillarDirToString ( ePillarDir value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "PillarDir" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnBlockUnitInfo::ePillarDir CGameCtnBlockUnitInfo::ParsePillarDir ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "PillarDir" );
        return (ePillarDir)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGameCtnBlockUnitInfo::ReplacementDirToString ( eReplacementDir value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "ReplacementDir" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnBlockUnitInfo::eReplacementDir CGameCtnBlockUnitInfo::ParseReplacementDir ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "ReplacementDir" );
        return (eReplacementDir)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGameCtnBlockUnitInfo::TopClipDirToString ( eTopClipDir value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "TopClipDir" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnBlockUnitInfo::eTopClipDir CGameCtnBlockUnitInfo::ParseTopClipDir ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "TopClipDir" );
        return (eTopClipDir)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    uint CGameCtnBlockUnitInfo::GetAcceptPylons () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AcceptPylons" );
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

    void CGameCtnBlockUnitInfo::SetAcceptPylons ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AcceptPylons" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnBlockInfoClip* CGameCtnBlockUnitInfo::GetBottomClip () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BottomClip" );
        class CGameCtnBlockInfoClip* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockUnitInfo::SetBottomClip ( class CGameCtnBlockInfoClip* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BottomClip" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    CGameCtnBlockUnitInfo::eBottomClipDir CGameCtnBlockUnitInfo::GetBottomClipDir () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BottomClipDir" );
        struct
        {
            eBottomClipDir* pResult;
            eBottomClipDir storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockUnitInfo::SetBottomClipDir ( CGameCtnBlockUnitInfo::eBottomClipDir value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BottomClipDir" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Array < class CGameCtnBlockInfoClip* >& CGameCtnBlockUnitInfo::GetClips () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Clips" );
        struct
        {
            Array < class CGameCtnBlockInfoClip* >* pResult;
            Array < class CGameCtnBlockInfoClip* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockUnitInfo::SetClips ( Array < class CGameCtnBlockInfoClip* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Clips" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Array < class CGameCtnBlockInfoClip* >& CGameCtnBlockUnitInfo::GetClipsE () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ClipsE" );
        struct
        {
            Array < class CGameCtnBlockInfoClip* >* pResult;
            Array < class CGameCtnBlockInfoClip* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockUnitInfo::SetClipsE ( Array < class CGameCtnBlockInfoClip* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ClipsE" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint3 CGameCtnBlockUnitInfo::GetOffset () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Offset" );
        struct
        {
            uint3* pResult;
            uint3 storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockUnitInfo::SetOffset ( uint3 value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Offset" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint3 CGameCtnBlockUnitInfo::GetOffsetE () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OffsetE" );
        struct
        {
            uint3* pResult;
            uint3 storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockUnitInfo::SetOffsetE ( uint3 value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OffsetE" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnBlockUnitInfo* CGameCtnBlockUnitInfo::GetOriginalBlockUnitInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OriginalBlockUnitInfo" );
        class CGameCtnBlockUnitInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockUnitInfo::SetOriginalBlockUnitInfo ( class CGameCtnBlockUnitInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OriginalBlockUnitInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnBlockInfo* CGameCtnBlockUnitInfo::GetPillarBlockInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PillarBlockInfo" );
        class CGameCtnBlockInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockUnitInfo::SetPillarBlockInfo ( class CGameCtnBlockInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PillarBlockInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    CGameCtnBlockUnitInfo::ePillarDir CGameCtnBlockUnitInfo::GetPillarDir () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PillarDir" );
        struct
        {
            ePillarDir* pResult;
            ePillarDir storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockUnitInfo::SetPillarDir ( CGameCtnBlockUnitInfo::ePillarDir value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PillarDir" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CGameCtnBlockUnitInfo::GetPlacePylons () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlacePylons" );
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

    void CGameCtnBlockUnitInfo::SetPlacePylons ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlacePylons" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Array < class CGameCtnBlockInfoPylon* >& CGameCtnBlockUnitInfo::GetPylons () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Pylons" );
        struct
        {
            Array < class CGameCtnBlockInfoPylon* >* pResult;
            Array < class CGameCtnBlockInfoPylon* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockUnitInfo::SetPylons ( Array < class CGameCtnBlockInfoPylon* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Pylons" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnBlockInfo* CGameCtnBlockUnitInfo::GetReplacementBlockInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReplacementBlockInfo" );
        class CGameCtnBlockInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockUnitInfo::SetReplacementBlockInfo ( class CGameCtnBlockInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReplacementBlockInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    CGameCtnBlockUnitInfo::eReplacementDir CGameCtnBlockUnitInfo::GetReplacementDir () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReplacementDir" );
        struct
        {
            eReplacementDir* pResult;
            eReplacementDir storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockUnitInfo::SetReplacementDir ( CGameCtnBlockUnitInfo::eReplacementDir value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReplacementDir" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CGameCtnBlockUnitInfo::GetReplacementIndex () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReplacementIndex" );
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

    void CGameCtnBlockUnitInfo::SetReplacementIndex ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReplacementIndex" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Id CGameCtnBlockUnitInfo::GetTerrainModifierId () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TerrainModifierId" );
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

    void CGameCtnBlockUnitInfo::SetTerrainModifierId ( Id value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TerrainModifierId" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnBlockInfoClip* CGameCtnBlockUnitInfo::GetTopClip () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TopClip" );
        class CGameCtnBlockInfoClip* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockUnitInfo::SetTopClip ( class CGameCtnBlockInfoClip* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TopClip" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    CGameCtnBlockUnitInfo::eTopClipDir CGameCtnBlockUnitInfo::GetTopClipDir () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TopClipDir" );
        struct
        {
            eTopClipDir* pResult;
            eTopClipDir storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockUnitInfo::SetTopClipDir ( CGameCtnBlockUnitInfo::eTopClipDir value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TopClipDir" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameCtnBlockUnitInfo::GetUnderground () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Underground" );
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

    void CGameCtnBlockUnitInfo::SetUnderground ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Underground" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
