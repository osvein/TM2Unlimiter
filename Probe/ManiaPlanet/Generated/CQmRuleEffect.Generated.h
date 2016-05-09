        enum { CLASSID = 0x2C01F000 };

        static CQmRuleEffect*   CreateInstance ();

        class CQmRuleEffectInfo* GetEffectInfo                           () const;
        void                    SetEffectInfo                           ( class CQmRuleEffectInfo* value );

        class CQmActor*         GetTarget                               () const;
        void                    SetTarget                               ( class CQmActor* value );

