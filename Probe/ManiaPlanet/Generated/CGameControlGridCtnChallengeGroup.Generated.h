        enum { CLASSID = 0x030DF000 };

        static CGameControlGridCtnChallengeGroup* CreateInstance ();

        enum eChallengeAlignment
        {
            CHALLENGEALIGNMENT_TOP,
            CHALLENGEALIGNMENT_CENTER,
            CHALLENGEALIGNMENT_BOTTOM
        };
        static std::wstring     ChallengeAlignmentToString              ( eChallengeAlignment value );
        static eChallengeAlignment ParseChallengeAlignment                 ( const std::wstring& wstrName );

        eChallengeAlignment     GetChallengeAlignment                   () const;
        void                    SetChallengeAlignment                   ( eChallengeAlignment value );

        class CGameCtnChallengeGroup* GetChallengeGroup                       () const;
        void                    SetChallengeGroup                       ( class CGameCtnChallengeGroup* value );

        class CControlLabel*    GetChallengeGroupNameLabel              () const;
        void                    SetChallengeGroupNameLabel              ( class CControlLabel* value );

