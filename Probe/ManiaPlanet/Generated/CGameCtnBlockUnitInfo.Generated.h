        enum { CLASSID = 0x03036000 };

        static CGameCtnBlockUnitInfo* CreateInstance ();

        enum eBottomClipDir
        {
            BOTTOMCLIPDIR_NORTH,
            BOTTOMCLIPDIR_EAST,
            BOTTOMCLIPDIR_SOUTH,
            BOTTOMCLIPDIR_WEST
        };
        static std::wstring     BottomClipDirToString                   ( eBottomClipDir value );
        static eBottomClipDir   ParseBottomClipDir                      ( const std::wstring& wstrName );

        enum ePillarDir
        {
            PILLARDIR_NORTH,
            PILLARDIR_EAST,
            PILLARDIR_SOUTH,
            PILLARDIR_WEST
        };
        static std::wstring     PillarDirToString                       ( ePillarDir value );
        static ePillarDir       ParsePillarDir                          ( const std::wstring& wstrName );

        enum eReplacementDir
        {
            REPLACEMENTDIR_SAME_DIR,
            REPLACEMENTDIR_SYMMETRICAL_DIR,
            REPLACEMENTDIR_ALL_DIR,
            REPLACEMENTDIR_OPPOSED_DIR_ONLY,
            REPLACEMENTDIR_PERPENDICULAR_DIR_ONLY
        };
        static std::wstring     ReplacementDirToString                  ( eReplacementDir value );
        static eReplacementDir  ParseReplacementDir                     ( const std::wstring& wstrName );

        enum eTopClipDir
        {
            TOPCLIPDIR_NORTH,
            TOPCLIPDIR_EAST,
            TOPCLIPDIR_SOUTH,
            TOPCLIPDIR_WEST
        };
        static std::wstring     TopClipDirToString                      ( eTopClipDir value );
        static eTopClipDir      ParseTopClipDir                         ( const std::wstring& wstrName );

        uint                    GetAcceptPylons                         () const;
        void                    SetAcceptPylons                         ( uint value );

        class CGameCtnBlockInfoClip* GetBottomClip                           () const;
        void                    SetBottomClip                           ( class CGameCtnBlockInfoClip* value );

        eBottomClipDir          GetBottomClipDir                        () const;
        void                    SetBottomClipDir                        ( eBottomClipDir value );

        Array < class CGameCtnBlockInfoClip* >& GetClips                                () const;
        void                    SetClips                                ( Array < class CGameCtnBlockInfoClip* >& value );

        Array < class CGameCtnBlockInfoClip* >& GetClipsE                               () const;
        void                    SetClipsE                               ( Array < class CGameCtnBlockInfoClip* >& value );

        uint3                   GetOffset                               () const;
        void                    SetOffset                               ( uint3 value );

        uint3                   GetOffsetE                              () const;
        void                    SetOffsetE                              ( uint3 value );

        class CGameCtnBlockUnitInfo* GetOriginalBlockUnitInfo                () const;
        void                    SetOriginalBlockUnitInfo                ( class CGameCtnBlockUnitInfo* value );

        class CGameCtnBlockInfo* GetPillarBlockInfo                      () const;
        void                    SetPillarBlockInfo                      ( class CGameCtnBlockInfo* value );

        ePillarDir              GetPillarDir                            () const;
        void                    SetPillarDir                            ( ePillarDir value );

        uint                    GetPlacePylons                          () const;
        void                    SetPlacePylons                          ( uint value );

        Array < class CGameCtnBlockInfoPylon* >& GetPylons                               () const;
        void                    SetPylons                               ( Array < class CGameCtnBlockInfoPylon* >& value );

        class CGameCtnBlockInfo* GetReplacementBlockInfo                 () const;
        void                    SetReplacementBlockInfo                 ( class CGameCtnBlockInfo* value );

        eReplacementDir         GetReplacementDir                       () const;
        void                    SetReplacementDir                       ( eReplacementDir value );

        uint                    GetReplacementIndex                     () const;
        void                    SetReplacementIndex                     ( uint value );

        Id                      GetTerrainModifierId                    () const;
        void                    SetTerrainModifierId                    ( Id value );

        class CGameCtnBlockInfoClip* GetTopClip                              () const;
        void                    SetTopClip                              ( class CGameCtnBlockInfoClip* value );

        eTopClipDir             GetTopClipDir                           () const;
        void                    SetTopClipDir                           ( eTopClipDir value );

        bool                    GetUnderground                          () const;
        void                    SetUnderground                          ( bool value );

