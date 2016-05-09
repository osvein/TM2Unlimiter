#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugBlockShadingResource* CPlugBlockShadingResource::CreateInstance ()
    {
        return static_cast < CPlugBlockShadingResource* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CPlugFileImg* CPlugBlockShadingResource::GetImage_DefaultDiffuse () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Image_DefaultDiffuse" );
        class CPlugFileImg* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugBlockShadingResource::SetImage_DefaultDiffuse ( class CPlugFileImg* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Image_DefaultDiffuse" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileImg* CPlugBlockShadingResource::GetImage_DefaultNormal () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Image_DefaultNormal" );
        class CPlugFileImg* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugBlockShadingResource::SetImage_DefaultNormal ( class CPlugFileImg* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Image_DefaultNormal" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileImg* CPlugBlockShadingResource::GetImage_DefaultSpecular () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Image_DefaultSpecular" );
        class CPlugFileImg* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugBlockShadingResource::SetImage_DefaultSpecular ( class CPlugFileImg* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Image_DefaultSpecular" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugMaterial* CPlugBlockShadingResource::GetMaterial_TDiffSpecNorm () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Material_TDiffSpecNorm" );
        class CPlugMaterial* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugBlockShadingResource::SetMaterial_TDiffSpecNorm ( class CPlugMaterial* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Material_TDiffSpecNorm" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
