        enum { CLASSID = 0x12014000 };

        static CNetMasterServer* CreateInstance ();

        StringA                 GetDummyProxyLogin                      () const;
        void                    SetDummyProxyLogin                      ( StringA value );

        StringA                 GetDummyProxyPass                       () const;
        void                    SetDummyProxyPass                       ( StringA value );

        bool                    GetDummyUseProxy                        () const;
        void                    SetDummyUseProxy                        ( bool value );

        StringA                 GetGameVersion                          () const;
        void                    SetGameVersion                          ( StringA value );

        StringA                 GetLogin                                () const;
        void                    SetLogin                                ( StringA value );

        StringA                 GetPass                                 () const;
        void                    SetPass                                 ( StringA value );

        StringA                 GetServerAddr                           () const;
        void                    SetServerAddr                           ( StringA value );

        uint                    GetServerNonSecurePort                  () const;
        void                    SetServerNonSecurePort                  ( uint value );

        StringA                 GetServerPath                           () const;
        void                    SetServerPath                           ( StringA value );

        uint                    GetServerSecurePort                     () const;
        void                    SetServerSecurePort                     ( uint value );

