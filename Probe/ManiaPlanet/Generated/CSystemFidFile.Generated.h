        enum { CLASSID = 0x0B00A000 };

        static CSystemFidFile*  CreateInstance ();

        uint                    GetByteSize                             () const;
        void                    SetByteSize                             ( uint value );

        uint                    GetByteSizeEd                           () const;
        void                    SetByteSizeEd                           ( uint value );

        StringW                 GetFileName                             () const;
        void                    SetFileName                             ( StringW value );

        StringW                 GetFullFileName                         () const;
        void                    SetFullFileName                         ( StringW value );

        bool                    GetIsReadOnly                           () const;
        void                    SetIsReadOnly                           ( bool value );

        StringW                 GetShortFileName                        () const;
        void                    SetShortFileName                        ( StringW value );

        void                    CopyToFileRelative                      ( StringA strRelFileName, bool bFailIfExists );
