        enum { CLASSID = 0x0A001000 };

        static CScene*          CreateInstance ();

        List < nodptr<class CSceneCamera> >& GetCameras                              () const;
        void                    SetCameras                              ( List < nodptr<class CSceneCamera> >& value );

        class CSceneMgrAnim*    GetMgrAnim                              () const;
        void                    SetMgrAnim                              ( class CSceneMgrAnim* value );

        class CSceneMgrBody*    GetMgrBody                              () const;
        void                    SetMgrBody                              ( class CSceneMgrBody* value );

        class CSceneMgrBulletVis* GetMgrBulletVis                         () const;
        void                    SetMgrBulletVis                         ( class CSceneMgrBulletVis* value );

        class CSceneDecalsManager* GetMgrDecals                            () const;
        void                    SetMgrDecals                            ( class CSceneDecalsManager* value );

        class CSceneMgrFlock*   GetMgrFlock                             () const;
        void                    SetMgrFlock                             ( class CSceneMgrFlock* value );

        class CSceneMgrMapColoring* GetMgrMapColoring                       () const;
        void                    SetMgrMapColoring                       ( class CSceneMgrMapColoring* value );

        class CSceneMgrParticle* GetMgrParticle                          () const;
        void                    SetMgrParticle                          ( class CSceneMgrParticle* value );

        class CSceneMgrSolidVis* GetMgrSolidVis                          () const;
        void                    SetMgrSolidVis                          ( class CSceneMgrSolidVis* value );

        class CSceneSoundManager* GetMgrSound                             () const;
        void                    SetMgrSound                             ( class CSceneSoundManager* value );

        class CSceneMgrTrafficVis* GetMgrTrafficVis                        () const;
        void                    SetMgrTrafficVis                        ( class CSceneMgrTrafficVis* value );

        class CSceneMgrVehicleVis* GetMgrVehicleVis                        () const;
        void                    SetMgrVehicleVis                        ( class CSceneMgrVehicleVis* value );

        class CSceneMgrVisChar* GetMgrVisChar                           () const;
        void                    SetMgrVisChar                           ( class CSceneMgrVisChar* value );

        class CSceneMgrWeather* GetMgrWeather                           () const;
        void                    SetMgrWeather                           ( class CSceneMgrWeather* value );

        List < nodptr<class CSceneMobil> >& GetMobils                               () const;
        void                    SetMobils                               ( List < nodptr<class CSceneMobil> >& value );

        List < nodptr<class CMotionManager> >& GetMotionManagerModels                  () const;
        void                    SetMotionManagerModels                  ( List < nodptr<class CMotionManager> >& value );

        List < nodptr<class CMotionManager> >& GetMotionManagers                       () const;
        void                    SetMotionManagers                       ( List < nodptr<class CMotionManager> >& value );

        List < nodptr<class CSceneMover> >& GetMovers                               () const;
        void                    SetMovers                               ( List < nodptr<class CSceneMover> >& value );

        class CSceneConfig*     GetSceneConfig                          () const;
        void                    SetSceneConfig                          ( class CSceneConfig* value );

        class CScenePhy*        GetScenePhy                             () const;
        void                    SetScenePhy                             ( class CScenePhy* value );

        void                    LogSceneStats                           ();
