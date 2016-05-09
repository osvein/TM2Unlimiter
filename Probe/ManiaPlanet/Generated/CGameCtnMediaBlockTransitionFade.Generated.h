        enum { CLASSID = 0x030AB000 };

        static CGameCtnMediaBlockTransitionFade* CreateInstance ();

        color                   GetColor                                () const;
        void                    SetColor                                ( color value );

        class CControlBase*     GetMobil                                () const;
        void                    SetMobil                                ( class CControlBase* value );

