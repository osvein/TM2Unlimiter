        enum { CLASSID = 0x0A064000 };

        static CSceneDecalsManager* CreateInstance ();

        uint                    GetBucket2dGridCellCountX               () const;
        void                    SetBucket2dGridCellCountX               ( uint value );

        uint                    GetBucket2dGridCellCountY               () const;
        void                    SetBucket2dGridCellCountY               ( uint value );

        uint                    GetBucket2dGridCellCountZ               () const;
        void                    SetBucket2dGridCellCountZ               ( uint value );

        Vec3D                   GetBucket2dGridCellSize                 () const;
        void                    SetBucket2dGridCellSize                 ( Vec3D value );

        Vec3D                   GetBucket2dGridOrigin                   () const;
        void                    SetBucket2dGridOrigin                   ( Vec3D value );

        uint                    GetBucket3dGridCellCountX               () const;
        void                    SetBucket3dGridCellCountX               ( uint value );

        uint                    GetBucket3dGridCellCountY               () const;
        void                    SetBucket3dGridCellCountY               ( uint value );

        Vec3D                   GetBucket3dGridCellSize                 () const;
        void                    SetBucket3dGridCellSize                 ( Vec3D value );

        uint                    GetBucket3eGridCellCountZ               () const;
        void                    SetBucket3eGridCellCountZ               ( uint value );

        class CSceneMobil*      GetDecal3dMobil                         () const;
        void                    SetDecal3dMobil                         ( class CSceneMobil* value );

        uint                    GetDiscardCount3d                       () const;
        void                    SetDiscardCount3d                       ( uint value );

        uint                    GetDrawnCount2d                         () const;
        void                    SetDrawnCount2d                         ( uint value );

        uint                    GetDrawnCount3d                         () const;
        void                    SetDrawnCount3d                         ( uint value );

        bool                    GetEdShowHelpers                        () const;
        void                    SetEdShowHelpers                        ( bool value );

        bool                    GetEnableDecals2d                       () const;
        void                    SetEnableDecals2d                       ( bool value );

        bool                    GetEnableDecals3d                       () const;
        void                    SetEnableDecals3d                       ( bool value );

        bool                    GetShowOverflows                        () const;
        void                    SetShowOverflows                        ( bool value );

        void                    Draw                                    ();
        void                    EdShowHide                              ();
