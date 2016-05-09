        enum { CLASSID = 0x090AC000 };

        static CPlugSpriteParam* CreateInstance ();

        enum eRenderMode
        {
            RENDERMODE_QUAD,
            RENDERMODE_ROTATEDQUAD
        };
        static std::wstring     RenderModeToString                      ( eRenderMode value );
        static eRenderMode      ParseRenderMode                         ( const std::wstring& wstrName );

        enum eUsage
        {
            USAGE_UNKNOWN,
            USAGE_T3_CLOUDS,
            USAGE_T3_TREEFOLIAGESH,
            USAGE_T3_DECAL3D
        };
        static std::wstring     UsageToString                           ( eUsage value );
        static eUsage           ParseUsage                              ( const std::wstring& wstrName );

        float                   GetGlobalDirTiltFactor                  () const;
        void                    SetGlobalDirTiltFactor                  ( float value );

        Vec3D                   GetGlobalDirection                      () const;
        void                    SetGlobalDirection                      ( Vec3D value );

        Vec2D                   GetPivotPoint                           () const;
        void                    SetPivotPoint                           ( Vec2D value );

        bool                    GetRadiusInScreen                       () const;
        void                    SetRadiusInScreen                       ( bool value );

        eRenderMode             GetRenderMode                           () const;
        void                    SetRenderMode                           ( eRenderMode value );

        bool                    GetSortBackToFront                      () const;
        void                    SetSortBackToFront                      ( bool value );

        float                   GetTextureHeightInWorld                 () const;
        void                    SetTextureHeightInWorld                 ( float value );

        eUsage                  GetUsage                                () const;
        void                    SetUsage                                ( eUsage value );

        bool                    GetUseGlobalDir                         () const;
        void                    SetUseGlobalDir                         ( bool value );

        float                   GetVisibleMaxDistAtFov90                () const;
        void                    SetVisibleMaxDistAtFov90                ( float value );

        float                   GetVisibleMinScreenHeight01             () const;
        void                    SetVisibleMinScreenHeight01             ( float value );

        float                   GetZBiasFactor                          () const;
        void                    SetZBiasFactor                          ( float value );

