#include "StdInc.h"

namespace ManiaPlanet
{

    CControlEffectCombined* CControlEffectCombined::CreateInstance ()
    {
        return static_cast < CControlEffectCombined* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CMwRefBuffer* CControlEffectCombined::GetEffects () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Effects" );
        class CMwRefBuffer* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CControlEffectCombined::SetEffects ( class CMwRefBuffer* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Effects" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
