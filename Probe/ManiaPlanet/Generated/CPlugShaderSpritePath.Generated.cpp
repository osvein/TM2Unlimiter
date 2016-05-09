#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugShaderSpritePath* CPlugShaderSpritePath::CreateInstance ()
    {
        return static_cast < CPlugShaderSpritePath* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CFuncKeysPath* CPlugShaderSpritePath::GetFuncKeysPath () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FuncKeysPath" );
        class CFuncKeysPath* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugShaderSpritePath::SetFuncKeysPath ( class CFuncKeysPath* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FuncKeysPath" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
