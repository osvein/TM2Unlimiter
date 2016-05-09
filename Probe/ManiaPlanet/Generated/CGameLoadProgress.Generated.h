        enum { CLASSID = 0x030EB000 };

        static CGameLoadProgress* CreateInstance ();

        class CScene2d*         GetOverlay                              () const;
        void                    SetOverlay                              ( class CScene2d* value );

