        enum { CLASSID = 0x09049000 };

        static CPlugFileFidCache* CreateInstance ();

        class CSystemFids*      GetFidsToCreateCacheFrom                () const;
        void                    SetFidsToCreateCacheFrom                ( class CSystemFids* value );

        StringW                 GetRootEnumFullName                     () const;
        void                    SetRootEnumFullName                     ( StringW value );

        uint                    GetVersion                              () const;
        void                    SetVersion                              ( uint value );

