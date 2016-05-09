#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncKeysTrans* CFuncKeysTrans::CreateInstance ()
    {
        return static_cast < CFuncKeysTrans* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Array < Vec3D >& CFuncKeysTrans::GetTrans () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Trans" );
        struct
        {
            Array < Vec3D >* pResult;
            Array < Vec3D > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CFuncKeysTrans::SetTrans ( Array < Vec3D >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Trans" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
