#include "StdInc.h"

namespace ManiaPlanet
{

    CTmEditorMapTypeScriptHandler* CTmEditorMapTypeScriptHandler::CreateInstance ()
    {
        return static_cast < CTmEditorMapTypeScriptHandler* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CTrackManiaRaceRules* CTmEditorMapTypeScriptHandler::GetMode () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Mode" );
        class CTrackManiaRaceRules* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CTmEditorMapTypeScriptHandler::SetMode ( class CTrackManiaRaceRules* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Mode" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
