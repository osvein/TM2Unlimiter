#include "StdInc.h"

namespace ManiaPlanet
{

    CControlEffectSwitchStyle* CControlEffectSwitchStyle::CreateInstance ()
    {
        return static_cast < CControlEffectSwitchStyle* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CControlStyle* CControlEffectSwitchStyle::GetFocusedStyle () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FocusedStyle" );
        class CControlStyle* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CControlEffectSwitchStyle::SetFocusedStyle ( class CControlStyle* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FocusedStyle" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
