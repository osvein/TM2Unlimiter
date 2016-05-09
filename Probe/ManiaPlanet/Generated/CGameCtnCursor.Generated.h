        enum { CLASSID = 0x030AE000 };

        static CGameCtnCursor*  CreateInstance ();

        enum eDir
        {
            DIR_NORTH,
            DIR_EAST,
            DIR_SOUTH,
            DIR_WEST
        };
        static std::wstring     DirToString                             ( eDir value );
        static eDir             ParseDir                                ( const std::wstring& wstrName );

        class CSceneMobil*      GetBlockHelperMobil                     () const;
        void                    SetBlockHelperMobil                     ( class CSceneMobil* value );

        class CSceneMobil*      GetBlockMobil                           () const;
        void                    SetBlockMobil                           ( class CSceneMobil* value );

        color                   GetCanJoinColor                         () const;
        void                    SetCanJoinColor                         ( color value );

        color                   GetCanPlaceColor                        () const;
        void                    SetCanPlaceColor                        ( color value );

        color                   GetCannotPlaceNorJoinColor              () const;
        void                    SetCannotPlaceNorJoinColor              ( color value );

        uint3                   GetCoord                                () const;
        void                    SetCoord                                ( uint3 value );

        class CGameOutlineBox*  GetCursorBox                            () const;
        void                    SetCursorBox                            ( class CGameOutlineBox* value );

        class CPlugTree*        GetCursorBoxShadow                      () const;
        void                    SetCursorBoxShadow                      ( class CPlugTree* value );

        eDir                    GetDir                                  () const;
        void                    SetDir                                  ( eDir value );

        class CPlugTree*        GetDirectionalArrow                     () const;
        void                    SetDirectionalArrow                     ( class CPlugTree* value );

        color                   GetNothingToDoColor                     () const;
        void                    SetNothingToDoColor                     ( color value );

        class CSceneMobil*      GetPickerHelperMobil                    () const;
        void                    SetPickerHelperMobil                    ( class CSceneMobil* value );

        class CSceneMobil*      GetPickerMobil                          () const;
        void                    SetPickerMobil                          ( class CSceneMobil* value );

        uint3                   GetSubdiv                               () const;
        void                    SetSubdiv                               ( uint3 value );

        uint3                   GetSubdivFactors                        () const;
        void                    SetSubdivFactors                        ( uint3 value );

