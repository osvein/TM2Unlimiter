        enum { CLASSID = 0x0315B000 };

        static CGameCtnBlockInfoVariant* CreateInstance ();

        enum eCardinalDir
        {
            CARDINALDIR_NORTH,
            CARDINALDIR_EAST,
            CARDINALDIR_SOUTH,
            CARDINALDIR_WEST
        };
        static std::wstring     CardinalDirToString                     ( eCardinalDir value );
        static eCardinalDir     ParseCardinalDir                        ( const std::wstring& wstrName );

        enum eMultiDir
        {
            MULTIDIR_SAME_DIR,
            MULTIDIR_SYMMETRICAL_DIR,
            MULTIDIR_ALL_DIR,
            MULTIDIR_OPPOSED_DIR_ONLY,
            MULTIDIR_PERPENDICULAR_DIR_ONLY
        };
        static std::wstring     MultiDirToString                        ( eMultiDir value );
        static eMultiDir        ParseMultiDir                           ( const std::wstring& wstrName );

        enum ePhysicsModTriggerType
        {
            PHYSICSMODTRIGGERTYPE_INSIDETOOUTSIDEZ,
            PHYSICSMODTRIGGERTYPE_INSIDETOOUTSIDEY
        };
        static std::wstring     PhysicsModTriggerTypeToString           ( ePhysicsModTriggerType value );
        static ePhysicsModTriggerType ParsePhysicsModTriggerType              ( const std::wstring& wstrName );

        bool                    GetAutoChangeVariantOff                 () const;
        void                    SetAutoChangeVariantOff                 ( bool value );

        Array < class CGameCtnBlockUnitInfo* >& GetBlockUnitInfos                       () const;
        void                    SetBlockUnitInfos                       ( Array < class CGameCtnBlockUnitInfo* >& value );

        Array < class CGameCtnBlockUnitInfo* >& GetBlockUnitModels                      () const;
        void                    SetBlockUnitModels                      ( Array < class CGameCtnBlockUnitInfo* >& value );

        eCardinalDir            GetCardinalDir                          () const;
        void                    SetCardinalDir                          ( eCardinalDir value );

        class CMwNod*           GetFacultativeHelperMobil               () const;
        void                    SetFacultativeHelperMobil               ( class CMwNod* value );

        bool                    GetHasFreeClips                         () const;
        void                    SetHasFreeClips                         ( bool value );

        bool                    GetHasManualSymmetryD1                  () const;
        void                    SetHasManualSymmetryD1                  ( bool value );

        bool                    GetHasManualSymmetryD2                  () const;
        void                    SetHasManualSymmetryD2                  ( bool value );

        bool                    GetHasManualSymmetryH                   () const;
        void                    SetHasManualSymmetryH                   ( bool value );

        bool                    GetHasManualSymmetryV                   () const;
        void                    SetHasManualSymmetryV                   ( bool value );

        bool                    GetHasVolumeSymmetryD1                  () const;
        void                    SetHasVolumeSymmetryD1                  ( bool value );

        bool                    GetHasVolumeSymmetryD2                  () const;
        void                    SetHasVolumeSymmetryD2                  ( bool value );

        bool                    GetHasVolumeSymmetryH                   () const;
        void                    SetHasVolumeSymmetryH                   ( bool value );

        bool                    GetHasVolumeSymmetryV                   () const;
        void                    SetHasVolumeSymmetryV                   ( bool value );

        class CMwNod*           GetHelperMobil                          () const;
        void                    SetHelperMobil                          ( class CMwNod* value );

        bool                    GetIsAllUnderground                     () const;
        void                    SetIsAllUnderground                     ( bool value );

        bool                    GetIsFakeReplacement                    () const;
        void                    SetIsFakeReplacement                    ( bool value );

        bool                    GetIsObsoleteVariant                    () const;
        void                    SetIsObsoleteVariant                    ( bool value );

        bool                    GetIsPartUnderground                    () const;
        void                    SetIsPartUnderground                    ( bool value );

        List < nodptr<class CMwNod> >& GetMobils00                             () const;
        void                    SetMobils00                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils01                             () const;
        void                    SetMobils01                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils02                             () const;
        void                    SetMobils02                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils03                             () const;
        void                    SetMobils03                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils04                             () const;
        void                    SetMobils04                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils05                             () const;
        void                    SetMobils05                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils06                             () const;
        void                    SetMobils06                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils07                             () const;
        void                    SetMobils07                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils08                             () const;
        void                    SetMobils08                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils09                             () const;
        void                    SetMobils09                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils10                             () const;
        void                    SetMobils10                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils11                             () const;
        void                    SetMobils11                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils12                             () const;
        void                    SetMobils12                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils13                             () const;
        void                    SetMobils13                             ( List < nodptr<class CMwNod> >& value );

        List < nodptr<class CMwNod> >& GetMobils14                             () const;
        void                    SetMobils14                             ( List < nodptr<class CMwNod> >& value );

        eMultiDir               GetMultiDir                             () const;
        void                    SetMultiDir                             ( eMultiDir value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        int3                    GetOffsetBoundingBoxMax                 () const;
        void                    SetOffsetBoundingBoxMax                 ( int3 value );

        int3                    GetOffsetBoundingBoxMin                 () const;
        void                    SetOffsetBoundingBoxMin                 ( int3 value );

        class CMwNod*           GetPhysicsModTriggerSolid               () const;
        void                    SetPhysicsModTriggerSolid               ( class CMwNod* value );

        ePhysicsModTriggerType  GetPhysicsModTriggerType                () const;
        void                    SetPhysicsModTriggerType                ( ePhysicsModTriggerType value );

        class CMwNod*           GetScreenInteractionTriggerSolid        () const;
        void                    SetScreenInteractionTriggerSolid        ( class CMwNod* value );

        uint3                   GetSize                                 () const;
        void                    SetSize                                 ( uint3 value );

        Matrix43                GetSpawnLoc                             () const;
        void                    SetSpawnLoc                             ( Matrix43 value );

        uint                    GetSymmetricalVariantIndex              () const;
        void                    SetSymmetricalVariantIndex              ( uint value );

        class CMwNod*           GetWayPointTriggerSolid                 () const;
        void                    SetWayPointTriggerSolid                 ( class CMwNod* value );

