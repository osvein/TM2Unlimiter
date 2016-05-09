        enum { CLASSID = 0x03136000 };

        static CGamePlaygroundControlSmPlayers* CreateInstance ();

        class CControlFrame*    GetCardModelPlayer                      () const;
        void                    SetCardModelPlayer                      ( class CControlFrame* value );

        uint                    GetListColumnCount                      () const;
        void                    SetListColumnCount                      ( uint value );

        uint                    GetListLineCount                        () const;
        void                    SetListLineCount                        ( uint value );

        void                    EdClean                                 ();
