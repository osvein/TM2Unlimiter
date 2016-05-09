#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsCorpus* CHmsCorpus::CreateInstance ()
    {
        return static_cast < CHmsCorpus* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CHmsItem* CHmsCorpus::GetItem () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Item" );
        class CHmsItem* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CHmsCorpus::SetItem ( class CHmsItem* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Item" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
