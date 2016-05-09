#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaClipConfigScriptContext* CGameCtnMediaClipConfigScriptContext::CreateInstance ()
    {
        return static_cast < CGameCtnMediaClipConfigScriptContext* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    float CGameCtnMediaClipConfigScriptContext::GetSmShieldSizeScale () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SmShieldSizeScale" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnMediaClipConfigScriptContext::SetSmShieldSizeScale ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SmShieldSizeScale" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
