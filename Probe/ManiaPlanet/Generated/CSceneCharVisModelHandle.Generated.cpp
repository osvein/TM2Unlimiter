#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneCharVisModelHandle* CSceneCharVisModelHandle::CreateInstance ()
    {
        return static_cast < CSceneCharVisModelHandle* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CMwNod* CSceneCharVisModelHandle::GetModel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Model" );
        class CMwNod* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneCharVisModelHandle::SetModel ( class CMwNod* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Model" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
