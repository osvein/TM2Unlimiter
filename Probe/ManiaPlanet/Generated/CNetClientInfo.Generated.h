        enum { CLASSID = 0x12003000 };

        static CNetClientInfo*  CreateInstance ();

        StringA                 GetGameID                               () const;
        void                    SetGameID                               ( StringA value );

        StringA                 GetGameVersion                          () const;
        void                    SetGameVersion                          ( StringA value );

        StringA                 GetHostName                             () const;
        void                    SetHostName                             ( StringA value );

        StringA                 GetLocalIP                              () const;
        void                    SetLocalIP                              ( StringA value );

        StringA                 GetRemoteIP                             () const;
        void                    SetRemoteIP                             ( StringA value );

