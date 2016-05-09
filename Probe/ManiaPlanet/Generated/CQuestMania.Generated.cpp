#include "StdInc.h"

namespace ManiaPlanet
{

    CQuestMania* CQuestMania::CreateInstance ()
    {
        return static_cast < CQuestMania* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CScene2d* CQuestMania::GetPlaygroundInterfaceFid () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlaygroundInterfaceFid" );
        class CScene2d* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQuestMania::SetPlaygroundInterfaceFid ( class CScene2d* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlaygroundInterfaceFid" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
