        enum { CLASSID = 0x03005000 };

        static CGameApp*        CreateInstance ();

        List < nodptr<class CGameMenu> >& GetActiveMenus                          () const;
        void                    SetActiveMenus                          ( List < nodptr<class CGameMenu> >& value );

        class CGameAnticheat*   GetAnticheat                            () const;
        void                    SetAnticheat                            ( class CGameAnticheat* value );

        class CAudioPort*       GetAudioPort                            () const;
        void                    SetAudioPort                            ( class CAudioPort* value );

        class CGameDialogs*     GetBasicDialogs                         () const;
        void                    SetBasicDialogs                         ( class CGameDialogs* value );

        StringW                 GetBenchLoadingFolderName               () const;
        void                    SetBenchLoadingFolderName               ( StringW value );

        StringA                 GetCmdLineUrlMptp                       () const;
        void                    SetCmdLineUrlMptp                       ( StringA value );

        class CInputPort*       GetInputPort                            () const;
        void                    SetInputPort                            ( class CInputPort* value );

        class CGameLoadProgress* GetLoadProgress                         () const;
        void                    SetLoadProgress                         ( class CGameLoadProgress* value );

        StringA                 GetOSLocalDate                          () const;
        void                    SetOSLocalDate                          ( StringA value );

        StringA                 GetOSLocalTime                          () const;
        void                    SetOSLocalTime                          ( StringA value );

        StringA                 GetOSUTCDate                            () const;
        void                    SetOSUTCDate                            ( StringA value );

        StringA                 GetOSUTCTime                            () const;
        void                    SetOSUTCTime                            ( StringA value );

        class CGameManialinkScriptHandler* GetScriptHandlerAppMainLoop             () const;
        void                    SetScriptHandlerAppMainLoop             ( class CGameManialinkScriptHandler* value );

        class CGameSystemOverlay* GetSystemOverlay                        () const;
        void                    SetSystemOverlay                        ( class CGameSystemOverlay* value );

        class CHmsViewport*     GetViewport                             () const;
        void                    SetViewport                             ( class CHmsViewport* value );

        void                    HideMenu                                ( class CGameMenu* pMenu );
        void                    OnGraphicSettings                       ();
        void                    OpenMessenger                           ();
        void                    ShowMenu                                ( class CGameMenu* pMenu );
        void                    Start                                   ();
        void                    TerminateGame                           ();
        void                    UpdatePacksAvailabilityAndUse           ();
