#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockFxColors* CGameCtnMediaBlockFxColors::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockFxColors* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    void CGameCtnMediaBlockFxColors::SwitchOn ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SwitchOn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
