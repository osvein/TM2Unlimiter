#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerProfileChunk_InputBindingsConfig* CGamePlayerProfileChunk_InputBindingsConfig::CreateInstance ()
    {
        return static_cast < CGamePlayerProfileChunk_InputBindingsConfig* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CInputBindingsConfig* CGamePlayerProfileChunk_InputBindingsConfig::GetConfig () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Config" );
        class CInputBindingsConfig* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlayerProfileChunk_InputBindingsConfig::SetConfig ( class CInputBindingsConfig* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Config" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
