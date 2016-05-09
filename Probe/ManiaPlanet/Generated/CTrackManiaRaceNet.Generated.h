        enum { CLASSID = 0x24044000 };

        static CTrackManiaRaceNet* CreateInstance ();

        List < nodptr<class CTrackManiaScore> >& GetCurrentScores                        () const;
        void                    SetCurrentScores                        ( List < nodptr<class CTrackManiaScore> >& value );

        List < nodptr<class CTrackManiaScore> >& GetGeneralScores                        () const;
        void                    SetGeneralScores                        ( List < nodptr<class CTrackManiaScore> >& value );

        uint                    GetPlayerGeneralPosition                () const;
        void                    SetPlayerGeneralPosition                ( uint value );

        bool                    GetReadyToGoNext                        () const;
        void                    SetReadyToGoNext                        ( bool value );

        List < nodptr<class CTrackManiaScore> >& GetTeamScores                           () const;
        void                    SetTeamScores                           ( List < nodptr<class CTrackManiaScore> >& value );

