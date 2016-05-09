        enum { CLASSID = 0x03043000 };

        static CGameCtnChallenge* CreateInstance ();

        enum eDifficulty
        {
            DIFFICULTY_WHITE,
            DIFFICULTY_GREEN,
            DIFFICULTY_BLUE,
            DIFFICULTY_RED,
            DIFFICULTY_BLACK,
            DIFFICULTY_CUSTOM
        };
        static std::wstring     DifficultyToString                      ( eDifficulty value );
        static eDifficulty      ParseDifficulty                         ( const std::wstring& wstrName );

        enum eKind
        {
            KIND_INTERNAL_ENDMARKER,
            KIND_OLD_CAMPAIGN,
            KIND_OLD_PUZZLE,
            KIND_OLD_RETRO,
            KIND_OLD_TIMEATTACK,
            KIND_OLD_ROUNDS,
            KIND_INPROGRESS,
            KIND_CAMPAIGN,
            KIND_CUSTOM,
            KIND_SOLO,
            KIND_SITE,
            KIND_SOLONADEO,
            KIND_MULTINADEO
        };
        static std::wstring     KindToString                            ( eKind value );
        static eKind            ParseKind                               ( const std::wstring& wstrName );

        enum eVehicleCollection
        {

        };
        static std::wstring     VehicleCollectionToString               ( eVehicleCollection value );
        static eVehicleCollection ParseVehicleCollection                  ( const std::wstring& wstrName );

        List < nodptr<class CGameCtnAnchoredObject> >& GetAnchoredObjects                      () const;
        void                    SetAnchoredObjects                      ( List < nodptr<class CGameCtnAnchoredObject> >& value );

        class CPlugAnimFile*    GetAnimLibrary                          () const;
        void                    SetAnimLibrary                          ( class CPlugAnimFile* value );

        StringA                 GetAuthorLogin                          () const;
        void                    SetAuthorLogin                          ( StringA value );

        StringW                 GetAuthorNickName                       () const;
        void                    SetAuthorNickName                       ( StringW value );

        class CPlugBitmap*      GetAuthorZoneIcon                       () const;
        void                    SetAuthorZoneIcon                       ( class CPlugBitmap* value );

        StringA                 GetAuthorZoneIconUrl                    () const;
        void                    SetAuthorZoneIconUrl                    ( StringA value );

        StringW                 GetAuthorZonePath                       () const;
        void                    SetAuthorZonePath                       ( StringW value );

        List < nodptr<class CGameCtnBlock> >& GetBakedBlocks                          () const;
        void                    SetBakedBlocks                          ( List < nodptr<class CGameCtnBlock> >& value );

        class CGameCtnCollectorList* GetBlockStock                           () const;
        void                    SetBlockStock                           ( class CGameCtnCollectorList* value );

        List < nodptr<class CGameCtnBlock> >& GetBlocks                               () const;
        void                    SetBlocks                               ( List < nodptr<class CGameCtnBlock> >& value );

        List < nodptr<class CSceneVehicleCarMarksSamples> >& GetCarMarksBuffer                       () const;
        void                    SetCarMarksBuffer                       ( List < nodptr<class CSceneVehicleCarMarksSamples> >& value );

        class CGameCtnChallengeParameters* GetChallengeParameters                  () const;
        void                    SetChallengeParameters                  ( class CGameCtnChallengeParameters* value );

        StringA                 GetChallengeScript                      () const;
        void                    SetChallengeScript                      ( StringA value );

        class CGameCtnMediaClipGroup* GetClipGroupEndRace                     () const;
        void                    SetClipGroupEndRace                     ( class CGameCtnMediaClipGroup* value );

        class CGameCtnMediaClipGroup* GetClipGroupGamePlay                    () const;
        void                    SetClipGroupGamePlay                    ( class CGameCtnMediaClipGroup* value );

        class CGameCtnMediaClipGroup* GetClipGroupInGame                      () const;
        void                    SetClipGroupInGame                      ( class CGameCtnMediaClipGroup* value );

        class CGameCtnMediaClip* GetClipIntro                            () const;
        void                    SetClipIntro                            ( class CGameCtnMediaClip* value );

        class CGameCtnCollection* GetCollection                           () const;
        void                    SetCollection                           ( class CGameCtnCollection* value );

        StringA                 GetCollectionName                       () const;
        void                    SetCollectionName                       ( StringA value );

        StringW                 GetComments                             () const;
        void                    SetComments                             ( StringW value );

        uint                    GetCopperPrice                          () const;
        void                    SetCopperPrice                          ( uint value );

        class CPlugMusic*       GetCustomMusic                          () const;
        void                    SetCustomMusic                          ( class CPlugMusic* value );

        class CSystemPackDesc*  GetCustomMusicPackDesc                  () const;
        void                    SetCustomMusicPackDesc                  ( class CSystemPackDesc* value );

        class CGameCtnDecoration* GetDecoration                           () const;
        void                    SetDecoration                           ( class CGameCtnDecoration* value );

        eDifficulty             GetDifficulty                           () const;
        void                    SetDifficulty                           ( eDifficulty value );

        StringA                 GetEdChallengeId                        () const;
        void                    SetEdChallengeId                        ( StringA value );

        StringA                 GetHashedPassword                       () const;
        void                    SetHashedPassword                       ( StringA value );

        bool                    GetIsBlockHelpers                       () const;
        void                    SetIsBlockHelpers                       ( bool value );

        eKind                   GetKind                                 () const;
        void                    SetKind                                 ( eKind value );

        uint                    GetLightMapCacheSmallByteSize           () const;
        void                    SetLightMapCacheSmallByteSize           ( uint value );

        Vec2D                   GetMapCoordOrigin                       () const;
        void                    SetMapCoordOrigin                       ( Vec2D value );

        Vec2D                   GetMapCoordTarget                       () const;
        void                    SetMapCoordTarget                       ( Vec2D value );

        class CGameCtnChallengeInfo* GetMapInfo                              () const;
        void                    SetMapInfo                              ( class CGameCtnChallengeInfo* value );

        StringW                 GetMapName                              () const;
        void                    SetMapName                              ( StringW value );

        StringW                 GetMapStyle                             () const;
        void                    SetMapStyle                             ( StringW value );

        StringW                 GetMapType                              () const;
        void                    SetMapType                              ( StringW value );

        StringW                 GetMapTypeOrLegacyMode                  () const;
        void                    SetMapTypeOrLegacyMode                  ( StringW value );

        class CSystemPackDesc*  GetModPackDesc                          () const;
        void                    SetModPackDesc                          ( class CSystemPackDesc* value );

        uint                    GetNbLaps                               () const;
        void                    SetNbLaps                               ( uint value );

        bool                    GetNeedUnlock                           () const;
        void                    SetNeedUnlock                           ( bool value );

        StringW                 GetObjectiveTextAuthor                  () const;
        void                    SetObjectiveTextAuthor                  ( StringW value );

        StringW                 GetObjectiveTextBronze                  () const;
        void                    SetObjectiveTextBronze                  ( StringW value );

        StringW                 GetObjectiveTextGold                    () const;
        void                    SetObjectiveTextGold                    ( StringW value );

        StringW                 GetObjectiveTextSilver                  () const;
        void                    SetObjectiveTextSilver                  ( StringW value );

        class CScriptTraitsMetadata* GetScriptMetadata                       () const;
        void                    SetScriptMetadata                       ( class CScriptTraitsMetadata* value );

        uint3                   GetSize                                 () const;
        void                    SetSize                                 ( uint3 value );

        uint                    GetTMObjective_AuthorTime               () const;
        void                    SetTMObjective_AuthorTime               ( uint value );

        uint                    GetTMObjective_BronzeTime               () const;
        void                    SetTMObjective_BronzeTime               ( uint value );

        uint                    GetTMObjective_GoldTime                 () const;
        void                    SetTMObjective_GoldTime                 ( uint value );

        uint                    GetTMObjective_SilverTime               () const;
        void                    SetTMObjective_SilverTime               ( uint value );

        uint                    GetTargetTime                           () const;
        void                    SetTargetTime                           ( uint value );

        float                   GetThumbnailCam_Pitch                   () const;
        void                    SetThumbnailCam_Pitch                   ( float value );

        float                   GetThumbnailCam_TransX                  () const;
        void                    SetThumbnailCam_TransX                  ( float value );

        float                   GetThumbnailCam_TransY                  () const;
        void                    SetThumbnailCam_TransY                  ( float value );

        float                   GetThumbnailCam_TransZ                  () const;
        void                    SetThumbnailCam_TransZ                  ( float value );

        float                   GetThumbnailCam_Yaw                     () const;
        void                    SetThumbnailCam_Yaw                     ( float value );

        uint                    GetTmpBlockOffsetMoulinetteY            () const;
        void                    SetTmpBlockOffsetMoulinetteY            ( uint value );

        List < nodptr<class CGameCtnChallengeTrafficElemDesc> >& GetTrafficElemDescs                     () const;
        void                    SetTrafficElemDescs                     ( List < nodptr<class CGameCtnChallengeTrafficElemDesc> >& value );

        class CPlugTrafficGraph* GetTrafficGraph                         () const;
        void                    SetTrafficGraph                         ( class CPlugTrafficGraph* value );

        List < nodptr<class CPlugSpline3D> >& GetTrafficPathSplines                   () const;
        void                    SetTrafficPathSplines                   ( List < nodptr<class CPlugSpline3D> >& value );

        List < nodptr<class CPlugTrafficPathSquares> >& GetTrafficPathSquares                   () const;
        void                    SetTrafficPathSquares                   ( List < nodptr<class CPlugTrafficPathSquares> >& value );

        List < nodptr<class CPlugTrafficZoneSquares> >& GetTrafficZoneSquares                   () const;
        void                    SetTrafficZoneSquares                   ( List < nodptr<class CPlugTrafficZoneSquares> >& value );

        Id                      GetVehicleAuthor                        () const;
        void                    SetVehicleAuthor                        ( Id value );

        eVehicleCollection      GetVehicleCollection                    () const;
        void                    SetVehicleCollection                    ( eVehicleCollection value );

        Id                      GetVehicleName                          () const;
        void                    SetVehicleName                          ( Id value );

        uint                    GetVertexCount                          () const;
        void                    SetVertexCount                          ( uint value );

        void                    CheckPlayField                          ();
        uint                    ComputeCrc32                            ( class CMwNod* pNod );
        void                    TmpBlockOffsetMoulinette                ();
        void                    UpdateBases                             ();
