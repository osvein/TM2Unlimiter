        enum { CLASSID = 0x030ED000 };

        static CGameScriptHandlerPlaygroundInterface* CreateInstance ();

        int                     GetGameTime                             () const;
        void                    SetGameTime                             ( int value );

        class CGamePlayerInfo*  GetLocalPlayerInfo                      () const;
        void                    SetLocalPlayerInfo                      ( class CGamePlayerInfo* value );

        class CGameCtnChallenge* GetMap                                  () const;
        void                    SetMap                                  ( class CGameCtnChallenge* value );

        void                    JoinTeam1                               ();
        void                    JoinTeam2                               ();
        void                    ShowCurChallengeCard                    ();
