        enum { CLASSID = 0x240D2000 };

        static CTrackManiaChallengeScript* CreateInstance ();

        class CTrackManiaPlayer* GetPlayer                               () const;
        void                    SetPlayer                               ( class CTrackManiaPlayer* value );

