        enum { CLASSID = 0x0312E000 };

        static CGamePlayerProfileChunk_InterfaceSettings* CreateInstance ();

        uint                    GetClickedOnShare                       () const;
        void                    SetClickedOnShare                       ( uint value );

        uint                    GetDynamicLoadScreenIndex               () const;
        void                    SetDynamicLoadScreenIndex               ( uint value );

        uint                    GetEditorHelp                           () const;
        void                    SetEditorHelp                           ( uint value );

        uint                    GetMenuInternetView                     () const;
        void                    SetMenuInternetView                     ( uint value );

        StringW                 GetMenuLeagueFilter                     () const;
        void                    SetMenuLeagueFilter                     ( StringW value );

        uint                    GetWarnUserForAvatars                   () const;
        void                    SetWarnUserForAvatars                   ( uint value );

        StringA                 GetWidget1URL                           () const;
        void                    SetWidget1URL                           ( StringA value );

        StringA                 GetWidget2URL                           () const;
        void                    SetWidget2URL                           ( StringA value );

        StringA                 GetWidget3URL                           () const;
        void                    SetWidget3URL                           ( StringA value );

