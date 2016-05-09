        enum { CLASSID = 0x2C00B000 };

        static CQmPlaygroundRulesManager* CreateInstance ();

        enum eMovementMode
        {
            MOVEMENTMODE_NONE,
            MOVEMENTMODE_RANDOM,
            MOVEMENTMODE_SELECTSQUARE
        };
        static std::wstring     MovementModeToString                    ( eMovementMode value );
        static eMovementMode    ParseMovementMode                       ( const std::wstring& wstrName );

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

        enum eSquareCardActivationMode
        {
            SQUARECARDACTIVATIONMODE_NEVER,
            SQUARECARDACTIVATIONMODE_LASTMOVE,
            SQUARECARDACTIVATIONMODE_ALWAYS
        };
        static std::wstring     SquareCardActivationModeToString        ( eSquareCardActivationMode value );
        static eSquareCardActivationMode ParseSquareCardActivationMode           ( const std::wstring& wstrName );

        class CQmBoard*         GetBoard                                () const;
        void                    SetBoard                                ( class CQmBoard* value );

        List < uint >&          GetBonusCount                           () const;
        void                    SetBonusCount                           ( List < uint >& value );

        List < StringA >&       GetBonusName                            () const;
        void                    SetBonusName                            ( List < StringA >& value );

        List < uint >&          GetBonusValue                           () const;
        void                    SetBonusValue                           ( List < uint >& value );

        List < nodptr<class CGameCardEventList> >& GetCardEventLists                       () const;
        void                    SetCardEventLists                       ( List < nodptr<class CGameCardEventList> >& value );

        List < nodptr<class CQmRuleEvent> >& GetCascadingRuleEventsList              () const;
        void                    SetCascadingRuleEventsList              ( List < nodptr<class CQmRuleEvent> >& value );

        bool                    GetDoNotUpdateInterface                 () const;
        void                    SetDoNotUpdateInterface                 ( bool value );

        bool                    GetDoNotUpdateTurnStep                  () const;
        void                    SetDoNotUpdateTurnStep                  ( bool value );

        bool                    GetEnableDefaultAction                  () const;
        void                    SetEnableDefaultAction                  ( bool value );

        bool                    GetEnableEffectAutoActivation           () const;
        void                    SetEnableEffectAutoActivation           ( bool value );

        uint                    GetInterfaceTime                        () const;
        void                    SetInterfaceTime                        ( uint value );

        List < nodptr<class CQmRuleEvent> >& GetLocalCascadingRuleEventsList         () const;
        void                    SetLocalCascadingRuleEventsList         ( List < nodptr<class CQmRuleEvent> >& value );

        uint                    GetMaxMoveLength                        () const;
        void                    SetMaxMoveLength                        ( uint value );

        uint                    GetMaxStepProcessed                     () const;
        void                    SetMaxStepProcessed                     ( uint value );

        uint                    GetMinMoveLength                        () const;
        void                    SetMinMoveLength                        ( uint value );

        eMovementMode           GetMovementMode                         () const;
        void                    SetMovementMode                         ( eMovementMode value );

        bool                    GetNoDefaultActionOnLastSquare          () const;
        void                    SetNoDefaultActionOnLastSquare          ( bool value );

        List < nodptr<class CQmRuleActionInfo> >& GetRuleActionInfos                      () const;
        void                    SetRuleActionInfos                      ( List < nodptr<class CQmRuleActionInfo> >& value );

        List < nodptr<class CQmRuleEffectInfo> >& GetRuleEffectInfos                      () const;
        void                    SetRuleEffectInfos                      ( List < nodptr<class CQmRuleEffectInfo> >& value );

        List < nodptr<class CQmRuleEvent> >& GetRuleEventsList                       () const;
        void                    SetRuleEventsList                       ( List < nodptr<class CQmRuleEvent> >& value );

        eRules                  GetRules                                () const;
        void                    SetRules                                ( eRules value );

        uint                    GetSightMaxDistance                     () const;
        void                    SetSightMaxDistance                     ( uint value );

        float                   GetSightViewMidAngle                    () const;
        void                    SetSightViewMidAngle                    ( float value );

        eSquareCardActivationMode GetSquareCardActivationMode             () const;
        void                    SetSquareCardActivationMode             ( eSquareCardActivationMode value );

        List < uint >&          GetStepsId                              () const;
        void                    SetStepsId                              ( List < uint >& value );

        uint                    GetTime                                 () const;
        void                    SetTime                                 ( uint value );

        bool                    GetUpdateVisibleActors                  () const;
        void                    SetUpdateVisibleActors                  ( bool value );

        bool                    GetUseActorDefaultActionSetting         () const;
        void                    SetUseActorDefaultActionSetting         ( bool value );

        bool                    GetUseFogOfWar                          () const;
        void                    SetUseFogOfWar                          ( bool value );

        bool                    GetUseSight                             () const;
        void                    SetUseSight                             ( bool value );

        void                    BonusPlaceAllRandomly                   ();
        void                    BonusRegenerate                         ();
        void                    TestScript                              ();
