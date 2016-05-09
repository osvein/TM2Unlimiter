        enum { CLASSID = 0x06003000 };

        static CHmsItem*        CreateInstance ();

        bool                    GetBackgroundZClipCullBefore            () const;
        void                    SetBackgroundZClipCullBefore            ( bool value );

        bool                    GetCanFakeShadow                        () const;
        void                    SetCanFakeShadow                        ( bool value );

        bool                    GetCanSelfShadow                        () const;
        void                    SetCanSelfShadow                        ( bool value );

        bool                    GetCastShadowGrp0                       () const;
        void                    SetCastShadowGrp0                       ( bool value );

        bool                    GetCastShadowGrp1                       () const;
        void                    SetCastShadowGrp1                       ( bool value );

        bool                    GetCastShadowGrp2                       () const;
        void                    SetCastShadowGrp2                       ( bool value );

        bool                    GetCastShadowGrp3                       () const;
        void                    SetCastShadowGrp3                       ( bool value );

        bool                    GetCopyCameraTranslationXZ              () const;
        void                    SetCopyCameraTranslationXZ              ( bool value );

        class CHmsCorpus*       GetCorpus0                              () const;
        void                    SetCorpus0                              ( class CHmsCorpus* value );

        class CHmsCorpus*       GetCorpus1                              () const;
        void                    SetCorpus1                              ( class CHmsCorpus* value );

        uint                    GetCountShadowTexCasted                 () const;
        void                    SetCountShadowTexCasted                 ( uint value );

        bool                    GetIsBackground                         () const;
        void                    SetIsBackground                         ( bool value );

        bool                    GetIsForcePointDynamicCollisionResponse () const;
        void                    SetIsForcePointDynamicCollisionResponse ( bool value );

        bool                    GetIsStatic                             () const;
        void                    SetIsStatic                             ( bool value );

        bool                    GetIsVisible                            () const;
        void                    SetIsVisible                            ( bool value );

        bool                    GetIsVisionStatic                       () const;
        void                    SetIsVisionStatic                       ( bool value );

        class CHmsItemShadow*   GetItemShadow                           () const;
        void                    SetItemShadow                           ( class CHmsItemShadow* value );

        bool                    GetLightEGroup0                         () const;
        void                    SetLightEGroup0                         ( bool value );

        bool                    GetLightEGroup1                         () const;
        void                    SetLightEGroup1                         ( bool value );

        bool                    GetLightEGroup2                         () const;
        void                    SetLightEGroup2                         ( bool value );

        bool                    GetLightEGroup3                         () const;
        void                    SetLightEGroup3                         ( bool value );

        bool                    GetLightLensFlareEnable                 () const;
        void                    SetLightLensFlareEnable                 ( bool value );

        Array < class CHmsPortal* >& GetPortals                              () const;
        void                    SetPortals                              ( Array < class CHmsPortal* >& value );

        bool                    GetRecvShadowGrp0                       () const;
        void                    SetRecvShadowGrp0                       ( bool value );

        bool                    GetRecvShadowGrp1                       () const;
        void                    SetRecvShadowGrp1                       ( bool value );

        bool                    GetRecvShadowGrp2                       () const;
        void                    SetRecvShadowGrp2                       ( bool value );

        bool                    GetRecvShadowGrp3                       () const;
        void                    SetRecvShadowGrp3                       ( bool value );

        class CMwNod*           GetSceneMobil                           () const;
        void                    SetSceneMobil                           ( class CMwNod* value );

        class CPlugSolid*       GetSolid                                () const;
        void                    SetSolid                                ( class CPlugSolid* value );

        bool                    GetUseAccurateBBoxTest                  () const;
        void                    SetUseAccurateBBoxTest                  ( bool value );

        bool                    GetVIdBackground                        () const;
        void                    SetVIdBackground                        ( bool value );

        bool                    GetVIdGrassRGB                          () const;
        void                    SetVIdGrassRGB                          ( bool value );

        bool                    GetVIdHideAlways                        () const;
        void                    SetVIdHideAlways                        ( bool value );

        bool                    GetVIdHideOnlyDirect                    () const;
        void                    SetVIdHideOnlyDirect                    ( bool value );

        bool                    GetVIdHideWhenOverground                () const;
        void                    SetVIdHideWhenOverground                ( bool value );

        bool                    GetVIdHideWhenUnderground               () const;
        void                    SetVIdHideWhenUnderground               ( bool value );

        bool                    GetVIdInvisibleStopBounce               () const;
        void                    SetVIdInvisibleStopBounce               ( bool value );

        bool                    GetVIdLightGenP                         () const;
        void                    SetVIdLightGenP                         ( bool value );

        bool                    GetVIdOnlyRefracted                     () const;
        void                    SetVIdOnlyRefracted                     ( bool value );

        bool                    GetVIdReflectMirror                     () const;
        void                    SetVIdReflectMirror                     ( bool value );

        bool                    GetVIdReflected                         () const;
        void                    SetVIdReflected                         ( bool value );

        bool                    GetVIdRefracted                         () const;
        void                    SetVIdRefracted                         ( bool value );

        bool                    GetVIdVehicle                           () const;
        void                    SetVIdVehicle                           ( bool value );

        bool                    GetVIdViewDepBump                       () const;
        void                    SetVIdViewDepBump                       ( bool value );

        bool                    GetVIdViewDepOcclusion                  () const;
        void                    SetVIdViewDepOcclusion                  ( bool value );

        bool                    GetVIdViewDepWindIntens                 () const;
        void                    SetVIdViewDepWindIntens                 ( bool value );

