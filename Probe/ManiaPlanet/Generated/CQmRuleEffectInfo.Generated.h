        enum { CLASSID = 0x2C01C000 };

        static CQmRuleEffectInfo* CreateInstance ();

        class CGameAttributes*  GetAttributes                           () const;
        void                    SetAttributes                           ( class CGameAttributes* value );

        uint                    GetDuration                             () const;
        void                    SetDuration                             ( uint value );

        bool                    GetIsInternal                           () const;
        void                    SetIsInternal                           ( bool value );

        bool                    GetOnCancelResult                       () const;
        void                    SetOnCancelResult                       ( bool value );

        uint                    GetPeriod                               () const;
        void                    SetPeriod                               ( uint value );

        uint                    GetPreparation                          () const;
        void                    SetPreparation                          ( uint value );

        uint                    GetRecovery                             () const;
        void                    SetRecovery                             ( uint value );

        bool                    GetShowInHistory                        () const;
        void                    SetShowInHistory                        ( bool value );

