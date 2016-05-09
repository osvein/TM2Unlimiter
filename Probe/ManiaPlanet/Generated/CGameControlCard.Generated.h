        enum { CLASSID = 0x0309A000 };

        static CGameControlCard* CreateInstance ();

        bool                    GetCardFocused                          () const;
        void                    SetCardFocused                          ( bool value );

        bool                    GetCardSelected                         () const;
        void                    SetCardSelected                         ( bool value );

        class CMwNod*           GetDisplayedNod                         () const;
        void                    SetDisplayedNod                         ( class CMwNod* value );

        bool                    GetSelectionEnabled                     () const;
        void                    SetSelectionEnabled                     ( bool value );

        bool                    GetUseDelays                            () const;
        void                    SetUseDelays                            ( bool value );

        bool                    GetUseOwnData                           () const;
        void                    SetUseOwnData                           ( bool value );

        void                    ConnectChilds                           ();
        void                    DisconnectChilds                        ();
        void                    ForceReconfig                           ();
