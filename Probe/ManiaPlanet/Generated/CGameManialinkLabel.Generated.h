        enum { CLASSID = 0x030FB000 };

        static CGameManialinkLabel* CreateInstance ();

        StringW                 GetValue                                () const;
        void                    SetValue                                ( StringW value );

        void                    SetText                                 ( StringW wstrnewText );
