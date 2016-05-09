        enum { CLASSID = 0x03162000 };

        static CGameCtnChallengeScript* CreateInstance ();

        class CGameCtnChallenge* GetMap                                  () const;
        void                    SetMap                                  ( class CGameCtnChallenge* value );

        bool                    StartClip                               ( StringW wstrClipName );
