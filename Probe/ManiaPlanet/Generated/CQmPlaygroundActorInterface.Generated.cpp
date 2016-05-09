#include "StdInc.h"

namespace ManiaPlanet
{

    CQmPlaygroundActorInterface* CQmPlaygroundActorInterface::CreateInstance ()
    {
        return static_cast < CQmPlaygroundActorInterface* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CQmControlCardsStackAnimated> >& CQmPlaygroundActorInterface::GetCardsStacks () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CardsStacks" );
        struct
        {
            List < nodptr<class CQmControlCardsStackAnimated> >* pResult;
            List < nodptr<class CQmControlCardsStackAnimated> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmPlaygroundActorInterface::SetCardsStacks ( List < nodptr<class CQmControlCardsStackAnimated> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CardsStacks" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CControlLabel> >& CQmPlaygroundActorInterface::GetCounters () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Counters" );
        struct
        {
            List < nodptr<class CControlLabel> >* pResult;
            List < nodptr<class CControlLabel> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmPlaygroundActorInterface::SetCounters ( List < nodptr<class CControlLabel> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Counters" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CQmControlGaugeAnimated> >& CQmPlaygroundActorInterface::GetGauges () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Gauges" );
        struct
        {
            List < nodptr<class CQmControlGaugeAnimated> >* pResult;
            List < nodptr<class CQmControlGaugeAnimated> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmPlaygroundActorInterface::SetGauges ( List < nodptr<class CQmControlGaugeAnimated> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Gauges" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CQmPlayer* CQmPlaygroundActorInterface::GetPlayer () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Player" );
        class CQmPlayer* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQmPlaygroundActorInterface::SetPlayer ( class CQmPlayer* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Player" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
