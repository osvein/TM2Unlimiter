        enum { CLASSID = 0x030F0000 };

        static CGameManialinkScriptHandler* CreateInstance ();

        StringA                 GetCurrentLocalDateText                 () const;
        void                    SetCurrentLocalDateText                 ( StringA value );

        uint                    GetCurrentTime                          () const;
        void                    SetCurrentTime                          ( uint value );

        StringA                 GetCurrentTimeText                      () const;
        void                    SetCurrentTimeText                      ( StringA value );

        bool                    GetKeyDelete                            () const;
        void                    SetKeyDelete                            ( bool value );

        bool                    GetKeyDown                              () const;
        void                    SetKeyDown                              ( bool value );

        bool                    GetKeyLeft                              () const;
        void                    SetKeyLeft                              ( bool value );

        bool                    GetKeyReturn                            () const;
        void                    SetKeyReturn                            ( bool value );

        bool                    GetKeyRight                             () const;
        void                    SetKeyRight                             ( bool value );

        bool                    GetKeySpace                             () const;
        void                    SetKeySpace                             ( bool value );

        bool                    GetKeyUp                                () const;
        void                    SetKeyUp                                ( bool value );

        bool                    GetMouseLeftButton                      () const;
        void                    SetMouseLeftButton                      ( bool value );

        bool                    GetMouseMiddleButton                    () const;
        void                    SetMouseMiddleButton                    ( bool value );

        bool                    GetMouseRightButton                     () const;
        void                    SetMouseRightButton                     ( bool value );

        float                   GetMouseX                               () const;
        void                    SetMouseX                               ( float value );

        float                   GetMouseY                               () const;
        void                    SetMouseY                               ( float value );

        uint                    GetNow                                  () const;
        void                    SetNow                                  ( uint value );

        class CGameManialinkPage* GetPage                                 () const;
        void                    SetPage                                 ( class CGameManialinkPage* value );

        List < nodptr<class CGameManialinkScriptEvent> >& GetPendingEvents                        () const;
        void                    SetPendingEvents                        ( List < nodptr<class CGameManialinkScriptEvent> >& value );

        class CGamePlaygroundUIConfig* GetUI                                   () const;
        void                    SetUI                                   ( class CGamePlaygroundUIConfig* value );

        void                    OpenLink                                ( StringA strUrl, uint linkType );
