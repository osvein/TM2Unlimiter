#include "StdInc.h"

namespace ManiaPlanet
{

    CGameActorList* CGameActorList::CreateInstance ()
    {
        return static_cast < CGameActorList* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameActor> >& CGameActorList::GetActors () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Actors" );
        struct
        {
            List < nodptr<class CGameActor> >* pResult;
            List < nodptr<class CGameActor> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameActorList::SetActors ( List < nodptr<class CGameActor> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Actors" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
