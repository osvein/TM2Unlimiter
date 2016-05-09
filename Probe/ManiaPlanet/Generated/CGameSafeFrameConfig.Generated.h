        enum { CLASSID = 0x030B7000 };

        static CGameSafeFrameConfig* CreateInstance ();

        Vec4D                   GetColor                                () const;
        void                    SetColor                                ( Vec4D value );

        Vec4D                   GetLinesColor                           () const;
        void                    SetLinesColor                           ( Vec4D value );

