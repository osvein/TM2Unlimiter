        enum { CLASSID = 0x12020000 };

        static CNetIPC*         CreateInstance ();

        uint                    GetMaxPacketSize                        () const;
        void                    SetMaxPacketSize                        ( uint value );

        uint                    GetPort                                 () const;
        void                    SetPort                                 ( uint value );

        StringA                 GetVersionString                        () const;
        void                    SetVersionString                        ( StringA value );

