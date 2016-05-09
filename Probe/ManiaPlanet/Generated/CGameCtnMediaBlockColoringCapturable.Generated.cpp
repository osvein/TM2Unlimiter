#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockColoringCapturable* CGameCtnMediaBlockColoringCapturable::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockColoringCapturable* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    uint CGameCtnMediaBlockColoringCapturable::GetCapturableIndex () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CapturableIndex" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnMediaBlockColoringCapturable::SetCapturableIndex ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CapturableIndex" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
