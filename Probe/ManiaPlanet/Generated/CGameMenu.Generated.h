        enum { CLASSID = 0x03009000 };

        static CGameMenu*       CreateInstance ();

        enum eMenuOrder
        {
            MENUORDER_FUTURE_USE_0,
            MENUORDER_FUTURE_USE_1,
            MENUORDER_MENU,
            MENUORDER_FUTURE_USE_2,
            MENUORDER_FUTURE_USE_3,
            MENUORDER_GAMEDIALOG,
            MENUORDER_FUTURE_USE_4,
            MENUORDER_FUTURE_USE_5,
            MENUORDER_SYSTEMDIALOG,
            MENUORDER_FUTURE_USE_6,
            MENUORDER_FUTURE_USE_7,
            MENUORDER_BASICDIALOG
        };
        static std::wstring     MenuOrderToString                       ( eMenuOrder value );
        static eMenuOrder       ParseMenuOrder                          ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBackgroundBitmapUnderlay             () const;
        void                    SetBackgroundBitmapUnderlay             ( class CPlugBitmap* value );

        class CSceneCamera*     GetBackgroundCamera                     () const;
        void                    SetBackgroundCamera                     ( class CSceneCamera* value );

        float                   GetBackgroundCameraFarZ                 () const;
        void                    SetBackgroundCameraFarZ                 ( float value );

        float                   GetBackgroundCameraFov                  () const;
        void                    SetBackgroundCameraFov                  ( float value );

        float                   GetBackgroundCameraNearZ                () const;
        void                    SetBackgroundCameraNearZ                ( float value );

        class CScene3d*         GetBackgroundScene                      () const;
        void                    SetBackgroundScene                      ( class CScene3d* value );

        Array < Matrix43 >&     GetCamerasLocation                      () const;
        void                    SetCamerasLocation                      ( Array < Matrix43 >& value );

        class CControlBase*     GetCurrentFocusedControl                () const;
        void                    SetCurrentFocusedControl                ( class CControlBase* value );

        class CControlStyle*    GetCurrentFocusedControlStyle           () const;
        void                    SetCurrentFocusedControlStyle           ( class CControlStyle* value );

        class CGameMenuFrame*   GetCurrentFrame                         () const;
        void                    SetCurrentFrame                         ( class CGameMenuFrame* value );

        bool                    GetEnableFrameStack                     () const;
        void                    SetEnableFrameStack                     ( bool value );

        float                   GetFarZ                                 () const;
        void                    SetFarZ                                 ( float value );

        float                   GetFovY                                 () const;
        void                    SetFovY                                 ( float value );

        Array < class CGameMenuFrame* >& GetFrames                               () const;
        void                    SetFrames                               ( Array < class CGameMenuFrame* >& value );

        Array < Matrix43 >&     GetFramesLocation                       () const;
        void                    SetFramesLocation                       ( Array < Matrix43 >& value );

        Vec3D                   GetFrustumCenter                        () const;
        void                    SetFrustumCenter                        ( Vec3D value );

        Vec3D                   GetFurstrumHfDiag                       () const;
        void                    SetFurstrumHfDiag                       ( Vec3D value );

        Vec2D                   GetGridStep                             () const;
        void                    SetGridStep                             ( Vec2D value );

        Array < bool >&         GetIs3dFrame                            () const;
        void                    SetIs3dFrame                            ( Array < bool >& value );

        bool                    GetIsMenu3d                             () const;
        void                    SetIsMenu3d                             ( bool value );

        class CGameMenuFrame*   GetMainFrame                            () const;
        void                    SetMainFrame                            ( class CGameMenuFrame* value );

        class CSceneCamera*     GetMenuCamera                           () const;
        void                    SetMenuCamera                           ( class CSceneCamera* value );

        eMenuOrder              GetMenuOrder                            () const;
        void                    SetMenuOrder                            ( eMenuOrder value );

        class CPlugMusic*       GetMusic                                () const;
        void                    SetMusic                                ( class CPlugMusic* value );

        float                   GetNearZ                                () const;
        void                    SetNearZ                                ( float value );

        class CScene2d*         GetOverlay                              () const;
        void                    SetOverlay                              ( class CScene2d* value );

        class CScene3d*         GetScene3d                              () const;
        void                    SetScene3d                              ( class CScene3d* value );

        class CPlugSound*       GetSoundDisplayed                       () const;
        void                    SetSoundDisplayed                       ( class CPlugSound* value );

        class CPlugSound*       GetSoundHidden                          () const;
        void                    SetSoundHidden                          ( class CPlugSound* value );

        class CPlugSound*       GetSoundPageChanged                     () const;
        void                    SetSoundPageChanged                     ( class CPlugSound* value );

        class CControlStyleSheet* GetStyleSheet                           () const;
        void                    SetStyleSheet                           ( class CControlStyleSheet* value );

        void                    Back                                    ();
        void                    RedrawAll                               ();
