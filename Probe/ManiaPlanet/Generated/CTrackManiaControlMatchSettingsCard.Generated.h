        enum { CLASSID = 0x240C4000 };

        static CTrackManiaControlMatchSettingsCard* CreateInstance ();

        class CPlugBitmap*      GetBmpBanner                            () const;
        void                    SetBmpBanner                            ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBmpBannerGrey                        () const;
        void                    SetBmpBannerGrey                        ( class CPlugBitmap* value );

        uint                    GetChallengesCount                      () const;
        void                    SetChallengesCount                      ( uint value );

        uint                    GetMedals                               () const;
        void                    SetMedals                               ( uint value );

        StringW                 GetStrComment                           () const;
        void                    SetStrComment                           ( StringW value );

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

        StringW                 GetStrTracks                            () const;
        void                    SetStrTracks                            ( StringW value );

