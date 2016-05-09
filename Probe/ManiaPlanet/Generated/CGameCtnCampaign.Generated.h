        enum { CLASSID = 0x03090000 };

        static CGameCtnCampaign* CreateInstance ();

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

        enum eRequiredPlayersCount
        {
            REQUIREDPLAYERSCOUNT_SOLO_ONLY,
            REQUIREDPLAYERSCOUNT_MULTI_ONLY,
            REQUIREDPLAYERSCOUNT_DUO_ONLY,
            REQUIREDPLAYERSCOUNT_TRIO_ONLY,
            REQUIREDPLAYERSCOUNT_QUATUOR_ONLY,
            REQUIREDPLAYERSCOUNT_ALL
        };
        static std::wstring     RequiredPlayersCountToString            ( eRequiredPlayersCount value );
        static eRequiredPlayersCount ParseRequiredPlayersCount               ( const std::wstring& wstrName );

        enum eType
        {
            TYPE_NONE,
            TYPE_RACE,
            TYPE_PUZZLE,
            TYPE_SURVIVAL,
            TYPE_PLATFORM,
            TYPE_STUNTS,
            TYPE_TRAINING
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        enum eUnlockType
        {
            UNLOCKTYPE_BY_ROW_NATIONS,
            UNLOCKTYPE_BY_COLUMN_UNITED,
            UNLOCKTYPE_CUSTOM
        };
        static std::wstring     UnlockTypeToString                      ( eUnlockType value );
        static eUnlockType      ParseUnlockType                         ( const std::wstring& wstrName );

        List < nodptr<class CGameCtnChallengeGroup> >& GetChallengeGroups                      () const;
        void                    SetChallengeGroups                      ( List < nodptr<class CGameCtnChallengeGroup> >& value );

        Id                      GetCollectionId                         () const;
        void                    SetCollectionId                         ( Id value );

        Id                      GetIconId                               () const;
        void                    SetIconId                               ( Id value );

        uint                    GetIndex                                () const;
        void                    SetIndex                                ( uint value );

        bool                    GetIsInternal                           () const;
        void                    SetIsInternal                           ( bool value );

        eMedal                  GetMedal                                () const;
        void                    SetMedal                                ( eMedal value );

        StringW                 GetModeScriptName                       () const;
        void                    SetModeScriptName                       ( StringW value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        uint                    GetNbAuthorMedals                       () const;
        void                    SetNbAuthorMedals                       ( uint value );

        uint                    GetNbBronzeMedals                       () const;
        void                    SetNbBronzeMedals                       ( uint value );

        uint                    GetNbGoldMedals                         () const;
        void                    SetNbGoldMedals                         ( uint value );

        uint                    GetNbMedals                             () const;
        void                    SetNbMedals                             ( uint value );

        uint                    GetNbSilverMedals                       () const;
        void                    SetNbSilverMedals                       ( uint value );

        eRequiredPlayersCount   GetRequiredPlayersCount                 () const;
        void                    SetRequiredPlayersCount                 ( eRequiredPlayersCount value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

        eUnlockType             GetUnlockType                           () const;
        void                    SetUnlockType                           ( eUnlockType value );

        StringW                 GetUnlockedByCampaign                   () const;
        void                    SetUnlockedByCampaign                   ( StringW value );

        void                    AddChallengeGroup                       ();
