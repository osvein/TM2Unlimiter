#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneConfigVision* CSceneConfigVision::CreateInstance ()
    {
        return static_cast < CSceneConfigVision* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CHmsConfig* CSceneConfigVision::GetHmsConfig () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "HmsConfig" );
        class CHmsConfig* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneConfigVision::SetHmsConfig ( class CHmsConfig* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "HmsConfig" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
