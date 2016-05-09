#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugTrafficObjectParams* CPlugTrafficObjectParams::CreateInstance ()
    {
        return static_cast < CPlugTrafficObjectParams* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CPlugTrafficObjectParams::TrafficModelToString ( eTrafficModel value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "TrafficModel" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CPlugTrafficObjectParams::eTrafficModel CPlugTrafficObjectParams::ParseTrafficModel ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "TrafficModel" );
        return (eTrafficModel)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CPlugTrafficObjectParams::TrafficPathTypeToString ( eTrafficPathType value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "TrafficPathType" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CPlugTrafficObjectParams::eTrafficPathType CPlugTrafficObjectParams::ParseTrafficPathType ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "TrafficPathType" );
        return (eTrafficPathType)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    Matrix43 CPlugTrafficObjectParams::GetBaseOffset () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BaseOffset" );
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

    void CPlugTrafficObjectParams::SetBaseOffset ( Matrix43 value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BaseOffset" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CPlugTrafficObjectParams::GetDefaultAcceleration () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DefaultAcceleration" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugTrafficObjectParams::SetDefaultAcceleration ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DefaultAcceleration" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CPlugTrafficObjectParams::GetDefaultDecceleration () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DefaultDecceleration" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugTrafficObjectParams::SetDefaultDecceleration ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DefaultDecceleration" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CPlugTrafficObjectParams::GetDefaultSpeed () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DefaultSpeed" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugTrafficObjectParams::SetDefaultSpeed ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DefaultSpeed" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CPlugTrafficObjectParams::GetPointDelay () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PointDelay" );
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

    void CPlugTrafficObjectParams::SetPointDelay ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PointDelay" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CPlugTrafficObjectParams::eTrafficModel CPlugTrafficObjectParams::GetTrafficModel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TrafficModel" );
        struct
        {
            eTrafficModel* pResult;
            eTrafficModel storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugTrafficObjectParams::SetTrafficModel ( CPlugTrafficObjectParams::eTrafficModel value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TrafficModel" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CPlugTrafficObjectParams::eTrafficPathType CPlugTrafficObjectParams::GetTrafficPathType () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TrafficPathType" );
        struct
        {
            eTrafficPathType* pResult;
            eTrafficPathType storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugTrafficObjectParams::SetTrafficPathType ( CPlugTrafficObjectParams::eTrafficPathType value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TrafficPathType" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
