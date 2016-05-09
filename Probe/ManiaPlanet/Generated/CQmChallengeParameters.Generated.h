        enum { CLASSID = 0x2C016000 };

        static CQmChallengeParameters* CreateInstance ();

        enum eRules
        {
            RULES_RACING,
            RULES_DUNGEON,
            RULES_ROLEPLAYING,
            RULES_DIABLO,
            RULES_DIABLO2,
            RULES_EXPLORER,
            RULES_FANTASYOLD,
            RULES_SOCIETYTEST,
            RULES_SOCIETY,
            RULES_FANTASY
        };
        static std::wstring     RulesToString                           ( eRules value );
        static eRules           ParseRules                              ( const std::wstring& wstrName );

        Id                      GetPlayerActorId                        () const;
        void                    SetPlayerActorId                        ( Id value );

        eRules                  GetRules                                () const;
        void                    SetRules                                ( eRules value );

