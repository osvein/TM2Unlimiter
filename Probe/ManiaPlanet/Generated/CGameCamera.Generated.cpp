#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCamera* CGameCamera::CreateInstance ()
    {
        return static_cast < CGameCamera* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CSceneCamera* CGameCamera::GetSceneCamera () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SceneCamera" );
        class CSceneCamera* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCamera::SetSceneCamera ( class CSceneCamera* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SceneCamera" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
