        enum { CLASSID = 0x07019000 };

        static CControlUrlLinks* CreateInstance ();

        uint                    GetCurFocusedLink                       () const;
        void                    SetCurFocusedLink                       ( uint value );

        void                    ForceDirty                              ();
