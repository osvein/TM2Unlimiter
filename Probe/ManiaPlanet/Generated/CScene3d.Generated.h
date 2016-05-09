        enum { CLASSID = 0x0A003000 };

        static CScene3d*        CreateInstance ();

        color                   GetCameraClearColor                     () const;
        void                    SetCameraClearColor                     ( color value );

        float                   GetCameraFarZ                           () const;
        void                    SetCameraFarZ                           ( float value );

        float                   GetEdCamFocusZ                          () const;
        void                    SetEdCamFocusZ                          ( float value );

        float                   GetEdCamLensSize                        () const;
        void                    SetEdCamLensSize                        ( float value );

        List < nodptr<class CSceneGate> >& GetGates                                () const;
        void                    SetGates                                ( List < nodptr<class CSceneGate> >& value );

        List < nodptr<class CSceneLight> >& GetLights                               () const;
        void                    SetLights                               ( List < nodptr<class CSceneLight> >& value );

        List < nodptr<class CSceneLocation> >& GetLocations                            () const;
        void                    SetLocations                            ( List < nodptr<class CSceneLocation> >& value );

        List < nodptr<class CScenePath> >& GetPaths                                () const;
        void                    SetPaths                                ( List < nodptr<class CScenePath> >& value );

        class CSceneFxMgr*      GetSceneFxMgr                           () const;
        void                    SetSceneFxMgr                           ( class CSceneFxMgr* value );

        List < nodptr<class CSceneSector> >& GetSectors                              () const;
        void                    SetSectors                              ( List < nodptr<class CSceneSector> >& value );

        List < nodptr<class CSceneSoundSource> >& GetSounds                               () const;
        void                    SetSounds                               ( List < nodptr<class CSceneSoundSource> >& value );

        class CSceneTrafficGraph* GetTrafficGraph                         () const;
        void                    SetTrafficGraph                         ( class CSceneTrafficGraph* value );

        List < nodptr<class CSceneTrafficPath> >& GetTrafficPaths                         () const;
        void                    SetTrafficPaths                         ( List < nodptr<class CSceneTrafficPath> >& value );

