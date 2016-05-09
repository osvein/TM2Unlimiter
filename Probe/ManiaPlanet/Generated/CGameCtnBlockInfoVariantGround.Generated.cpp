#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockInfoVariantGround* CGameCtnBlockInfoVariantGround::CreateInstance ()
    {
        return static_cast < CGameCtnBlockInfoVariantGround* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CGameCtnBlockInfoVariantGround::AutoTerrainPlaceTypeToString ( eAutoTerrainPlaceType value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "AutoTerrainPlaceType" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnBlockInfoVariantGround::eAutoTerrainPlaceType CGameCtnBlockInfoVariantGround::ParseAutoTerrainPlaceType ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "AutoTerrainPlaceType" );
        return (eAutoTerrainPlaceType)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    int CGameCtnBlockInfoVariantGround::GetAutoTerrainHeightOffset () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AutoTerrainHeightOffset" );
        struct
        {
            int* pResult;
            int storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfoVariantGround::SetAutoTerrainHeightOffset ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AutoTerrainHeightOffset" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGameCtnBlockInfoVariantGround::eAutoTerrainPlaceType CGameCtnBlockInfoVariantGround::GetAutoTerrainPlaceType () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AutoTerrainPlaceType" );
        struct
        {
            eAutoTerrainPlaceType* pResult;
            eAutoTerrainPlaceType storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfoVariantGround::SetAutoTerrainPlaceType ( CGameCtnBlockInfoVariantGround::eAutoTerrainPlaceType value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AutoTerrainPlaceType" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameCtnBlockInfoVariantGround::GetAutoTerrainWithFrontiers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AutoTerrainWithFrontiers" );
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

    void CGameCtnBlockInfoVariantGround::SetAutoTerrainWithFrontiers ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AutoTerrainWithFrontiers" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGameCtnAutoTerrain> >& CGameCtnBlockInfoVariantGround::GetAutoTerrains () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AutoTerrains" );
        struct
        {
            List < nodptr<class CGameCtnAutoTerrain> >* pResult;
            List < nodptr<class CGameCtnAutoTerrain> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnBlockInfoVariantGround::SetAutoTerrains ( List < nodptr<class CGameCtnAutoTerrain> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AutoTerrains" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
