        enum { CLASSID = 0x24001000 };

        static CTrackMania*     CreateInstance ();

        class CGamePlayerProfile* GetCoopProfile                          () const;
        void                    SetCoopProfile                          ( class CGamePlayerProfile* value );

        List < nodptr<class CTrackManiaMatchSettings> >& GetMatchSettings                        () const;
        void                    SetMatchSettings                        ( List < nodptr<class CTrackManiaMatchSettings> >& value );

        class CTrackManiaMenus* GetMenuManager                          () const;
        void                    SetMenuManager                          ( class CTrackManiaMenus* value );

        void                    DebugConvertReplays                     ();
        void                    DebugVerifyAllBlocks                    ();
        void                    ScanDiskForCampaigns                    ();
        void                    ScanDiskForChallenges                   ();
        void                    ScanDiskForReplays                      ();
