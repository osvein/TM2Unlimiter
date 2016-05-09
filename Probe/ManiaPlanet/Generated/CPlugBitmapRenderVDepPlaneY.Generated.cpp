#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugBitmapRenderVDepPlaneY* CPlugBitmapRenderVDepPlaneY::CreateInstance ()
    {
        return static_cast < CPlugBitmapRenderVDepPlaneY* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CPlugViewDepLocator* CPlugBitmapRenderVDepPlaneY::GetViewDepLocator () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ViewDepLocator" );
        class CPlugViewDepLocator* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugBitmapRenderVDepPlaneY::SetViewDepLocator ( class CPlugViewDepLocator* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ViewDepLocator" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
