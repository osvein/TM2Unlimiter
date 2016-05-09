        enum { CLASSID = 0x12012000 };

        static CNetHttpClient*  CreateInstance ();

        bool                    GetConnected                            () const;
        void                    SetConnected                            ( bool value );

        StringA                 GetLastError                            () const;
        void                    SetLastError                            ( StringA value );

        StringA                 GetPassword                             () const;
        void                    SetPassword                             ( StringA value );

        uint                    GetPort                                 () const;
        void                    SetPort                                 ( uint value );

        List < nodptr<class CNetHttpResult> >& GetRequests                             () const;
        void                    SetRequests                             ( List < nodptr<class CNetHttpResult> >& value );

        StringA                 GetServer                               () const;
        void                    SetServer                               ( StringA value );

        StringA                 GetUserName                             () const;
        void                    SetUserName                             ( StringA value );

