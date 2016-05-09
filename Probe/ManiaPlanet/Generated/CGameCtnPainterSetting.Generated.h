        enum { CLASSID = 0x03048000 };

        static CGameCtnPainterSetting* CreateInstance ();

        class CPlugBitmap*      GetBitmapBrushFade                      () const;
        void                    SetBitmapBrushFade                      ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapStickerFade                    () const;
        void                    SetBitmapStickerFade                    ( class CPlugBitmap* value );

        class CGameControlCameraOrbital3d* GetCamera                               () const;
        void                    SetCamera                               ( class CGameControlCameraOrbital3d* value );

        bool                    GetCameraBottomClipGeometry             () const;
        void                    SetCameraBottomClipGeometry             ( bool value );

        float                   GetCameraBottomIn_m1p1                  () const;
        void                    SetCameraBottomIn_m1p1                  ( float value );

        class CPlugFileImg*     GetImageSubObjectAllIcon                () const;
        void                    SetImageSubObjectAllIcon                ( class CPlugFileImg* value );

        class CPlugMaterial*    GetMaterialFillColor                    () const;
        void                    SetMaterialFillColor                    ( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterialLayerBlend                   () const;
        void                    SetMaterialLayerBlend                   ( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterialLayerModulate                () const;
        void                    SetMaterialLayerModulate                ( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterialPaint                        () const;
        void                    SetMaterialPaint                        ( class CPlugMaterial* value );

        Vec2D                   GetMinMaxScaleBrush                     () const;
        void                    SetMinMaxScaleBrush                     ( Vec2D value );

        Vec2D                   GetMinMaxScaleBrushText                 () const;
        void                    SetMinMaxScaleBrushText                 ( Vec2D value );

        Vec2D                   GetMinMaxScaleFill                      () const;
        void                    SetMinMaxScaleFill                      ( Vec2D value );

        Vec2D                   GetMinMaxScaleSticker                   () const;
        void                    SetMinMaxScaleSticker                   ( Vec2D value );

        Vec2D                   GetMinMaxScaleStickerText               () const;
        void                    SetMinMaxScaleStickerText               ( Vec2D value );

        float                   GetMouseZDeltaRot                       () const;
        void                    SetMouseZDeltaRot                       ( float value );

        float                   GetMouseZDeltaScale                     () const;
        void                    SetMouseZDeltaScale                     ( float value );

        class CSystemFidsFolder* GetRemapFolder                          () const;
        void                    SetRemapFolder                          ( class CSystemFidsFolder* value );

        class CGameSkin*        GetRemapping                            () const;
        void                    SetRemapping                            ( class CGameSkin* value );

        List < nodptr<class CScene3d> >& GetScenesFids                           () const;
        void                    SetScenesFids                           ( List < nodptr<class CScene3d> >& value );

        void                    SetDefaultCameraSettings                ();
