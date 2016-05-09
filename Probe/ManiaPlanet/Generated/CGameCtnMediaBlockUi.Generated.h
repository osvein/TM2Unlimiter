        enum { CLASSID = 0x0307D000 };

        static CGameCtnMediaBlockUi* CreateInstance ();

        class CControlContainer* GetUserInterface                        () const;
        void                    SetUserInterface                        ( class CControlContainer* value );

