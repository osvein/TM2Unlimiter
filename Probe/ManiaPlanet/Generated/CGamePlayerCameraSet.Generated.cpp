#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerCameraSet* CGamePlayerCameraSet::CreateInstance ()
    {
        return static_cast < CGamePlayerCameraSet* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGameControlCameraMaster* CGamePlayerCameraSet::GetCamsMaster () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CamsMaster" );
        class CGameControlCameraMaster* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlayerCameraSet::SetCamsMaster ( class CGameControlCameraMaster* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CamsMaster" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    uint CGamePlayerCameraSet::GetSwitchDuration () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SwitchDuration" );
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

    void CGamePlayerCameraSet::SetSwitchDuration ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SwitchDuration" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
