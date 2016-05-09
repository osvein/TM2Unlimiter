        enum { CLASSID = 0x0308F000 };

        static CGameCtnChallengeGroup* CreateInstance ();

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

        eMedal                  GetMedal                                () const;
        void                    SetMedal                                ( eMedal value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        bool                    GetUnlocked                             () const;
        void                    SetUnlocked                             ( bool value );

        void                    CleanChallenges                         ();
        void                    EmptyChallenges                         ();
