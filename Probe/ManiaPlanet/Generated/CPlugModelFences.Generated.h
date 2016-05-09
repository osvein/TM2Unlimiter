        enum { CLASSID = 0x090A4000 };

        static CPlugModelFences* CreateInstance ();

        uint                    GetBlockFenceCountXZ                    () const;
        void                    SetBlockFenceCountXZ                    ( uint value );

        float                   GetBlockSizeXZ                          () const;
        void                    SetBlockSizeXZ                          ( float value );

        bool                    GetDebug                                () const;
        void                    SetDebug                                ( bool value );

        bool                    GetDebugEdges                           () const;
        void                    SetDebugEdges                           ( bool value );

        bool                    GetDebugRand                            () const;
        void                    SetDebugRand                            ( bool value );

        Vec2D                   GetFenceRangeY                          () const;
        void                    SetFenceRangeY                          ( Vec2D value );

        bool                    GetIsDiags                              () const;
        void                    SetIsDiags                              ( bool value );

        bool                    GetIsOrthos                             () const;
        void                    SetIsOrthos                             ( bool value );

        float                   GetLodDist                              () const;
        void                    SetLodDist                              ( float value );

        class CPlugMaterial*    GetMaterialFences                       () const;
        void                    SetMaterialFences                       ( class CPlugMaterial* value );

        bool                    GetOnlyOnePlaneY                        () const;
        void                    SetOnlyOnePlaneY                        ( bool value );

        uint                    GetRandSeed                             () const;
        void                    SetRandSeed                             ( uint value );

        bool                    GetUseSkinShader                        () const;
        void                    SetUseSkinShader                        ( bool value );

