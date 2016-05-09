#include "StdInc.h"

namespace ManiaPlanet
{

    CMotions* CMotions::CreateInstance ()
    {
        return static_cast < CMotions* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Array < class CMwNod* >& CMotions::GetMotions () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Motions" );
        struct
        {
            Array < class CMwNod* >* pResult;
            Array < class CMwNod* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CMotions::SetMotions ( Array < class CMwNod* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Motions" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
