        enum { CLASSID = 0x03057000 };

        static CGameCtnBlock*   CreateInstance ();

        enum eCollectionId
        {

        };
        static std::wstring     CollectionIdToString                    ( eCollectionId value );
        static eCollectionId    ParseCollectionId                       ( const std::wstring& wstrName );

        enum eDir
        {
            DIR_NORTH,
            DIR_EAST,
            DIR_SOUTH,
            DIR_WEST
        };
        static std::wstring     DirToString                             ( eDir value );
        static eDir             ParseDir                                ( const std::wstring& wstrName );

        enum eDirection
        {
            DIRECTION_NORTH,
            DIRECTION_EAST,
            DIRECTION_SOUTH,
            DIRECTION_WEST
        };
        static std::wstring     DirectionToString                       ( eDirection value );
        static eDirection       ParseDirection                          ( const std::wstring& wstrName );

        class CGameCtnBlockInfo* GetBlockInfo                            () const;
        void                    SetBlockInfo                            ( class CGameCtnBlockInfo* value );

        class CGameCtnBlockInfo* GetBlockModel                           () const;
        void                    SetBlockModel                           ( class CGameCtnBlockInfo* value );

        uint                    GetBlockScriptId                        () const;
        void                    SetBlockScriptId                        ( uint value );

        Array < class CGameCtnBlockUnit* >& GetBlockUnits                           () const;
        void                    SetBlockUnits                           ( Array < class CGameCtnBlockUnit* >& value );

        Array < class CGameCtnBlockUnit* >& GetBlockUnitsE                          () const;
        void                    SetBlockUnitsE                          ( Array < class CGameCtnBlockUnit* >& value );

        bool                    GetCanHaveAnchor                        () const;
        void                    SetCanHaveAnchor                        ( bool value );

        eCollectionId           GetCollectionId                         () const;
        void                    SetCollectionId                         ( eCollectionId value );

        uint3                   GetCoord                                () const;
        void                    SetCoord                                ( uint3 value );

        uint                    GetCoordX                               () const;
        void                    SetCoordX                               ( uint value );

        uint                    GetCoordY                               () const;
        void                    SetCoordY                               ( uint value );

        uint                    GetCoordZ                               () const;
        void                    SetCoordZ                               ( uint value );

        Id                      GetDescAuthor                           () const;
        void                    SetDescAuthor                           ( Id value );

        Id                      GetDescId                               () const;
        void                    SetDescId                               ( Id value );

        eDir                    GetDir                                  () const;
        void                    SetDir                                  ( eDir value );

        eDirection              GetDirection                            () const;
        void                    SetDirection                            ( eDirection value );

        bool                    GetEditable                             () const;
        void                    SetEditable                             ( bool value );

        class CSceneMobil*      GetMobil                                () const;
        void                    SetMobil                                ( class CSceneMobil* value );

        uint                    GetMobilIndex                           () const;
        void                    SetMobilIndex                           ( uint value );

        class CScenePhyCharSpecialProperty* GetPhyCharSpecialProperty               () const;
        void                    SetPhyCharSpecialProperty               ( class CScenePhyCharSpecialProperty* value );

        class CGameCtnBlockSkin* GetSkin                                 () const;
        void                    SetSkin                                 ( class CGameCtnBlockSkin* value );

        class CGameWaypointSpecialProperty* GetWaypointSpecialProperty              () const;
        void                    SetWaypointSpecialProperty              ( class CGameWaypointSpecialProperty* value );

        void                    ApplySkin                               ();
        void                    UseCustomAnchor                         ();
        void                    UseDefaultAnchor                        ();
