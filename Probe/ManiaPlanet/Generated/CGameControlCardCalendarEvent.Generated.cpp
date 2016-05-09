#include "StdInc.h"

namespace ManiaPlanet
{

    CGameControlCardCalendarEvent* CGameControlCardCalendarEvent::CreateInstance ()
    {
        return static_cast < CGameControlCardCalendarEvent* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    StringA CGameControlCardCalendarEvent::GetStrDate () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StrDate" );
        struct
        {
            StringA* pResult;
            StringA storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameControlCardCalendarEvent::SetStrDate ( StringA value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StrDate" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringW CGameControlCardCalendarEvent::GetStrDescription () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StrDescription" );
        struct
        {
            StringW* pResult;
            StringW storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameControlCardCalendarEvent::SetStrDescription ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StrDescription" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
