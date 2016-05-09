        enum { CLASSID = 0x2C01A000 };

        static CQmRuleAction*   CreateInstance ();

        class CQmRuleActionInfo* GetActionInfo                           () const;
        void                    SetActionInfo                           ( class CQmRuleActionInfo* value );

        List < nodptr<class CQmRuleActionParameter> >& GetParameters                           () const;
        void                    SetParameters                           ( List < nodptr<class CQmRuleActionParameter> >& value );

        List < StringA >&       GetResults                              () const;
        void                    SetResults                              ( List < StringA >& value );

        void                    AddResult                               ( StringA strResult );
        bool                    HasParameter                            ( StringA strName );
