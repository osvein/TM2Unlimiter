        enum { CLASSID = 0x030F3000 };

        static CGamePlaygroundControlScores* CreateInstance ();

        bool                    GetAvatar                               () const;
        void                    SetAvatar                               ( bool value );

        class CControlFrame*    GetCardModelPlayer                      () const;
        void                    SetCardModelPlayer                      ( class CControlFrame* value );

        float                   GetCenterMargin                         () const;
        void                    SetCenterMargin                         ( float value );

        bool                    GetCupModeResult                        () const;
        void                    SetCupModeResult                        ( bool value );

        bool                    GetHidePureSpectators                   () const;
        void                    SetHidePureSpectators                   ( bool value );

        float                   GetHorizontalMargin                     () const;
        void                    SetHorizontalMargin                     ( float value );

        bool                    GetIsCentered                           () const;
        void                    SetIsCentered                           ( bool value );

        bool                    GetIsLocalPlayer                        () const;
        void                    SetIsLocalPlayer                        ( bool value );

        bool                    GetIsSpectator                          () const;
        void                    SetIsSpectator                          ( bool value );

        bool                    GetLabelHelpEnabled                     () const;
        void                    SetLabelHelpEnabled                     ( bool value );

        bool                    GetLabelMessageEnabled                  () const;
        void                    SetLabelMessageEnabled                  ( bool value );

        bool                    GetLadderPointsGain                     () const;
        void                    SetLadderPointsGain                     ( bool value );

        bool                    GetLadderRank                           () const;
        void                    SetLadderRank                           ( bool value );

        bool                    GetLapScore                             () const;
        void                    SetLapScore                             ( bool value );

        uint                    GetListColumnCount                      () const;
        void                    SetListColumnCount                      ( uint value );

        uint                    GetListLineCount                        () const;
        void                    SetListLineCount                        ( uint value );

        bool                    GetNotPlaying                           () const;
        void                    SetNotPlaying                           ( bool value );

        uint                    GetPage                                 () const;
        void                    SetPage                                 ( uint value );

        uint                    GetPageCount                            () const;
        void                    SetPageCount                            ( uint value );

        float                   GetPlayerScale                          () const;
        void                    SetPlayerScale                          ( float value );

        bool                    GetRank                                 () const;
        void                    SetRank                                 ( bool value );

        bool                    GetScore                                () const;
        void                    SetScore                                ( bool value );

        bool                    GetScoreInc                             () const;
        void                    SetScoreInc                             ( bool value );

        float                   GetVerticalMargin                       () const;
        void                    SetVerticalMargin                       ( float value );

        void                    NextPage                                ();
        void                    PrevPage                                ();
