#include "StdInc.h"

namespace ManiaPlanet
{

    CMotionWeather* CMotionWeather::CreateInstance ()
    {
        return static_cast < CMotionWeather* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CMotionManagerWeathers* CMotionWeather::GetManager () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Manager" );
        class CMotionManagerWeathers* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CMotionWeather::SetManager ( class CMotionManagerWeathers* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Manager" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
