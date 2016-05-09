        enum { CLASSID = 0x0300C000 };

        static CGameSystemOverlay* CreateInstance ();

        class CGameManialinkPage* GetCenterWidget                         () const;
        void                    SetCenterWidget                         ( class CGameManialinkPage* value );

        StringA                 GetCenterWidget_URL                     () const;
        void                    SetCenterWidget_URL                     ( StringA value );

        uint                    GetHideDelay                            () const;
        void                    SetHideDelay                            ( uint value );

        uint                    GetInactivityDelay                      () const;
        void                    SetInactivityDelay                      ( uint value );

        class CGameManialinkPage* GetLeftWidget                           () const;
        void                    SetLeftWidget                           ( class CGameManialinkPage* value );

        StringA                 GetLeftWidget_URL                       () const;
        void                    SetLeftWidget_URL                       ( StringA value );

        bool                    GetManiaBarForceOpen                    () const;
        void                    SetManiaBarForceOpen                    ( bool value );

        bool                    GetManiaBarIsActive                     () const;
        void                    SetManiaBarIsActive                     ( bool value );

        class CGameManialinkBrowser* GetManialinkBrowser                     () const;
        void                    SetManialinkBrowser                     ( class CGameManialinkBrowser* value );

        StringW                 GetNadeoLiveSubPageUrl                  () const;
        void                    SetNadeoLiveSubPageUrl                  ( StringW value );

        class CScene2d*         GetOverlay                              () const;
        void                    SetOverlay                              ( class CScene2d* value );

        StringA                 GetRightWidget_URL                      () const;
        void                    SetRightWidget_URL                      ( StringA value );

        class CGameManialinkPage* GetRigthWidget                          () const;
        void                    SetRigthWidget                          ( class CGameManialinkPage* value );

        class CGameScriptDebugger* GetScriptDebugger                       () const;
        void                    SetScriptDebugger                       ( class CGameScriptDebugger* value );

        uint                    GetShowDelay                            () const;
        void                    SetShowDelay                            ( uint value );

        bool                    GetToolBarIsActive                      () const;
        void                    SetToolBarIsActive                      ( bool value );

        StringW                 GetToolTip                              () const;
        void                    SetToolTip                              ( StringW value );

        void                    GoFullScreen                            ();
        void                    GoWindowed                              ();
        void                    IconManiaPlanetOnAction                 ();
        void                    MoveCenterWidgetLeft                    ();
        void                    MoveCenterWidgetRight                   ();
        void                    MoveLeftWidgetRight                     ();
        void                    MoveRigthWidgetLeft                     ();
        void                    RemoveCenterWidget                      ();
        void                    RemoveLeftWidget                        ();
        void                    RemoveRigthWidget                       ();
        void                    ThrobberOnAction                        ();
        void                    ToggleWidgetEdition                     ();
        void                    UnloadAllWidgets                        ();
