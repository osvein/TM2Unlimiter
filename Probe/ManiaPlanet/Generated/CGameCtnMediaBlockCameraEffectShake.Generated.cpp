#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockCameraEffectShake* CGameCtnMediaBlockCameraEffectShake::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockCameraEffectShake* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGameControlCameraEffect* CGameCtnMediaBlockCameraEffectShake::GetEffect () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Effect" );
        class CGameControlCameraEffect* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnMediaBlockCameraEffectShake::SetEffect ( class CGameControlCameraEffect* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Effect" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    uint CGameCtnMediaBlockCameraEffectShake::GetKeyCache () const
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

    void CGameCtnMediaBlockCameraEffectShake::SetKeyCache ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "KeyCache" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
