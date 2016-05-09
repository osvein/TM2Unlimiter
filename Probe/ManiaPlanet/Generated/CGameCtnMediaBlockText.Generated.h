        enum { CLASSID = 0x030A8000 };

        static CGameCtnMediaBlockText* CreateInstance ();

        class CControlEffectSimi* GetEffect                               () const;
        void                    SetEffect                               ( class CControlEffectSimi* value );

        class CControlBase*     GetMobil                                () const;
        void                    SetMobil                                ( class CControlBase* value );

        StringW                 GetText                                 () const;
        void                    SetText                                 ( StringW value );

