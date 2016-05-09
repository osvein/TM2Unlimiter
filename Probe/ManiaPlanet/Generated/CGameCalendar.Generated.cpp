#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCalendar* CGameCalendar::CreateInstance ()
    {
        return static_cast < CGameCalendar* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameCalendarEvent> >& CGameCalendar::GetEvents () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Events" );
        struct
        {
            List < nodptr<class CGameCalendarEvent> >* pResult;
            List < nodptr<class CGameCalendarEvent> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCalendar::SetEvents ( List < nodptr<class CGameCalendarEvent> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Events" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
