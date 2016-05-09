        enum { CLASSID = 0x0A002000 };

        static CScene2d*        CreateInstance ();

        List < nodptr<class CSceneLight> >& GetLights                               () const;
        void                    SetLights                               ( List < nodptr<class CSceneLight> >& value );

        Vec2D                   GetOverlayMax                           () const;
        void                    SetOverlayMax                           ( Vec2D value );

        Vec2D                   GetOverlayMin                           () const;
        void                    SetOverlayMin                           ( Vec2D value );

        class CSceneSector*     GetSector                               () const;
        void                    SetSector                               ( class CSceneSector* value );

        List < nodptr<class CSceneSoundSource> >& GetSounds                               () const;
        void                    SetSounds                               ( List < nodptr<class CSceneSoundSource> >& value );

