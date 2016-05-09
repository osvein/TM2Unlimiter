#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncKeysTransQuat* CFuncKeysTransQuat::CreateInstance ()
    {
        return static_cast < CFuncKeysTransQuat* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    void CFuncKeysTransQuat::AddTransQuatKey ( float fX, Vec3D vecPos, Vec3D vecDir, Vec3D vecUp )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddTransQuatKey" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecUp );
        stack.Push ( vecDir );
        stack.Push ( vecPos );
        stack.Push ( fX );
        CallMethod ( &stack, NULL );
    }

}
