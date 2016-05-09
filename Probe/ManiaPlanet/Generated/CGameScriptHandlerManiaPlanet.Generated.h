        enum { CLASSID = 0x0313F000 };

        static CGameScriptHandlerManiaPlanet* CreateInstance ();

        enum eActiveContext
        {
            ACTIVECONTEXT_MENUSTARTUP,
            ACTIVECONTEXT_MENUMANIAPLANET,
            ACTIVECONTEXT_MENUMANIATITLEMAIN,
            ACTIVECONTEXT_MENUPROFILE,
            ACTIVECONTEXT_MENUPLAYERPAGE,
            ACTIVECONTEXT_MENUSOLO,
            ACTIVECONTEXT_MENULOCAL,
            ACTIVECONTEXT_MENUMULTI,
            ACTIVECONTEXT_MENUGROUP,
            ACTIVECONTEXT_MENUEDITORS,
            ACTIVECONTEXT_EDITORPAINTER,
            ACTIVECONTEXT_EDITORTRACK,
            ACTIVECONTEXT_EDITORMEDIATRACKER,
            ACTIVECONTEXT_SOLO,
            ACTIVECONTEXT_SOLOLOADSCREEN,
            ACTIVECONTEXT_MULTI,
            ACTIVECONTEXT_MULTILOADSCREEN,
            ACTIVECONTEXT_MENUCUSTOM,
            ACTIVECONTEXT_UNKNOWN
        };
        static std::wstring     ActiveContextToString                   ( eActiveContext value );
        static eActiveContext   ParseActiveContext                      ( const std::wstring& wstrName );

        eActiveContext          GetActiveContext                        () const;
        void                    SetActiveContext                        ( eActiveContext value );

        bool                    GetActiveContext_ClassicDialogDisplayed () const;
        void                    SetActiveContext_ClassicDialogDisplayed ( bool value );

        StringA                 GetActiveContext_DialogFrame            () const;
        void                    SetActiveContext_DialogFrame            ( StringA value );

        uint                    GetActiveContext_GameWill               () const;
        void                    SetActiveContext_GameWill               ( uint value );

        StringA                 GetActiveContext_MenuFrame              () const;
        void                    SetActiveContext_MenuFrame              ( StringA value );

        StringA                 GetActiveContext_SystemDialogFrame      () const;
        void                    SetActiveContext_SystemDialogFrame      ( StringA value );

        float                   GetMusicVolume                          () const;
        void                    SetMusicVolume                          ( float value );

        class CGameManialinkPage* GetSubPage                              () const;
        void                    SetSubPage                              ( class CGameManialinkPage* value );

        StringW                 GetSubPageUrl                           () const;
        void                    SetSubPageUrl                           ( StringW value );

        bool                    GetSubPageUrlAddPlayerInfos             () const;
        void                    SetSubPageUrlAddPlayerInfos             ( bool value );

        void                    SubPageReload                           ();
