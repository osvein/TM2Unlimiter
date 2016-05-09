#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockFxBlurDepth* CGameCtnMediaBlockFxBlurDepth::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockFxBlurDepth* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    void CGameCtnMediaBlockFxBlurDepth::SwitchOn ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SwitchOn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
