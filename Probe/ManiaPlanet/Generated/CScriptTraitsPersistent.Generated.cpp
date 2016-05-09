#include "StdInc.h"

namespace ManiaPlanet
{

    CScriptTraitsPersistent* CScriptTraitsPersistent::CreateInstance ()
    {
        return static_cast < CScriptTraitsPersistent* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    uint CScriptTraitsPersistent::GetPersistentTraitsCount () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PersistentTraitsCount" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CScriptTraitsPersistent::SetPersistentTraitsCount ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PersistentTraitsCount" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
