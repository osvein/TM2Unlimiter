#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneMgrWeather* CSceneMgrWeather::CreateInstance ()
    {
        return static_cast < CSceneMgrWeather* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CPlugFxLightning* CSceneMgrWeather::GetFxLightning () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FxLightning" );
        class CPlugFxLightning* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneMgrWeather::SetFxLightning ( class CPlugFxLightning* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FxLightning" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
