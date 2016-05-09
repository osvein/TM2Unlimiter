#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnDecorationAudio* CGameCtnDecorationAudio::CreateInstance ()
    {
        return static_cast < CGameCtnDecorationAudio* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_Overlay_Far () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_Overlay_Far" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_Overlay_Far ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_Overlay_Far" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_Overlay_Underground () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_Overlay_Underground" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_Overlay_Underground ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_Overlay_Underground" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_PlaygroundAvgPlayers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_PlaygroundAvgPlayers" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_PlaygroundAvgPlayers ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_PlaygroundAvgPlayers" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_PlaygroundFewPlayers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_PlaygroundFewPlayers" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_PlaygroundFewPlayers ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_PlaygroundFewPlayers" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_PlaygroundManyPlayers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_PlaygroundManyPlayers" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_PlaygroundManyPlayers ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_PlaygroundManyPlayers" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_Podium () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_Podium" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_Podium ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_Podium" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_Replay () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_Replay" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_Replay ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_Replay" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_SM_EvtFire () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_SM_EvtFire" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_SM_EvtFire ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_SM_EvtFire" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_SM_EvtHit () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_SM_EvtHit" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_SM_EvtHit ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_SM_EvtHit" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_SM_EvtHitEliminated () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_SM_EvtHitEliminated" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_SM_EvtHitEliminated ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_SM_EvtHitEliminated" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_SM_EvtSpawn () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_SM_EvtSpawn" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_SM_EvtSpawn ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_SM_EvtSpawn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_SM_EvtUnspawn () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_SM_EvtUnspawn" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_SM_EvtUnspawn ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_SM_EvtUnspawn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_TM_EvtCheckpoint () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_TM_EvtCheckpoint" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_TM_EvtCheckpoint ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_TM_EvtCheckpoint" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_TM_EvtCrash () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_TM_EvtCrash" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_TM_EvtCrash ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_TM_EvtCrash" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_TM_EvtFlying () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_TM_EvtFlying" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_TM_EvtFlying ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_TM_EvtFlying" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_TM_EvtRespawn () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_TM_EvtRespawn" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_TM_EvtRespawn ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_TM_EvtRespawn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioBalance* CGameCtnDecorationAudio::GetAudioBalance_TM_EvtStartLine () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_TM_EvtStartLine" );
        class CPlugAudioBalance* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioBalance_TM_EvtStartLine ( class CPlugAudioBalance* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioBalance_TM_EvtStartLine" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioEnvironment* CGameCtnDecorationAudio::GetAudioEnvOutsideEnclosed () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioEnvOutsideEnclosed" );
        class CPlugAudioEnvironment* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioEnvOutsideEnclosed ( class CPlugAudioEnvironment* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioEnvOutsideEnclosed" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioEnvironment* CGameCtnDecorationAudio::GetAudioEnvOutsideOpen () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioEnvOutsideOpen" );
        class CPlugAudioEnvironment* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioEnvOutsideOpen ( class CPlugAudioEnvironment* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioEnvOutsideOpen" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioEnvironment* CGameCtnDecorationAudio::GetAudioEnvUndergroundEnclosed () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioEnvUndergroundEnclosed" );
        class CPlugAudioEnvironment* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioEnvUndergroundEnclosed ( class CPlugAudioEnvironment* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioEnvUndergroundEnclosed" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugAudioEnvironment* CGameCtnDecorationAudio::GetAudioEnvUndergroundOpen () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioEnvUndergroundOpen" );
        class CPlugAudioEnvironment* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationAudio::SetAudioEnvUndergroundOpen ( class CPlugAudioEnvironment* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AudioEnvUndergroundOpen" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    float CGameCtnDecorationAudio::GetCameraWooshMinSpeedKmh () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CameraWooshMinSpeedKmh" );
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

    void CGameCtnDecorationAudio::SetCameraWooshMinSpeedKmh ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CameraWooshMinSpeedKmh" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGameCtnDecorationAudio::GetCameraWooshVolumedB () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CameraWooshVolumedB" );
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

    void CGameCtnDecorationAudio::SetCameraWooshVolumedB ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CameraWooshVolumedB" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Array < class CPlugMusic* >& CGameCtnDecorationAudio::GetMusics () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Musics" );
        struct
        {
            Array < class CPlugMusic* >* pResult;
            Array < class CPlugMusic* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnDecorationAudio::SetMusics ( Array < class CPlugMusic* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Musics" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < float >& CGameCtnDecorationAudio::GetReverbMaterialGains () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReverbMaterialGains" );
        struct
        {
            List < float >* pResult;
            List < float > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnDecorationAudio::SetReverbMaterialGains ( List < float >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReverbMaterialGains" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGameCtnDecorationAudio::GetReverbMaxBlockDist () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReverbMaxBlockDist" );
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

    void CGameCtnDecorationAudio::SetReverbMaxBlockDist ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReverbMaxBlockDist" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGameCtnDecorationAudio::GetReverbMinBlockDist () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReverbMinBlockDist" );
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

    void CGameCtnDecorationAudio::SetReverbMinBlockDist ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReverbMinBlockDist" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Array < class CPlugSound* >& CGameCtnDecorationAudio::GetSounds () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sounds" );
        struct
        {
            Array < class CPlugSound* >* pResult;
            Array < class CPlugSound* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnDecorationAudio::SetSounds ( Array < class CPlugSound* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sounds" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
