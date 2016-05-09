        enum { CLASSID = 0x03093000 };

        static CGameCtnReplayRecord* CreateInstance ();

        class CGameCtnChallenge* GetChallenge                            () const;
        void                    SetChallenge                            ( class CGameCtnChallenge* value );

        class CGameCtnMediaClip* GetClip                                 () const;
        void                    SetClip                                 ( class CGameCtnMediaClip* value );

        uint                    GetDuration                             () const;
        void                    SetDuration                             ( uint value );

        List < nodptr<class CGameCtnGhost> >& GetGhosts                               () const;
        void                    SetGhosts                               ( List < nodptr<class CGameCtnGhost> >& value );

        class CFuncSegment*     GetHumanTimeToGameTimeFunc              () const;
        void                    SetHumanTimeToGameTimeFunc              ( class CFuncSegment* value );

        void                    StopRecord                              ();
