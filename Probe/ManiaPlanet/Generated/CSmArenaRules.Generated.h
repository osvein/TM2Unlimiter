        enum { CLASSID = 0x2D00C000 };

        static CSmArenaRules*   CreateInstance ();

        bool                    GetFeatureArmorBar                      () const;
        void                    SetFeatureArmorBar                      ( bool value );

        bool                    GetFeatureDisableHorns                  () const;
        void                    SetFeatureDisableHorns                  ( bool value );

        bool                    GetFeatureFallDamage                    () const;
        void                    SetFeatureFallDamage                    ( bool value );

        bool                    GetFeatureForcedTeams                   () const;
        void                    SetFeatureForcedTeams                   ( bool value );

        bool                    GetFeatureGuns                          () const;
        void                    SetFeatureGuns                          ( bool value );

        bool                    GetFeatureItems                         () const;
        void                    SetFeatureItems                         ( bool value );

        bool                    GetFeaturePvPCollisions                 () const;
        void                    SetFeaturePvPCollisions                 ( bool value );

        bool                    GetFeatureRocketJump                    () const;
        void                    SetFeatureRocketJump                    ( bool value );

        bool                    GetFeatureRun                           () const;
        void                    SetFeatureRun                           ( bool value );

        bool                    GetFeatureStamina                       () const;
        void                    SetFeatureStamina                       ( bool value );

        bool                    GetFeatureTeams                         () const;
        void                    SetFeatureTeams                         ( bool value );

        bool                    GetFeatureWallJump                      () const;
        void                    SetFeatureWallJump                      ( bool value );

        class CSmArenaRulesMode* GetRulesMode                            () const;
        void                    SetRulesMode                            ( class CSmArenaRulesMode* value );

        uint                    GetRulesStateEndTime                    () const;
        void                    SetRulesStateEndTime                    ( uint value );

        bool                    GetRulesStateFreeze                     () const;
        void                    SetRulesStateFreeze                     ( bool value );

        uint                    GetRulesStateStartTime                  () const;
        void                    SetRulesStateStartTime                  ( uint value );

        uint                    GetRulesStateTeam1Score                 () const;
        void                    SetRulesStateTeam1Score                 ( uint value );

        uint                    GetRulesStateTeam2Score                 () const;
        void                    SetRulesStateTeam2Score                 ( uint value );

        List < nodptr<class CSmArenaScore> >& GetScores                               () const;
        void                    SetScores                               ( List < nodptr<class CSmArenaScore> >& value );

