        enum { CLASSID = 0x030C2000 };

        static CGameControlCardMessage* CreateInstance ();

        uint                    GetDonation                             () const;
        void                    SetDonation                             ( uint value );

        StringW                 GetStrMessage                           () const;
        void                    SetStrMessage                           ( StringW value );

        StringA                 GetStrReceiver                          () const;
        void                    SetStrReceiver                          ( StringA value );

        StringA                 GetStrSendDate                          () const;
        void                    SetStrSendDate                          ( StringA value );

        StringA                 GetStrSender                            () const;
        void                    SetStrSender                            ( StringA value );

        StringW                 GetStrSubject                           () const;
        void                    SetStrSubject                           ( StringW value );

        void                    OnCheckLogin                            ();
