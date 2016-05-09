#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockDirtyLens* CGameCtnMediaBlockDirtyLens::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockDirtyLens* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    void CGameCtnMediaBlockDirtyLens::SwitchOn ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SwitchOn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
