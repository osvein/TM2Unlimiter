        enum { CLASSID = 0x2409C000 };

        static CTrackManiaMatchSettingsControlGrid* CreateInstance ();

        class CControlButton*   GetButtonNextPage                       () const;
        void                    SetButtonNextPage                       ( class CControlButton* value );

        class CControlButton*   GetButtonPreviousPage                   () const;
        void                    SetButtonPreviousPage                   ( class CControlButton* value );

        class CGameControlCardCtnChallengeInfo* GetChallengeCardTemplate                () const;
        void                    SetChallengeCardTemplate                ( class CGameControlCardCtnChallengeInfo* value );

        uint                    GetCurrentPage                          () const;
        void                    SetCurrentPage                          ( uint value );

        uint                    GetMaxChallengeInfosPerColumn           () const;
        void                    SetMaxChallengeInfosPerColumn           ( uint value );

        uint                    GetMaxChallengeInfosPerRow              () const;
        void                    SetMaxChallengeInfosPerRow              ( uint value );

        uint                    GetNbPage                               () const;
        void                    SetNbPage                               ( uint value );

        class CTrackManiaMatchSettings* GetPlayList                             () const;
        void                    SetPlayList                             ( class CTrackManiaMatchSettings* value );

        class CControlLabel*    GetPlayListCommentLabel                 () const;
        void                    SetPlayListCommentLabel                 ( class CControlLabel* value );

        class CControlLabel*    GetPlayListNameLabel                    () const;
        void                    SetPlayListNameLabel                    ( class CControlLabel* value );

        void                    OnNextPage                              ();
        void                    OnPreviousPage                          ();
