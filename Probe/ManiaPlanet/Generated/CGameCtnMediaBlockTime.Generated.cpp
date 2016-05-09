#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockTime* CGameCtnMediaBlockTime::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockTime* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    void CGameCtnMediaBlockTime::SwitchOn ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SwitchOn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
