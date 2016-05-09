#include "StdInc.h"

namespace ManiaPlanet
{

    CGameMenuSkinChooser* CGameMenuSkinChooser::CreateInstance ()
    {
        return static_cast < CGameMenuSkinChooser* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CScene3d* CGameMenuSkinChooser::GetSceneProfile () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SceneProfile" );
        class CScene3d* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameMenuSkinChooser::SetSceneProfile ( class CScene3d* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SceneProfile" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
