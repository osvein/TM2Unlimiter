        enum { CLASSID = 0x03131000 };

        static CGamePlayerProfileChunk_Challenge* CreateInstance ();

        StringW                 GetChallengeName                        () const;
        void                    SetChallengeName                        ( StringW value );

