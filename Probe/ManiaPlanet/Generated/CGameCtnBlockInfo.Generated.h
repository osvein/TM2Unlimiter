        enum { CLASSID = 0x0304E000 };

        static CGameCtnBlockInfo* CreateInstance ();

        enum eBaseType
        {
            BASETYPE_NONE,
            BASETYPE_CONNECTED,
            BASETYPE_GENERATOR
        };
        static std::wstring     BaseTypeToString                        ( eBaseType value );
        static eBaseType        ParseBaseType                           ( const std::wstring& wstrName );

        enum eDir
        {
            DIR_NORTH,
            DIR_EAST,
            DIR_SOUTH,
            DIR_WEST
        };
        static std::wstring     DirToString                             ( eDir value );
        static eDir             ParseDir                                ( const std::wstring& wstrName );

        enum eEdWayPointType
        {
            EDWAYPOINTTYPE_START,
            EDWAYPOINTTYPE_FINISH,
            EDWAYPOINTTYPE_CHECKPOINT,
            EDWAYPOINTTYPE_NONE,
            EDWAYPOINTTYPE_STARTFINISH,
            EDWAYPOINTTYPE_INSIDETOOUTSIDEZ,
            EDWAYPOINTTYPE_INSIDETOOUTSIDEY
        };
        static std::wstring     EdWayPointTypeToString                  ( eEdWayPointType value );
        static eEdWayPointType  ParseEdWayPointType                     ( const std::wstring& wstrName );

        enum eWayPointType
        {
            WAYPOINTTYPE_START,
            WAYPOINTTYPE_FINISH,
            WAYPOINTTYPE_CHECKPOINT,
            WAYPOINTTYPE_NONE,
            WAYPOINTTYPE_STARTFINISH,
            WAYPOINTTYPE_INSIDETOOUTSIDEZ,
            WAYPOINTTYPE_INSIDETOOUTSIDEY
        };
        static std::wstring     WayPointTypeToString                    ( eWayPointType value );
        static eWayPointType    ParseWayPointType                       ( const std::wstring& wstrName );

        List < nodptr<class CGameCtnBlockInfoVariantAir> >& GetAdditionalVariantsAir                () const;
        void                    SetAdditionalVariantsAir                ( List < nodptr<class CGameCtnBlockInfoVariantAir> >& value );

        List < nodptr<class CGameCtnBlockInfoVariantGround> >& GetAdditionalVariantsGround             () const;
        void                    SetAdditionalVariantsGround             ( List < nodptr<class CGameCtnBlockInfoVariantGround> >& value );

        eBaseType               GetBaseType                             () const;
        void                    SetBaseType                             ( eBaseType value );

        eDir                    GetDir                                  () const;
        void                    SetDir                                  ( eDir value );

        bool                    GetEdNoRespawn                          () const;
        void                    SetEdNoRespawn                          ( bool value );

        eEdWayPointType         GetEdWayPointType                       () const;
        void                    SetEdWayPointType                       ( eEdWayPointType value );

        class CPlugFogVolumeBox* GetFogVolumeBox                         () const;
        void                    SetFogVolumeBox                         ( class CPlugFogVolumeBox* value );

        bool                    GetIconAutoUseGround                    () const;
        void                    SetIconAutoUseGround                    ( bool value );

        class CMwNod*           GetIconMacroBlockInfo                   () const;
        void                    SetIconMacroBlockInfo                   ( class CMwNod* value );

        class CGamePodiumInfo*  GetIntroInfo                            () const;
        void                    SetIntroInfo                            ( class CGamePodiumInfo* value );

        bool                    GetIsObsolete                           () const;
        void                    SetIsObsolete                           ( bool value );

        bool                    GetIsPillar                             () const;
        void                    SetIsPillar                             ( bool value );

        bool                    GetIsRoad                               () const;
        void                    SetIsRoad                               ( bool value );

        bool                    GetIsTerrain                            () const;
        void                    SetIsTerrain                            ( bool value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        bool                    GetNoRespawn                            () const;
        void                    SetNoRespawn                            ( bool value );

        class CScenePhyCharSpecialProperty* GetPhyCharSpecialProperty               () const;
        void                    SetPhyCharSpecialProperty               ( class CScenePhyCharSpecialProperty* value );

        bool                    GetPhyCharSpecialPropertyCustomizable   () const;
        void                    SetPhyCharSpecialPropertyCustomizable   ( bool value );

        class CGamePodiumInfo*  GetPodiumInfo                           () const;
        void                    SetPodiumInfo                           ( class CGamePodiumInfo* value );

        Matrix43                GetPrecalcPartLoc                       () const;
        void                    SetPrecalcPartLoc                       ( Matrix43 value );

        class CMwNod*           GetPrecalcPartParams                    () const;
        void                    SetPrecalcPartParams                    ( class CMwNod* value );

        class CPlugSound*       GetSound1                               () const;
        void                    SetSound1                               ( class CPlugSound* value );

        Matrix43                GetSound1Loc                            () const;
        void                    SetSound1Loc                            ( Matrix43 value );

        class CPlugSound*       GetSound2                               () const;
        void                    SetSound2                               ( class CPlugSound* value );

        Matrix43                GetSound2Loc                            () const;
        void                    SetSound2Loc                            ( Matrix43 value );

        class CGameCtnBlockInfo* GetSymmetricalBlockInfoConnected        () const;
        void                    SetSymmetricalBlockInfoConnected        ( class CGameCtnBlockInfo* value );

        Id                      GetSymmetricalBlockInfoId               () const;
        void                    SetSymmetricalBlockInfoId               ( Id value );

        class CGameCtnBlockInfoVariantAir* GetVariantAir                           () const;
        void                    SetVariantAir                           ( class CGameCtnBlockInfoVariantAir* value );

        class CGameCtnBlockInfoVariantAir* GetVariantBaseAir                       () const;
        void                    SetVariantBaseAir                       ( class CGameCtnBlockInfoVariantAir* value );

        class CGameCtnBlockInfoVariantGround* GetVariantBaseGround                    () const;
        void                    SetVariantBaseGround                    ( class CGameCtnBlockInfoVariantGround* value );

        class CGameCtnBlockInfoVariantGround* GetVariantGround                        () const;
        void                    SetVariantGround                        ( class CGameCtnBlockInfoVariantGround* value );

        eWayPointType           GetWayPointType                         () const;
        void                    SetWayPointType                         ( eWayPointType value );

        class CGameWaypointSpecialProperty* GetWaypointSpecialProperty              () const;
        void                    SetWaypointSpecialProperty              ( class CGameWaypointSpecialProperty* value );

