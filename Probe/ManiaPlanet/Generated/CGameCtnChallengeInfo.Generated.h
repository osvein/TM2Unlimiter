        enum { CLASSID = 0x03044000 };

        static CGameCtnChallengeInfo* CreateInstance ();

        enum eKind
        {
            KIND_INTERNAL_ENDMARKER,
            KIND_OLD_CAMPAIGN,
            KIND_OLD_PUZZLE,
            KIND_OLD_RETRO,
            KIND_OLD_TIMEATTACK,
            KIND_OLD_ROUNDS,
            KIND_INPROGRESS,
            KIND_CAMPAIGN,
            KIND_MULTI,
            KIND_SOLO,
            KIND_SITE,
            KIND_SOLONADEO,
            KIND_MULTINADEO
        };
        static std::wstring     KindToString                            ( eKind value );
        static eKind            ParseKind                               ( const std::wstring& wstrName );

        enum eMedal
        {
            MEDAL_NONE,
            MEDAL_FINISHED,
            MEDAL_BRONZE,
            MEDAL_SILVER,
            MEDAL_GOLD,
            MEDAL_AUTHOR
        };
        static std::wstring     MedalToString                           ( eMedal value );
        static eMedal           ParseMedal                              ( const std::wstring& wstrName );

        enum eOfficialMedal
        {
            OFFICIALMEDAL_NONE,
            OFFICIALMEDAL_FINISHED,
            OFFICIALMEDAL_BRONZE,
            OFFICIALMEDAL_SILVER,
            OFFICIALMEDAL_GOLD,
            OFFICIALMEDAL_AUTHOR
        };
        static std::wstring     OfficialMedalToString                   ( eOfficialMedal value );
        static eOfficialMedal   ParseOfficialMedal                      ( const std::wstring& wstrName );

        StringA                 GetAuthorLogin                          () const;
        void                    SetAuthorLogin                          ( StringA value );

        StringW                 GetAuthorNickName                       () const;
        void                    SetAuthorNickName                       ( StringW value );

        StringW                 GetAuthorZonePath                       () const;
        void                    SetAuthorZonePath                       ( StringW value );

        uint                    GetBestTime                             () const;
        void                    SetBestTime                             ( uint value );

        StringA                 GetCollectionName                       () const;
        void                    SetCollectionName                       ( StringA value );

        StringW                 GetComments                             () const;
        void                    SetComments                             ( StringW value );

        uint                    GetCopperPrice                          () const;
        void                    SetCopperPrice                          ( uint value );

        StringA                 GetCopperString                         () const;
        void                    SetCopperString                         ( StringA value );

        bool                    GetCreatedWithEditorSimple              () const;
        void                    SetCreatedWithEditorSimple              ( bool value );

        class CGameChallengeScores* GetGeneralOfficialScores                () const;
        void                    SetGeneralOfficialScores                ( class CGameChallengeScores* value );

        uint                    GetGoldTime                             () const;
        void                    SetGoldTime                             ( uint value );

        eKind                   GetKind                                 () const;
        void                    SetKind                                 ( eKind value );

        bool                    GetLapRace                              () const;
        void                    SetLapRace                              ( bool value );

        Vec2D                   GetMapCoordOrigin                       () const;
        void                    SetMapCoordOrigin                       ( Vec2D value );

        Vec2D                   GetMapCoordTarget                       () const;
        void                    SetMapCoordTarget                       ( Vec2D value );

        StringW                 GetMapStyle                             () const;
        void                    SetMapStyle                             ( StringW value );

        StringW                 GetMapType                              () const;
        void                    SetMapType                              ( StringW value );

        eMedal                  GetMedal                                () const;
        void                    SetMedal                                ( eMedal value );

        StringW                 GetNameForUi                            () const;
        void                    SetNameForUi                            ( StringW value );

        uint                    GetOfficialBestRecord                   () const;
        void                    SetOfficialBestRecord                   ( uint value );

        eOfficialMedal          GetOfficialMedal                        () const;
        void                    SetOfficialMedal                        ( eOfficialMedal value );

        uint                    GetOfficialSkillMedal                   () const;
        void                    SetOfficialSkillMedal                   ( uint value );

        List < nodptr<class CGameHighScore> >& GetSoloScores                           () const;
        void                    SetSoloScores                           ( List < nodptr<class CGameHighScore> >& value );

        bool                    GetUnlocked                             () const;
        void                    SetUnlocked                             ( bool value );

