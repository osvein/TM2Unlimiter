#include "StdInc.h"

namespace ManiaPlanet
{

    CMotionFunc* CMotionFunc::CreateInstance ()
    {
        return static_cast < CMotionFunc* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CMwNod* CMotionFunc::GetFunc () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Func" );
        class CMwNod* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CMotionFunc::SetFunc ( class CMwNod* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Func" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
