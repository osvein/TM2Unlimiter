        enum { CLASSID = 0x0312B000 };

        static CGamePlayerProfileChunk* CreateInstance ();

        StringA                 GetChecksum                             () const;
        void                    SetChecksum                             ( StringA value );

        StringA                 GetChunkName                            () const;
        void                    SetChunkName                            ( StringA value );

        StringA                 GetGameName                             () const;
        void                    SetGameName                             ( StringA value );

        bool                    GetIsLoaded                             () const;
        void                    SetIsLoaded                             ( bool value );

        bool                    GetIsModified                           () const;
        void                    SetIsModified                           ( bool value );

        bool                    GetIsOnlineSave                         () const;
        void                    SetIsOnlineSave                         ( bool value );

        bool                    GetIsSynchronizedFromMS                 () const;
        void                    SetIsSynchronizedFromMS                 ( bool value );

        uint                    GetTimeStamp                            () const;
        void                    SetTimeStamp                            ( uint value );

