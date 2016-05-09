        enum { CLASSID = 0x030D3000 };

        static CGameCtnApp*     CreateInstance ();

        enum eVehicleCollectionId
        {

        };
        static std::wstring     VehicleCollectionIdToString             ( eVehicleCollectionId value );
        static eVehicleCollectionId ParseVehicleCollectionId                ( const std::wstring& wstrName );

        List < nodptr<class CMwNod> >& GetAdditionalSkinsFids                  () const;
        void                    SetAdditionalSkinsFids                  ( List < nodptr<class CMwNod> >& value );

        class CGameAdvertising* GetAdvertising                          () const;
        void                    SetAdvertising                          ( class CGameAdvertising* value );

        List < nodptr<class CGameCtnCampaign> >& GetBaseDynamicCampaigns                 () const;
        void                    SetBaseDynamicCampaigns                 ( List < nodptr<class CGameCtnCampaign> >& value );

        List < nodptr<class CGameCtnCampaign> >& GetBaseOfficialCampaigns                () const;
        void                    SetBaseOfficialCampaigns                ( List < nodptr<class CGameCtnCampaign> >& value );

        bool                    GetCanModifyWithoutInvalidate           () const;
        void                    SetCanModifyWithoutInvalidate           ( bool value );

        class CGameCtnChallenge* GetChallenge                            () const;
        void                    SetChallenge                            ( class CGameCtnChallenge* value );

        List < nodptr<class CGameCtnChallengeInfo> >& GetChallengeInfos                       () const;
        void                    SetChallengeInfos                       ( List < nodptr<class CGameCtnChallengeInfo> >& value );

        List < nodptr<class CGameCtnCollection> >& GetCollectionFids                       () const;
        void                    SetCollectionFids                       ( List < nodptr<class CGameCtnCollection> >& value );

        class CGameCtnCampaign* GetCurrentCampaign                      () const;
        void                    SetCurrentCampaign                      ( class CGameCtnCampaign* value );

        class CGameOfficialRecord* GetCurrentOfficialRecord                () const;
        void                    SetCurrentOfficialRecord                ( class CGameOfficialRecord* value );

        class CGamePlayground*  GetCurrentPlayground                    () const;
        void                    SetCurrentPlayground                    ( class CGamePlayground* value );

        class CGamePlayerProfile* GetCurrentProfile                       () const;
        void                    SetCurrentProfile                       ( class CGamePlayerProfile* value );

        class CGameCtnObjectInfo* GetDefaultCollectorVehicle              () const;
        void                    SetDefaultCollectorVehicle              ( class CGameCtnObjectInfo* value );

        List < nodptr<class CGameCtnCampaign> >& GetDynamicCampaigns                     () const;
        void                    SetDynamicCampaigns                     ( List < nodptr<class CGameCtnCampaign> >& value );

        class CGameCtnEditor*   GetEditor                               () const;
        void                    SetEditor                               ( class CGameCtnEditor* value );

        class CMwNod*           GetEditorModel                          () const;
        void                    SetEditorModel                          ( class CMwNod* value );

        class CGameCamera*      GetGameCamera                           () const;
        void                    SetGameCamera                           ( class CGameCamera* value );

        class CGameScene*       GetGameScene                            () const;
        void                    SetGameScene                            ( class CGameScene* value );

        class CGameCtnCatalog*  GetGlobalCatalog                        () const;
        void                    SetGlobalCatalog                        ( class CGameCtnCatalog* value );

        bool                    GetMenuBackground_MustLoopIntro         () const;
        void                    SetMenuBackground_MustLoopIntro         ( bool value );

        uint                    GetMessagesCount                        () const;
        void                    SetMessagesCount                        ( uint value );

        StringW                 GetMoney                                () const;
        void                    SetMoney                                ( StringW value );

        class CGameCtnNetwork*  GetNetwork                              () const;
        void                    SetNetwork                              ( class CGameCtnNetwork* value );

        List < nodptr<class CGameCtnCampaign> >& GetOfficialCampaigns                    () const;
        void                    SetOfficialCampaigns                    ( List < nodptr<class CGameCtnCampaign> >& value );

        class CGameOfficialRecorder* GetOfficialRecorder                     () const;
        void                    SetOfficialRecorder                     ( class CGameOfficialRecorder* value );

        List < nodptr<class CGamePlayerProfile> >& GetPlayerProfiles                       () const;
        void                    SetPlayerProfiles                       ( List < nodptr<class CGamePlayerProfile> >& value );

        List < nodptr<class CGameCtnReplayRecordInfo> >& GetReplayRecordInfos                    () const;
        void                    SetReplayRecordInfos                    ( List < nodptr<class CGameCtnReplayRecordInfo> >& value );

        class CGameResources*   GetResources                            () const;
        void                    SetResources                            ( class CGameResources* value );

        bool                    GetStereoscopyEnable                    () const;
        void                    SetStereoscopyEnable                    ( bool value );

        class CGameSwitcher*    GetSwitcher                             () const;
        void                    SetSwitcher                             ( class CGameSwitcher* value );

        eVehicleCollectionId    GetVehicleCollectionId                  () const;
        void                    SetVehicleCollectionId                  ( eVehicleCollectionId value );

