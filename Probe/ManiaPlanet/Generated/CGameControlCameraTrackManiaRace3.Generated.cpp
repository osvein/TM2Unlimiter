#include "StdInc.h"

namespace ManiaPlanet
{

    CGameControlCameraTrackManiaRace3* CGameControlCameraTrackManiaRace3::CreateInstance ()
    {
        return static_cast < CGameControlCameraTrackManiaRace3* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CSceneVehicleCameraRace3Model* CGameControlCameraTrackManiaRace3::GetModel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Model" );
        class CSceneVehicleCameraRace3Model* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameControlCameraTrackManiaRace3::SetModel ( class CSceneVehicleCameraRace3Model* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Model" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
