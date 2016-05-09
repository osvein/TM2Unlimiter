        enum { CLASSID = 0x030E8000 };

        static CGameManialinkFileEntry* CreateInstance ();

        StringW                 GetFullFileName                         () const;
        void                    SetFullFileName                         ( StringW value );

        void                    OnFileChoosen                           ();
