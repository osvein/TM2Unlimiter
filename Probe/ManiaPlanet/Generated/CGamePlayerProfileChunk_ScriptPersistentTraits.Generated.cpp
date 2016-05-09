#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerProfileChunk_ScriptPersistentTraits* CGamePlayerProfileChunk_ScriptPersistentTraits::CreateInstance ()
    {
        return static_cast < CGamePlayerProfileChunk_ScriptPersistentTraits* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CScriptTraitsPersistent* CGamePlayerProfileChunk_ScriptPersistentTraits::GetScriptPersistentTraits () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScriptPersistentTraits" );
        class CScriptTraitsPersistent* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlayerProfileChunk_ScriptPersistentTraits::SetScriptPersistentTraits ( class CScriptTraitsPersistent* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScriptPersistentTraits" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
