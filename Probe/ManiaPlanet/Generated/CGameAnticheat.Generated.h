        enum { CLASSID = 0x03141000 };

        static CGameAnticheat*  CreateInstance ();

        List < nodptr<class CGameAnticheatMonitor> >& GetMonitors                             () const;
        void                    SetMonitors                             ( List < nodptr<class CGameAnticheatMonitor> >& value );

        uint                    GetNow                                  () const;
        void                    SetNow                                  ( uint value );

        List < nodptr<class CGameAnticheatFunctions> >& GetPackages                             () const;
        void                    SetPackages                             ( List < nodptr<class CGameAnticheatFunctions> >& value );

        List < nodptr<class CGameAnticheatEvent> >& GetPendingEvents                        () const;
        void                    SetPendingEvents                        ( List < nodptr<class CGameAnticheatEvent> >& value );

        class CGameAnticheatMonitor* CreateMonitor                           ( uint type );
        void                    DestroyMonitor                          ( class CGameAnticheatMonitor* pMonitor );
        bool                    IsKeyDown                               ( int iKeyCode );
        void                    PopEvent                                ( class CGameAnticheatEvent* pEvent );
        void                    SendResult                              ( StringA strMessage );
