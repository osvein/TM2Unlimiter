        enum { CLASSID = 0x0908E000 };

        static CPlugSoundEngine* CreateInstance ();

        class CFuncKeysReal*    GetAlpha_Accel                          () const;
        void                    SetAlpha_Accel                          ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetAlpha_Distance                       () const;
        void                    SetAlpha_Distance                       ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetAlpha_Rpm                            () const;
        void                    SetAlpha_Rpm                            ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetAlpha_Speed                          () const;
        void                    SetAlpha_Speed                          ( class CFuncKeysReal* value );

        Array < class CPlugSoundEngineComponent* >& GetComponents                           () const;
        void                    SetComponents                           ( Array < class CPlugSoundEngineComponent* >& value );

        float                   GetMaxRpm                               () const;
        void                    SetMaxRpm                               ( float value );

        class CFuncKeysReal*    GetVolume_Accel                         () const;
        void                    SetVolume_Accel                         ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolume_Distance                      () const;
        void                    SetVolume_Distance                      ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolume_Rpm                           () const;
        void                    SetVolume_Rpm                           ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolume_Speed                         () const;
        void                    SetVolume_Speed                         ( class CFuncKeysReal* value );

