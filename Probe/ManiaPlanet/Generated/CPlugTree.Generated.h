        enum { CLASSID = 0x0904F000 };

        static CPlugTree*       CreateInstance ();

        Vec3D                   GetBoundingBoxCenter                    () const;
        void                    SetBoundingBoxCenter                    ( Vec3D value );

        Vec3D                   GetBoundingBoxHalfDiag                  () const;
        void                    SetBoundingBoxHalfDiag                  ( Vec3D value );

        Vec3D                   GetBoundingBoxMax                       () const;
        void                    SetBoundingBoxMax                       ( Vec3D value );

        Vec3D                   GetBoundingBoxMin                       () const;
        void                    SetBoundingBoxMin                       ( Vec3D value );

        List < nodptr<class CPlugTree> >& GetChilds                               () const;
        void                    SetChilds                               ( List < nodptr<class CPlugTree> >& value );

        class CFuncTree*        GetFuncTree                             () const;
        void                    SetFuncTree                             ( class CFuncTree* value );

        class CPlugTreeGenerator* GetGenerator                            () const;
        void                    SetGenerator                            ( class CPlugTreeGenerator* value );

        bool                    GetHasModel                             () const;
        void                    SetHasModel                             ( bool value );

        bool                    GetIsCollidable                         () const;
        void                    SetIsCollidable                         ( bool value );

        bool                    GetIsCustomBBox                         () const;
        void                    SetIsCustomBBox                         ( bool value );

        bool                    GetIsFixedRatio2D                       () const;
        void                    SetIsFixedRatio2D                       ( bool value );

        bool                    GetIsLightVolume                        () const;
        void                    SetIsLightVolume                        ( bool value );

        bool                    GetIsLightVolumeVisible                 () const;
        void                    SetIsLightVolumeVisible                 ( bool value );

        bool                    GetIsPickable                           () const;
        void                    SetIsPickable                           ( bool value );

        bool                    GetIsPickableVisual                     () const;
        void                    SetIsPickableVisual                     ( bool value );

        bool                    GetIsPortal                             () const;
        void                    SetIsPortal                             ( bool value );

        bool                    GetIsRooted                             () const;
        void                    SetIsRooted                             ( bool value );

        bool                    GetIsShadowCaster                       () const;
        void                    SetIsShadowCaster                       ( bool value );

        bool                    GetIsVisible                            () const;
        void                    SetIsVisible                            ( bool value );

        Matrix43                GetLocation                             () const;
        void                    SetLocation                             ( Matrix43 value );

        class CPlugMaterial*    GetMaterial                             () const;
        void                    SetMaterial                             ( class CPlugMaterial* value );

        class CPlug*            GetShader                               () const;
        void                    SetShader                               ( class CPlug* value );

        uint                    GetSplitVisualCount                     () const;
        void                    SetSplitVisualCount                     ( uint value );

        uint                    GetSplitVisualIndex                     () const;
        void                    SetSplitVisualIndex                     ( uint value );

        uint                    GetSubVisualIndex1                      () const;
        void                    SetSubVisualIndex1                      ( uint value );

        uint                    GetSubVisualIndex2                      () const;
        void                    SetSubVisualIndex2                      ( uint value );

        float                   GetSubVisualIndexB                      () const;
        void                    SetSubVisualIndexB                      ( float value );

        class CPlugSurface*     GetSurface                              () const;
        void                    SetSurface                              ( class CPlugSurface* value );

        bool                    GetTestBBoxVisibility                   () const;
        void                    SetTestBBoxVisibility                   ( bool value );

        Vec3D                   GetTranslation                          () const;
        void                    SetTranslation                          ( Vec3D value );

        bool                    GetUseLocation                          () const;
        void                    SetUseLocation                          ( bool value );

        bool                    GetUseRenderBefore                      () const;
        void                    SetUseRenderBefore                      ( bool value );

        class CPlugVisual*      GetVisual                               () const;
        void                    SetVisual                               ( class CPlugVisual* value );

        void                    Generate                                ();
        void                    UpdateBBox                              ();
