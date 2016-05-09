#include "StdInc.h"

namespace ManiaPlanet
{

    CSmChallengeParameters* CSmChallengeParameters::CreateInstance ()
    {
        return static_cast < CSmChallengeParameters* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    void CSmChallengeParameters::SetDefaults ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SetDefaults" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
