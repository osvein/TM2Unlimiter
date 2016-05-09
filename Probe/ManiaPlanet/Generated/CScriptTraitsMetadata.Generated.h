        enum { CLASSID = 0x11002000 };

        static CScriptTraitsMetadata* CreateInstance ();

        uint                    GetMetadataTraitsCount                  () const;
        void                    SetMetadataTraitsCount                  ( uint value );

        void                    ClearMetadata                           ();
