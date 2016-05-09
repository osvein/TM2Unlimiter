        enum { CLASSID = 0x2C01D000 };

        static CQmActor*        CreateInstance ();

        class CGameCardEventList* GetActionsChoiceCardList                () const;
        void                    SetActionsChoiceCardList                ( class CGameCardEventList* value );

        StringA                 GetActionsChoiceName                    () const;
        void                    SetActionsChoiceName                    ( StringA value );

        List < nodptr<class CQmRuleEffect> >& GetAppliedEffects                       () const;
        void                    SetAppliedEffects                       ( List < nodptr<class CQmRuleEffect> >& value );

        List < nodptr<class CQmRuleEffect> >& GetApplyingEffects                      () const;
        void                    SetApplyingEffects                      ( List < nodptr<class CQmRuleEffect> >& value );

        bool                    GetAutoActivateEffect                   () const;
        void                    SetAutoActivateEffect                   ( bool value );

        bool                    GetChooseDirMode                        () const;
        void                    SetChooseDirMode                        ( bool value );

        bool                    GetChooseTargetMode                     () const;
        void                    SetChooseTargetMode                     ( bool value );

        List < nodptr<class CQmRuleAction> >& GetCurrentActions                       () const;
        void                    SetCurrentActions                       ( List < nodptr<class CQmRuleAction> >& value );

        uint                    GetDefaultActionIndex                   () const;
        void                    SetDefaultActionIndex                   ( uint value );

        class CGameActorList*   GetInventoryActorList                   () const;
        void                    SetInventoryActorList                   ( class CGameActorList* value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        uint                    GetTimeMultiplier                       () const;
        void                    SetTimeMultiplier                       ( uint value );

        bool                    GetUseDefaultAction                     () const;
        void                    SetUseDefaultAction                     ( bool value );

