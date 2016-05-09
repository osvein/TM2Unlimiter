        enum { CLASSID = 0x03047000 };

        static CGameHighScore*  CreateInstance ();

        uint                    GetCount                                () const;
        void                    SetCount                                ( uint value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        uint                    GetRank                                 () const;
        void                    SetRank                                 ( uint value );

        StringW                 GetScore                                () const;
        void                    SetScore                                ( StringW value );

        uint                    GetTime                                 () const;
        void                    SetTime                                 ( uint value );

