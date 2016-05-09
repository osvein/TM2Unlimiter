#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockCameraSimple* CGameCtnMediaBlockCameraSimple::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockCameraSimple* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    uint CGameCtnMediaBlockCameraSimple::GetKeyCache () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "KeyCache" );
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

    void CGameCtnMediaBlockCameraSimple::SetKeyCache ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "KeyCache" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
