        enum { CLASSID = 0x030FA000 };

        static CGameCtnMenusManiaPlanet* CreateInstance ();

        List < nodptr<class CGameCtnChallengeInfo> >& GetChallengeInfosCampaign               () const;
        void                    SetChallengeInfosCampaign               ( List < nodptr<class CGameCtnChallengeInfo> >& value );

        class CGameCtnCampaign* GetCurrentCampaign                      () const;
        void                    SetCurrentCampaign                      ( class CGameCtnCampaign* value );

        bool                    GetMenuManiaPlanet_IsEditMenuVisible    () const;
        void                    SetMenuManiaPlanet_IsEditMenuVisible    ( bool value );

        bool                    GetMenuManiaPlanet_IsEditingStations    () const;
        void                    SetMenuManiaPlanet_IsEditingStations    ( bool value );

