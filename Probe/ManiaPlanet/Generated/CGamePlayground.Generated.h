        enum { CLASSID = 0x0300D000 };

        static CGamePlayground* CreateInstance ();

        class CGameAnalyzer*    GetAnalyzer                             () const;
        void                    SetAnalyzer                             ( class CGameAnalyzer* value );

        List < nodptr<class CGameTerminal> >& GetGameTerminals                        () const;
        void                    SetGameTerminals                        ( List < nodptr<class CGameTerminal> >& value );

        bool                    GetInDialogs                            () const;
        void                    SetInDialogs                            ( bool value );

        class CGamePlaygroundInterface* GetInterface                            () const;
        void                    SetInterface                            ( class CGamePlaygroundInterface* value );

        List < nodptr<class CGamePlayer> >& GetPlayers                              () const;
        void                    SetPlayers                              ( List < nodptr<class CGamePlayer> >& value );

        class CGameCtnReplayRecord* GetPrevReplayRecord                     () const;
        void                    SetPrevReplayRecord                     ( class CGameCtnReplayRecord* value );

        class CGameCtnReplayRecord* GetReplayRecord                         () const;
        void                    SetReplayRecord                         ( class CGameCtnReplayRecord* value );

        class CGamePlaygroundSpectating* GetSpectating                           () const;
        void                    SetSpectating                           ( class CGamePlaygroundSpectating* value );

