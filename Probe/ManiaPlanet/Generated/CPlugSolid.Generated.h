        enum { CLASSID = 0x09005000 };

        static CPlugSolid*      CreateInstance ();

        float                   GetExclusionEllipsoidRadius             () const;
        void                    SetExclusionEllipsoidRadius             ( float value );

        class CPlugSolid*       GetModel                                () const;
        void                    SetModel                                ( class CPlugSolid* value );

        List < Matrix43 >&      GetParticleLocations                    () const;
        void                    SetParticleLocations                    ( List < Matrix43 >& value );

        List < uint >&          GetParticleModelIndexs                  () const;
        void                    SetParticleModelIndexs                  ( List < uint >& value );

        List < nodptr<class CPlugParticleEmitterModel> >& GetParticleModels                       () const;
        void                    SetParticleModels                       ( List < nodptr<class CPlugParticleEmitterModel> >& value );

        uint                    GetPreLightGenTileCountU                () const;
        void                    SetPreLightGenTileCountU                ( uint value );

        List < Matrix43 >&      GetSoundLocations                       () const;
        void                    SetSoundLocations                       ( List < Matrix43 >& value );

        List < uint >&          GetSoundModelIndexs                     () const;
        void                    SetSoundModelIndexs                     ( List < uint >& value );

        List < nodptr<class CPlugSound> >& GetSoundModels                          () const;
        void                    SetSoundModels                          ( List < nodptr<class CPlugSound> >& value );

        class CPlugTree*        GetTree                                 () const;
        void                    SetTree                                 ( class CPlugTree* value );

        bool                    GetUseModel                             () const;
        void                    SetUseModel                             ( bool value );

        void                    ParticleAdd                             ();
        void                    SoundAdd                                ();
