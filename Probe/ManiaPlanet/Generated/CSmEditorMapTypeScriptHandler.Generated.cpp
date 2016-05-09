#include "StdInc.h"

namespace ManiaPlanet
{

    CSmEditorMapTypeScriptHandler* CSmEditorMapTypeScriptHandler::CreateInstance ()
    {
        return static_cast < CSmEditorMapTypeScriptHandler* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CSmArenaRulesMode* CSmEditorMapTypeScriptHandler::GetMode () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Mode" );
        class CSmArenaRulesMode* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSmEditorMapTypeScriptHandler::SetMode ( class CSmArenaRulesMode* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Mode" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
