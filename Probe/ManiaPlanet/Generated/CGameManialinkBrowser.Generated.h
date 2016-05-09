        enum { CLASSID = 0x03066000 };

        static CGameManialinkBrowser* CreateInstance ();

        class CGameManialinkPage* GetCurrentPage                          () const;
        void                    SetCurrentPage                          ( class CGameManialinkPage* value );

        class CMwCmdFiber*      GetFiberCmd                             () const;
        void                    SetFiberCmd                             ( class CMwCmdFiber* value );

        class CControlFrame*    GetFrame                                () const;
        void                    SetFrame                                ( class CControlFrame* value );

        StringW                 GetManialinkBrowser_Link                () const;
        void                    SetManialinkBrowser_Link                ( StringW value );

        bool                    GetManialink_Active                     () const;
        void                    SetManialink_Active                     ( bool value );

        bool                    GetManialink_Enabled                    () const;
        void                    SetManialink_Enabled                    ( bool value );

        void                    ManialinkBrowser_OnBack                 ();
        void                    ManialinkBrowser_OnForward              ();
        void                    ManialinkBrowser_OnHome                 ();
        void                    ManialinkBrowser_OnQuit                 ();
