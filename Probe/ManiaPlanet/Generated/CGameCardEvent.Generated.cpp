#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCardEvent* CGameCardEvent::CreateInstance ()
    {
        return static_cast < CGameCardEvent* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGameCardEventInfo* CGameCardEvent::GetCardEventInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CardEventInfo" );
        class CGameCardEventInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCardEvent::SetCardEventInfo ( class CGameCardEventInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CardEventInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
