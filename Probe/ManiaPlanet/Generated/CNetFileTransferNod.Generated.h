        enum { CLASSID = 0x1201A000 };

        static CNetFileTransferNod* CreateInstance ();

        StringA                 GetChecksum                             () const;
        void                    SetChecksum                             ( StringA value );

        uint                    GetCurrentOffset                        () const;
        void                    SetCurrentOffset                        ( uint value );

        class CSystemFidFile*   GetFile                                 () const;
        void                    SetFile                                 ( class CSystemFidFile* value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        uint                    GetTotalSize                            () const;
        void                    SetTotalSize                            ( uint value );

