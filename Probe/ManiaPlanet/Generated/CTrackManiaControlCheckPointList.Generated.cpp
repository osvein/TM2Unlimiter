#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaControlCheckPointList* CTrackManiaControlCheckPointList::CreateInstance ()
    {
        return static_cast < CTrackManiaControlCheckPointList* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CControlFrame* CTrackManiaControlCheckPointList::GetCardModel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CardModel" );
        class CControlFrame* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CTrackManiaControlCheckPointList::SetCardModel ( class CControlFrame* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CardModel" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CControlStyle* CTrackManiaControlCheckPointList::GetStyleName () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StyleName" );
        class CControlStyle* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CTrackManiaControlCheckPointList::SetStyleName ( class CControlStyle* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StyleName" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CControlStyle* CTrackManiaControlCheckPointList::GetStyleRank () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StyleRank" );
        class CControlStyle* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CTrackManiaControlCheckPointList::SetStyleRank ( class CControlStyle* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StyleRank" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CControlStyle* CTrackManiaControlCheckPointList::GetStyleTime () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StyleTime" );
        class CControlStyle* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CTrackManiaControlCheckPointList::SetStyleTime ( class CControlStyle* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StyleTime" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
