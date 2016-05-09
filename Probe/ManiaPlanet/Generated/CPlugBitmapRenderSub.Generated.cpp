#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugBitmapRenderSub* CPlugBitmapRenderSub::CreateInstance ()
    {
        return static_cast < CPlugBitmapRenderSub* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CPlugShader* CPlugBitmapRenderSub::GetShaderToForce () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderToForce" );
        class CPlugShader* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugBitmapRenderSub::SetShaderToForce ( class CPlugShader* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderToForce" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
