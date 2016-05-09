        enum { CLASSID = 0x03039000 };

        static CGameCtnDecorationAudio* CreateInstance ();

        class CPlugAudioBalance* GetAudioBalance_Overlay_Far             () const;
        void                    SetAudioBalance_Overlay_Far             ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_Overlay_Underground     () const;
        void                    SetAudioBalance_Overlay_Underground     ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_PlaygroundAvgPlayers    () const;
        void                    SetAudioBalance_PlaygroundAvgPlayers    ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_PlaygroundFewPlayers    () const;
        void                    SetAudioBalance_PlaygroundFewPlayers    ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_PlaygroundManyPlayers   () const;
        void                    SetAudioBalance_PlaygroundManyPlayers   ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_Podium                  () const;
        void                    SetAudioBalance_Podium                  ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_Replay                  () const;
        void                    SetAudioBalance_Replay                  ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_SM_EvtFire              () const;
        void                    SetAudioBalance_SM_EvtFire              ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_SM_EvtHit               () const;
        void                    SetAudioBalance_SM_EvtHit               ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_SM_EvtHitEliminated     () const;
        void                    SetAudioBalance_SM_EvtHitEliminated     ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_SM_EvtSpawn             () const;
        void                    SetAudioBalance_SM_EvtSpawn             ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_SM_EvtUnspawn           () const;
        void                    SetAudioBalance_SM_EvtUnspawn           ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_TM_EvtCheckpoint        () const;
        void                    SetAudioBalance_TM_EvtCheckpoint        ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_TM_EvtCrash             () const;
        void                    SetAudioBalance_TM_EvtCrash             ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_TM_EvtFlying            () const;
        void                    SetAudioBalance_TM_EvtFlying            ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_TM_EvtRespawn           () const;
        void                    SetAudioBalance_TM_EvtRespawn           ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_TM_EvtStartLine         () const;
        void                    SetAudioBalance_TM_EvtStartLine         ( class CPlugAudioBalance* value );

        class CPlugAudioEnvironment* GetAudioEnvOutsideEnclosed              () const;
        void                    SetAudioEnvOutsideEnclosed              ( class CPlugAudioEnvironment* value );

        class CPlugAudioEnvironment* GetAudioEnvOutsideOpen                  () const;
        void                    SetAudioEnvOutsideOpen                  ( class CPlugAudioEnvironment* value );

        class CPlugAudioEnvironment* GetAudioEnvUndergroundEnclosed          () const;
        void                    SetAudioEnvUndergroundEnclosed          ( class CPlugAudioEnvironment* value );

        class CPlugAudioEnvironment* GetAudioEnvUndergroundOpen              () const;
        void                    SetAudioEnvUndergroundOpen              ( class CPlugAudioEnvironment* value );

        float                   GetCameraWooshMinSpeedKmh               () const;
        void                    SetCameraWooshMinSpeedKmh               ( float value );

        float                   GetCameraWooshVolumedB                  () const;
        void                    SetCameraWooshVolumedB                  ( float value );

        Array < class CPlugMusic* >& GetMusics                               () const;
        void                    SetMusics                               ( Array < class CPlugMusic* >& value );

        List < float >&         GetReverbMaterialGains                  () const;
        void                    SetReverbMaterialGains                  ( List < float >& value );

        float                   GetReverbMaxBlockDist                   () const;
        void                    SetReverbMaxBlockDist                   ( float value );

        float                   GetReverbMinBlockDist                   () const;
        void                    SetReverbMinBlockDist                   ( float value );

        Array < class CPlugSound* >& GetSounds                               () const;
        void                    SetSounds                               ( Array < class CPlugSound* >& value );

