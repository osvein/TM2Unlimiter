#include "StdInc.h"

namespace ManiaPlanet
{

    CControlForm* CControlForm::CreateInstance ()
    {
        return static_cast < CControlForm* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    void CControlForm::ClearCache ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ClearCache" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
