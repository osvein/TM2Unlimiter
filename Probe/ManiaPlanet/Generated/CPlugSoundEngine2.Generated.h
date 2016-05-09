        enum { CLASSID = 0x09029000 };

        static CPlugSoundEngine2* CreateInstance ();

        bool                    GetClampRpm                             () const;
        void                    SetClampRpm                             ( bool value );

        float                   GetEdMaxRpm                             () const;
        void                    SetEdMaxRpm                             ( float value );

        float                   GetGamma                                () const;
        void                    SetGamma                                ( float value );

        float                   GetLoopMaxRpmAll                        () const;
        void                    SetLoopMaxRpmAll                        ( float value );

        float                   GetLoopMinRpmAll                        () const;
        void                    SetLoopMinRpmAll                        ( float value );

        class CSystemFidsFolder* GetLoopsFolder                          () const;
        void                    SetLoopsFolder                          ( class CSystemFidsFolder* value );

        bool                    GetUseVolumeCorrection                  () const;
        void                    SetUseVolumeCorrection                  ( bool value );

        class CFuncKeysReal*    GetVolPersp_Accel_Body                  () const;
        void                    SetVolPersp_Accel_Body                  ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolPersp_Accel_Engine                () const;
        void                    SetVolPersp_Accel_Engine                ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolPersp_Accel_Exhaust               () const;
        void                    SetVolPersp_Accel_Exhaust               ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolPersp_Rpm_Body                    () const;
        void                    SetVolPersp_Rpm_Body                    ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolPersp_Rpm_Engine                  () const;
        void                    SetVolPersp_Rpm_Engine                  ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolPersp_Rpm_Exhaust                 () const;
        void                    SetVolPersp_Rpm_Exhaust                 ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolume_Accel                         () const;
        void                    SetVolume_Accel                         ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolume_Distance                      () const;
        void                    SetVolume_Distance                      ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolume_Rpm                           () const;
        void                    SetVolume_Rpm                           ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolume_Speed                         () const;
        void                    SetVolume_Speed                         ( class CFuncKeysReal* value );

        void                    LoadAndParseFileSnd                     ();
