        enum { CLASSID = 0x24015000 };

        static CTmRaceResultNod* CreateInstance ();

        List < int >&           GetCheckpoints                          () const;
        void                    SetCheckpoints                          ( List < int >& value );

        int                     GetNbRespawns                           () const;
        void                    SetNbRespawns                           ( int value );

        int                     GetStuntsScore                          () const;
        void                    SetStuntsScore                          ( int value );

        int                     GetTime                                 () const;
        void                    SetTime                                 ( int value );

        int                     Compare                                 ( class CTmRaceResultNod* pOther, uint criteria );
