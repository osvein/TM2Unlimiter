        enum { CLASSID = 0x0B00B000 };

        static CSystemFidsFolder* CreateInstance ();

        uint                    GetByteSize                             () const;
        void                    SetByteSize                             ( uint value );

        uint                    GetByteSizeEd                           () const;
        void                    SetByteSizeEd                           ( uint value );

        StringW                 GetDirName                              () const;
        void                    SetDirName                              ( StringW value );

        StringW                 GetFullDirName                          () const;
        void                    SetFullDirName                          ( StringW value );

