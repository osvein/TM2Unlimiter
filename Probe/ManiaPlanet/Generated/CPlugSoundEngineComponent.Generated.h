        enum { CLASSID = 0x0908F000 };

        static CPlugSoundEngineComponent* CreateInstance ();

        float                   GetFadeInEndRpm                         () const;
        void                    SetFadeInEndRpm                         ( float value );

        float                   GetFadeInStartRpm                       () const;
        void                    SetFadeInStartRpm                       ( float value );

        float                   GetFadeOutEndRpm                        () const;
        void                    SetFadeOutEndRpm                        ( float value );

        float                   GetFadeOutStartRpm                      () const;
        void                    SetFadeOutStartRpm                      ( float value );

        float                   GetMaxPitch                             () const;
        void                    SetMaxPitch                             ( float value );

        float                   GetMaxVolume                            () const;
        void                    SetMaxVolume                            ( float value );

        float                   GetMinPitch                             () const;
        void                    SetMinPitch                             ( float value );

        float                   GetMinVolume                            () const;
        void                    SetMinVolume                            ( float value );

        float                   GetPitchShiftEndRpm                     () const;
        void                    SetPitchShiftEndRpm                     ( float value );

        float                   GetPitchShiftStartRpm                   () const;
        void                    SetPitchShiftStartRpm                   ( float value );

        class CPlugFileSnd*     GetPlugFile                             () const;
        void                    SetPlugFile                             ( class CPlugFileSnd* value );

