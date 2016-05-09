        enum { CLASSID = 0x030DE000 };

        static CGameControlGridCtnCampaign* CreateInstance ();

        enum eChallengeGroupAlignment
        {
            CHALLENGEGROUPALIGNMENT_LEFT,
            CHALLENGEGROUPALIGNMENT_CENTER,
            CHALLENGEGROUPALIGNMENT_RIGHT
        };
        static std::wstring     ChallengeGroupAlignmentToString         ( eChallengeGroupAlignment value );
        static eChallengeGroupAlignment ParseChallengeGroupAlignment            ( const std::wstring& wstrName );

        class CGameCtnCampaign* GetCampaign                             () const;
        void                    SetCampaign                             ( class CGameCtnCampaign* value );

        class CControlLabel*    GetCampaignNameLabel                    () const;
        void                    SetCampaignNameLabel                    ( class CControlLabel* value );

        class CGameControlCardCtnChallengeInfo* GetChallengeCardTemplate                () const;
        void                    SetChallengeCardTemplate                ( class CGameControlCardCtnChallengeInfo* value );

        eChallengeGroupAlignment GetChallengeGroupAlignment              () const;
        void                    SetChallengeGroupAlignment              ( eChallengeGroupAlignment value );

        class CControlGrid*     GetChallengeGroupNamesGrid              () const;
        void                    SetChallengeGroupNamesGrid              ( class CControlGrid* value );

