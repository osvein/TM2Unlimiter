#include "StdInc.h"

namespace ManiaPlanet
{

    CControlSlider* CControlSlider::CreateInstance ()
    {
        return static_cast < CControlSlider* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CControlSlider::AxisToString ( eAxis value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Axis" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CControlSlider::eAxis CControlSlider::ParseAxis ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Axis" );
        return (eAxis)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    CControlSlider::eAxis CControlSlider::GetAxis () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Axis" );
        struct
        {
            eAxis* pResult;
            eAxis storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CControlSlider::SetAxis ( CControlSlider::eAxis value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Axis" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Id CControlSlider::GetIconIdBar () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IconIdBar" );
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

    void CControlSlider::SetIconIdBar ( Id value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IconIdBar" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Id CControlSlider::GetIconIdCursor () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IconIdCursor" );
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

    void CControlSlider::SetIconIdCursor ( Id value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IconIdCursor" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CControlSlider::GetManualSize () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ManualSize" );
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

    void CControlSlider::SetManualSize ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ManualSize" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CControlSlider::GetRatio () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Ratio" );
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

    void CControlSlider::SetRatio ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Ratio" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
