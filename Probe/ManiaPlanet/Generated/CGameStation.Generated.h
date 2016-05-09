        enum { CLASSID = 0x03014000 };

        static CGameStation*    CreateInstance ();

        uint                    GetCurMedals                            () const;
        void                    SetCurMedals                            ( uint value );

        uint                    GetEventsUnread                         () const;
        void                    SetEventsUnread                         ( uint value );

        uint                    GetTotalCurrentPlayers                  () const;
        void                    SetTotalCurrentPlayers                  ( uint value );

        uint                    GetTotalInstalls                        () const;
        void                    SetTotalInstalls                        ( uint value );

        uint                    GetTotalMedals                          () const;
        void                    SetTotalMedals                          ( uint value );

