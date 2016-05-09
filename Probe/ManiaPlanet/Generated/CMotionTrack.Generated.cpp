#include "StdInc.h"

namespace ManiaPlanet
{

    CMotionTrack* CMotionTrack::CreateInstance ()
    {
        return static_cast < CMotionTrack* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CMwNod* CMotionTrack::GetOwner () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Owner" );
        class CMwNod* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CMotionTrack::SetOwner ( class CMwNod* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Owner" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
