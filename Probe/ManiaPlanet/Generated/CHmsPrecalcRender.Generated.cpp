#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsPrecalcRender* CHmsPrecalcRender::CreateInstance ()
    {
        return static_cast < CHmsPrecalcRender* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CHmsPrecalcRender::BitmapDepthModeToString ( eBitmapDepthMode value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BitmapDepthMode" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CHmsPrecalcRender::eBitmapDepthMode CHmsPrecalcRender::ParseBitmapDepthMode ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BitmapDepthMode" );
        return (eBitmapDepthMode)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    class CPlugBitmap* CHmsPrecalcRender::GetBitmapDepth () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDepth" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CHmsPrecalcRender::SetBitmapDepth ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDepth" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    CHmsPrecalcRender::eBitmapDepthMode CHmsPrecalcRender::GetBitmapDepthMode () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDepthMode" );
        struct
        {
            eBitmapDepthMode* pResult;
            eBitmapDepthMode storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CHmsPrecalcRender::SetBitmapDepthMode ( CHmsPrecalcRender::eBitmapDepthMode value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDepthMode" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CPlugBitmap* CHmsPrecalcRender::GetBitmapRGB () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapRGB" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CHmsPrecalcRender::SetBitmapRGB ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapRGB" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CHmsPrecalcRender::GetIsTreeDepthGenFound () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsTreeDepthGenFound" );
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

    void CHmsPrecalcRender::SetIsTreeDepthGenFound ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsTreeDepthGenFound" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CHmsPrecalcRender::GetScrollPosX () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScrollPosX" );
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

    void CHmsPrecalcRender::SetScrollPosX ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScrollPosX" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CHmsPrecalcRender::GetScrollPosY () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScrollPosY" );
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

    void CHmsPrecalcRender::SetScrollPosY ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScrollPosY" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringA CHmsPrecalcRender::GetTreeIdDepthGen () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TreeIdDepthGen" );
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

    void CHmsPrecalcRender::SetTreeIdDepthGen ( StringA value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TreeIdDepthGen" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CHmsPrecalcRender::GetZoomFactor () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ZoomFactor" );
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

    void CHmsPrecalcRender::SetZoomFactor ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ZoomFactor" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
