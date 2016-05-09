        enum { CLASSID = 0x0308A000 };

        static CGamePlayerInfo* CreateInstance ();

        bool                    GetForcedSpectator                      () const;
        void                    SetForcedSpectator                      ( bool value );

        StringA                 GetGameStateName                        () const;
        void                    SetGameStateName                        ( StringA value );

        float                   GetLightTrailLinearHue                  () const;
        void                    SetLightTrailLinearHue                  ( float value );

        color                   GetLightTrailSrgb                       () const;
        void                    SetLightTrailSrgb                       ( color value );

        uint                    GetPlaygroundRoundNum                   () const;
        void                    SetPlaygroundRoundNum                   ( uint value );

        uint                    GetPlaygroundTeamRequested              () const;
        void                    SetPlaygroundTeamRequested              ( uint value );

        StringA                 GetStrLadderDraws                       () const;
        void                    SetStrLadderDraws                       ( StringA value );

        StringA                 GetStrLadderLastPoints                  () const;
        void                    SetStrLadderLastPoints                  ( StringA value );

        StringA                 GetStrLadderLosses                      () const;
        void                    SetStrLadderLosses                      ( StringA value );

        StringA                 GetStrLadderNbrTeams                    () const;
        void                    SetStrLadderNbrTeams                    ( StringA value );

        StringW                 GetStrLadderRanking                     () const;
        void                    SetStrLadderRanking                     ( StringW value );

        StringW                 GetStrLadderRankingSimple               () const;
        void                    SetStrLadderRankingSimple               ( StringW value );

        StringA                 GetStrLadderScore                       () const;
        void                    SetStrLadderScore                       ( StringA value );

        StringA                 GetStrLadderScoreRounded                () const;
        void                    SetStrLadderScoreRounded                ( StringA value );

        StringA                 GetStrLadderTeamName                    () const;
        void                    SetStrLadderTeamName                    ( StringA value );

        StringA                 GetStrLadderTeamRanking                 () const;
        void                    SetStrLadderTeamRanking                 ( StringA value );

        StringA                 GetStrLadderTeamRankingSimple           () const;
        void                    SetStrLadderTeamRankingSimple           ( StringA value );

        StringA                 GetStrLadderWins                        () const;
        void                    SetStrLadderWins                        ( StringA value );

        bool                    GetWishSpectator                        () const;
        void                    SetWishSpectator                        ( bool value );

        class CPlugBitmap*      GetZoneBitmap                           () const;
        void                    SetZoneBitmap                           ( class CPlugBitmap* value );

        class CGameLeague*      GetZoneLeague                           () const;
        void                    SetZoneLeague                           ( class CGameLeague* value );

        StringW                 GetZonePath                             () const;
        void                    SetZonePath                             ( StringW value );

