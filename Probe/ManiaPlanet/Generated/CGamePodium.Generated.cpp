#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePodium* CGamePodium::CreateInstance ()
    {
        return static_cast < CGamePodium* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CSceneCamera* CGamePodium::GetPodiumCamera () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PodiumCamera" );
        class CSceneCamera* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePodium::SetPodiumCamera ( class CSceneCamera* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PodiumCamera" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
