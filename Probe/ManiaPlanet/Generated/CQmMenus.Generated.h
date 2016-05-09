        enum { CLASSID = 0x2C003000 };

        static CQmMenus*        CreateInstance ();

        uint                    GetAbilityExperienceRequired            () const;
        void                    SetAbilityExperienceRequired            ( uint value );

        uint                    GetParamNatural1                        () const;
        void                    SetParamNatural1                        ( uint value );

        uint                    GetParamNatural2                        () const;
        void                    SetParamNatural2                        ( uint value );

        uint                    GetParamNatural3                        () const;
        void                    SetParamNatural3                        ( uint value );

        uint                    GetParamNatural4                        () const;
        void                    SetParamNatural4                        ( uint value );

        uint                    GetPotentialExperienceRequired          () const;
        void                    SetPotentialExperienceRequired          ( uint value );

        void                    DialogAbilities                         ();
        void                    DialogAbilities_OnAbility_1             ();
        void                    DialogAbilities_OnAbility_10            ();
        void                    DialogAbilities_OnAbility_2             ();
        void                    DialogAbilities_OnAbility_3             ();
        void                    DialogAbilities_OnAbility_4             ();
        void                    DialogAbilities_OnAbility_5             ();
        void                    DialogAbilities_OnAbility_6             ();
        void                    DialogAbilities_OnAbility_7             ();
        void                    DialogAbilities_OnAbility_8             ();
        void                    DialogAbilities_OnAbility_9             ();
        void                    DialogAbilities_OnFocusAbility          ();
        void                    DialogAbilities_OnOk                    ();
        void                    DialogCardEvent_OnOk                    ();
        void                    DialogLevelGain_OnOk                    ();
        void                    DialogQMSpecialSquare                   ();
        void                    DialogQMSpecialSquare_OnOk              ();
        void                    DialogQMTutorial_OnNextPage             ();
        void                    DialogQMTutorial_OnOk                   ();
        void                    DialogQMTutorial_OnPrevPage             ();
        void                    DialogXpGain_OnOk                       ();
