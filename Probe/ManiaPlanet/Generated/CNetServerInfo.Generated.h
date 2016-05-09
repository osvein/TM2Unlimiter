        enum { CLASSID = 0x12002000 };

        static CNetServerInfo*  CreateInstance ();

        StringA                 GetGameID                               () const;
        void                    SetGameID                               ( StringA value );

        StringA                 GetGameVersion                          () const;
        void                    SetGameVersion                          ( StringA value );

        StringA                 GetHostName                             () const;
        void                    SetHostName                             ( StringA value );

        StringA                 GetLocalIP                              () const;
        void                    SetLocalIP                              ( StringA value );

        uint                    GetLocalTCPPort                         () const;
        void                    SetLocalTCPPort                         ( uint value );

        uint                    GetLocalUDPPort                         () const;
        void                    SetLocalUDPPort                         ( uint value );

        StringA                 GetRemoteIP                             () const;
        void                    SetRemoteIP                             ( StringA value );

        uint                    GetRemoteTCPPort                        () const;
        void                    SetRemoteTCPPort                        ( uint value );

        uint                    GetRemoteUDPPort                        () const;
        void                    SetRemoteUDPPort                        ( uint value );

        StringA                 GetSessionName                          () const;
        void                    SetSessionName                          ( StringA value );

