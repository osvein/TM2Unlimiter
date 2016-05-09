#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockFxBloom* CGameCtnMediaBlockFxBloom::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockFxBloom* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    void CGameCtnMediaBlockFxBloom::SwitchOn ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SwitchOn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
