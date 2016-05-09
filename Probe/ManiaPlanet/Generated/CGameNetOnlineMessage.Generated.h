        enum { CLASSID = 0x03028000 };

        static CGameNetOnlineMessage* CreateInstance ();

        uint                    GetDonation                             () const;
        void                    SetDonation                             ( uint value );

        StringW                 GetMessage                              () const;
        void                    SetMessage                              ( StringW value );

        StringA                 GetReceiverLogin                        () const;
        void                    SetReceiverLogin                        ( StringA value );

        StringA                 GetSenderLogin                          () const;
        void                    SetSenderLogin                          ( StringA value );

        StringW                 GetSubject                              () const;
        void                    SetSubject                              ( StringW value );

