        enum { CLASSID = 0x03171000 };

        static CGamePlayerProfileCompatibilityChunk* CreateInstance ();

        StringA                 GetChecksum                             () const;
        void                    SetChecksum                             ( StringA value );

        StringA                 GetChunkName                            () const;
        void                    SetChunkName                            ( StringA value );

        uint                    GetClassId                              () const;
        void                    SetClassId                              ( uint value );

        StringA                 GetGameName                             () const;
        void                    SetGameName                             ( StringA value );

        uint                    GetTimeStamp                            () const;
        void                    SetTimeStamp                            ( uint value );

