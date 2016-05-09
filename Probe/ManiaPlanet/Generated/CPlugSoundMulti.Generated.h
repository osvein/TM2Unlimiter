        enum { CLASSID = 0x09064000 };

        static CPlugSoundMulti* CreateInstance ();

        List < nodptr<class CPlugFileSnd> >& GetAdditionalSounds                     () const;
        void                    SetAdditionalSounds                     ( List < nodptr<class CPlugFileSnd> >& value );

        bool                    GetAlternateParity                      () const;
        void                    SetAlternateParity                      ( bool value );

        bool                    GetAvoidDuplicates                      () const;
        void                    SetAvoidDuplicates                      ( bool value );

        bool                    GetForceUseRandom                       () const;
        void                    SetForceUseRandom                       ( bool value );

        float                   GetPitchVarianceNeg                     () const;
        void                    SetPitchVarianceNeg                     ( float value );

        float                   GetPitchVariancePos                     () const;
        void                    SetPitchVariancePos                     ( float value );

        List < Vec3D >&         GetPreferedDistances                    () const;
        void                    SetPreferedDistances                    ( List < Vec3D >& value );

        bool                    GetUseDistances                         () const;
        void                    SetUseDistances                         ( bool value );

        float                   GetVolumeVariance                       () const;
        void                    SetVolumeVariance                       ( float value );

