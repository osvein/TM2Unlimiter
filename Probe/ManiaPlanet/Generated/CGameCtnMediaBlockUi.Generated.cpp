#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockUi* CGameCtnMediaBlockUi::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockUi* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CControlContainer* CGameCtnMediaBlockUi::GetUserInterface () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UserInterface" );
        class CControlContainer* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnMediaBlockUi::SetUserInterface ( class CControlContainer* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UserInterface" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
