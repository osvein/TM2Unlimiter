        enum { CLASSID = 0x030BC000 };

        static CGameControlCardCtnChallengeInfo* CreateInstance ();

        class CPlugBitmap*      GetBmpBanner                            () const;
        void                    SetBmpBanner                            ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBmpBannerGrey                        () const;
        void                    SetBmpBannerGrey                        ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBmpLeagueLogo                        () const;
        void                    SetBmpLeagueLogo                        ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBmpMod                               () const;
        void                    SetBmpMod                               ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBmpMood                              () const;
        void                    SetBmpMood                              ( class CPlugBitmap* value );

        List < nodptr<class CGameLeague> >& GetGroups                               () const;
        void                    SetGroups                               ( List < nodptr<class CGameLeague> >& value );

        uint                    GetLeagueNameMaxCharsCount              () const;
        void                    SetLeagueNameMaxCharsCount              ( uint value );

        uint                    GetMedals                               () const;
        void                    SetMedals                               ( uint value );

        uint                    GetNextMedalTime                        () const;
        void                    SetNextMedalTime                        ( uint value );

        uint                    GetOfficialMedal                        () const;
        void                    SetOfficialMedal                        ( uint value );

        uint                    GetPlayerLeagueRanking                  () const;
        void                    SetPlayerLeagueRanking                  ( uint value );

        uint                    GetPlayerSkillScore                     () const;
        void                    SetPlayerSkillScore                     ( uint value );

        StringW                 GetStrAuthorScore                       () const;
        void                    SetStrAuthorScore                       ( StringW value );

        StringW                 GetStrBronzeScore                       () const;
        void                    SetStrBronzeScore                       ( StringW value );

        StringW                 GetStrChallengeAuthor                   () const;
        void                    SetStrChallengeAuthor                   ( StringW value );

        StringW                 GetStrChallengeComments                 () const;
        void                    SetStrChallengeComments                 ( StringW value );

        StringW                 GetStrChallengeName                     () const;
        void                    SetStrChallengeName                     ( StringW value );

        StringW                 GetStrCollectionName                    () const;
        void                    SetStrCollectionName                    ( StringW value );

        StringW                 GetStrCopperPrice                       () const;
        void                    SetStrCopperPrice                       ( StringW value );

        StringA                 GetStrCopperString                      () const;
        void                    SetStrCopperString                      ( StringA value );

        StringW                 GetStrFullLeagueName                    () const;
        void                    SetStrFullLeagueName                    ( StringW value );

        StringW                 GetStrGoldScore                         () const;
        void                    SetStrGoldScore                         ( StringW value );

        StringW                 GetStrLeagueName                        () const;
        void                    SetStrLeagueName                        ( StringW value );

        StringW                 GetStrPlayerLeagueRanking               () const;
        void                    SetStrPlayerLeagueRanking               ( StringW value );

        StringW                 GetStrPlayerName                        () const;
        void                    SetStrPlayerName                        ( StringW value );

        StringW                 GetStrPlayerOfficialRecord              () const;
        void                    SetStrPlayerOfficialRecord              ( StringW value );

        StringW                 GetStrPlayerScore                       () const;
        void                    SetStrPlayerScore                       ( StringW value );

        StringW                 GetStrSilverScore                       () const;
        void                    SetStrSilverScore                       ( StringW value );

        uint                    GetTrainingMedal                        () const;
        void                    SetTrainingMedal                        ( uint value );

        void                    OnRemoveChallenge                       ();
