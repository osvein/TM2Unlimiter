        enum { CLASSID = 0x12015000 };

        static CNetMasterHost*  CreateInstance ();

        StringA                 GetNetHostName                          () const;
        void                    SetNetHostName                          ( StringA value );

