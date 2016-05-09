        enum { CLASSID = 0x03099000 };

        static CGameLadderRankingSkill* CreateInstance ();

        class CSystemData*      GetDynamicLeagueLogo                    () const;
        void                    SetDynamicLeagueLogo                    ( class CSystemData* value );

        StringW                 GetDynamicLeagueName                    () const;
        void                    SetDynamicLeagueName                    ( StringW value );

