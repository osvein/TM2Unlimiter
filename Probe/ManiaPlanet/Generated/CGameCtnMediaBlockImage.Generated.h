        enum { CLASSID = 0x030A5000 };

        static CGameCtnMediaBlockImage* CreateInstance ();

        class CPlugBitmap*      GetBitmap                               () const;
        void                    SetBitmap                               ( class CPlugBitmap* value );

        class CControlEffectSimi* GetEffect                               () const;
        void                    SetEffect                               ( class CControlEffectSimi* value );

        class CControlBase*     GetMobil                                () const;
        void                    SetMobil                                ( class CControlBase* value );

