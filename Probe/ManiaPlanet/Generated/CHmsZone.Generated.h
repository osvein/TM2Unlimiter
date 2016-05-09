        enum { CLASSID = 0x06004000 };

        static CHmsZone*        CreateInstance ();

        enum eFogFormula
        {
            FOGFORMULA_NONE,
            FOGFORMULA_EXP,
            FOGFORMULA_EXP2,
            FOGFORMULA_LINEAR
        };
        static std::wstring     FogFormulaToString                      ( eFogFormula value );
        static eFogFormula      ParseFogFormula                         ( const std::wstring& wstrName );

        enum eFogSpace
        {
            FOGSPACE_CAMERAFARZ,
            FOGSPACE_WORLD
        };
        static std::wstring     FogSpaceToString                        ( eFogSpace value );
        static eFogSpace        ParseFogSpace                           ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBitmapCubeReflectHardSpecA           () const;
        void                    SetBitmapCubeReflectHardSpecA           ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapCubeReflectHdrAlpha2           () const;
        void                    SetBitmapCubeReflectHdrAlpha2           ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapWaterFog                       () const;
        void                    SetBitmapWaterFog                       ( class CPlugBitmap* value );

        List < class CHmsCorpus* >& GetCorpusCats                           () const;
        void                    SetCorpusCats                           ( List < class CHmsCorpus* >& value );

        List < class CHmsCorpusLight* >& GetCorpusLights                         () const;
        void                    SetCorpusLights                         ( List < class CHmsCorpusLight* >& value );

        List < nodptr<class CHmsDecalArray> >& GetDynamicDecalArrays                   () const;
        void                    SetDynamicDecalArrays                   ( List < nodptr<class CHmsDecalArray> >& value );

        List < nodptr<class CHmsLightArray> >& GetDynamicLightArrays                   () const;
        void                    SetDynamicLightArrays                   ( List < nodptr<class CHmsLightArray> >& value );

        class GxFog*            GetFog                                  () const;
        void                    SetFog                                  ( class GxFog* value );

        bool                    GetFogByVertex                          () const;
        void                    SetFogByVertex                          ( bool value );

        float                   GetFogExpDensity                        () const;
        void                    SetFogExpDensity                        ( float value );

        eFogFormula             GetFogFormula                           () const;
        void                    SetFogFormula                           ( eFogFormula value );

        float                   GetFogLinearEnd                         () const;
        void                    SetFogLinearEnd                         ( float value );

        float                   GetFogLinearStart                       () const;
        void                    SetFogLinearStart                       ( float value );

        color                   GetFogRGB                               () const;
        void                    SetFogRGB                               ( color value );

        eFogSpace               GetFogSpace                             () const;
        void                    SetFogSpace                             ( eFogSpace value );

        class CHmsCorpus*       GetGeomInstancingCorpus                 () const;
        void                    SetGeomInstancingCorpus                 ( class CHmsCorpus* value );

        bool                    GetIVIdMaskBackground                   () const;
        void                    SetIVIdMaskBackground                   ( bool value );

        bool                    GetIVIdMaskGrassRGB                     () const;
        void                    SetIVIdMaskGrassRGB                     ( bool value );

        bool                    GetIVIdMaskHideAlways                   () const;
        void                    SetIVIdMaskHideAlways                   ( bool value );

        bool                    GetIVIdMaskHideOnlyDirect               () const;
        void                    SetIVIdMaskHideOnlyDirect               ( bool value );

        bool                    GetIVIdMaskHideWhenOverground           () const;
        void                    SetIVIdMaskHideWhenOverground           ( bool value );

        bool                    GetIVIdMaskHideWhenUnderground          () const;
        void                    SetIVIdMaskHideWhenUnderground          ( bool value );

        bool                    GetIVIdMaskInvisibleStopBounce          () const;
        void                    SetIVIdMaskInvisibleStopBounce          ( bool value );

        bool                    GetIVIdMaskLightGenP                    () const;
        void                    SetIVIdMaskLightGenP                    ( bool value );

        bool                    GetIVIdMaskOnlyRefracted                () const;
        void                    SetIVIdMaskOnlyRefracted                ( bool value );

        bool                    GetIVIdMaskReflectMirror                () const;
        void                    SetIVIdMaskReflectMirror                ( bool value );

        bool                    GetIVIdMaskReflected                    () const;
        void                    SetIVIdMaskReflected                    ( bool value );

        bool                    GetIVIdMaskRefracted                    () const;
        void                    SetIVIdMaskRefracted                    ( bool value );

        bool                    GetIVIdMaskVehicle                      () const;
        void                    SetIVIdMaskVehicle                      ( bool value );

        bool                    GetIVIdMaskViewDepBump                  () const;
        void                    SetIVIdMaskViewDepBump                  ( bool value );

        bool                    GetIVIdMaskViewDepOcclusion             () const;
        void                    SetIVIdMaskViewDepOcclusion             ( bool value );

        bool                    GetIVIdMaskViewDepWindIntens            () const;
        void                    SetIVIdMaskViewDepWindIntens            ( bool value );

        bool                    GetIVIdRefBackground                    () const;
        void                    SetIVIdRefBackground                    ( bool value );

        bool                    GetIVIdRefGrassRGB                      () const;
        void                    SetIVIdRefGrassRGB                      ( bool value );

        bool                    GetIVIdRefHideAlways                    () const;
        void                    SetIVIdRefHideAlways                    ( bool value );

        bool                    GetIVIdRefHideOnlyDirect                () const;
        void                    SetIVIdRefHideOnlyDirect                ( bool value );

        bool                    GetIVIdRefHideWhenOverground            () const;
        void                    SetIVIdRefHideWhenOverground            ( bool value );

        bool                    GetIVIdRefHideWhenUnderground           () const;
        void                    SetIVIdRefHideWhenUnderground           ( bool value );

        bool                    GetIVIdRefInvisibleStopBounce           () const;
        void                    SetIVIdRefInvisibleStopBounce           ( bool value );

        bool                    GetIVIdRefLightGenP                     () const;
        void                    SetIVIdRefLightGenP                     ( bool value );

        bool                    GetIVIdRefOnlyRefracted                 () const;
        void                    SetIVIdRefOnlyRefracted                 ( bool value );

        bool                    GetIVIdRefReflectMirror                 () const;
        void                    SetIVIdRefReflectMirror                 ( bool value );

        bool                    GetIVIdRefReflected                     () const;
        void                    SetIVIdRefReflected                     ( bool value );

        bool                    GetIVIdRefRefracted                     () const;
        void                    SetIVIdRefRefracted                     ( bool value );

        bool                    GetIVIdRefVehicle                       () const;
        void                    SetIVIdRefVehicle                       ( bool value );

        bool                    GetIVIdRefViewDepBump                   () const;
        void                    SetIVIdRefViewDepBump                   ( bool value );

        bool                    GetIVIdRefViewDepOcclusion              () const;
        void                    SetIVIdRefViewDepOcclusion              ( bool value );

        bool                    GetIVIdRefViewDepWindIntens             () const;
        void                    SetIVIdRefViewDepWindIntens             ( bool value );

        bool                    GetIsVisible                            () const;
        void                    SetIsVisible                            ( bool value );

        float                   GetLocalLightScale                      () const;
        void                    SetLocalLightScale                      ( float value );

        bool                    GetMRIsForced                           () const;
        void                    SetMRIsForced                           ( bool value );

        bool                    GetMRMaskWater                          () const;
        void                    SetMRMaskWater                          ( bool value );

        Vec3D                   GetMRNormal                             () const;
        void                    SetMRNormal                             ( Vec3D value );

        Vec3D                   GetMRPoint                              () const;
        void                    SetMRPoint                              ( Vec3D value );

        float                   GetMRTileH                              () const;
        void                    SetMRTileH                              ( float value );

        List < nodptr<class CHmsPrecalcRender> >& GetPrecalcRenders                       () const;
        void                    SetPrecalcRenders                       ( List < nodptr<class CHmsPrecalcRender> >& value );

        bool                    GetSVIdMaskBackground                   () const;
        void                    SetSVIdMaskBackground                   ( bool value );

        bool                    GetSVIdMaskGrassRGB                     () const;
        void                    SetSVIdMaskGrassRGB                     ( bool value );

        bool                    GetSVIdMaskHideAlways                   () const;
        void                    SetSVIdMaskHideAlways                   ( bool value );

        bool                    GetSVIdMaskHideOnlyDirect               () const;
        void                    SetSVIdMaskHideOnlyDirect               ( bool value );

        bool                    GetSVIdMaskHideWhenOverground           () const;
        void                    SetSVIdMaskHideWhenOverground           ( bool value );

        bool                    GetSVIdMaskHideWhenUnderground          () const;
        void                    SetSVIdMaskHideWhenUnderground          ( bool value );

        bool                    GetSVIdMaskInvisibleStopBounce          () const;
        void                    SetSVIdMaskInvisibleStopBounce          ( bool value );

        bool                    GetSVIdMaskLightGenP                    () const;
        void                    SetSVIdMaskLightGenP                    ( bool value );

        bool                    GetSVIdMaskOnlyRefracted                () const;
        void                    SetSVIdMaskOnlyRefracted                ( bool value );

        bool                    GetSVIdMaskReflectMirror                () const;
        void                    SetSVIdMaskReflectMirror                ( bool value );

        bool                    GetSVIdMaskReflected                    () const;
        void                    SetSVIdMaskReflected                    ( bool value );

        bool                    GetSVIdMaskRefracted                    () const;
        void                    SetSVIdMaskRefracted                    ( bool value );

        bool                    GetSVIdMaskVehicle                      () const;
        void                    SetSVIdMaskVehicle                      ( bool value );

        bool                    GetSVIdMaskViewDepBump                  () const;
        void                    SetSVIdMaskViewDepBump                  ( bool value );

        bool                    GetSVIdMaskViewDepOcclusion             () const;
        void                    SetSVIdMaskViewDepOcclusion             ( bool value );

        bool                    GetSVIdMaskViewDepWindIntens            () const;
        void                    SetSVIdMaskViewDepWindIntens            ( bool value );

        bool                    GetSVIdRefBackground                    () const;
        void                    SetSVIdRefBackground                    ( bool value );

        bool                    GetSVIdRefGrassRGB                      () const;
        void                    SetSVIdRefGrassRGB                      ( bool value );

        bool                    GetSVIdRefHideAlways                    () const;
        void                    SetSVIdRefHideAlways                    ( bool value );

        bool                    GetSVIdRefHideOnlyDirect                () const;
        void                    SetSVIdRefHideOnlyDirect                ( bool value );

        bool                    GetSVIdRefHideWhenOverground            () const;
        void                    SetSVIdRefHideWhenOverground            ( bool value );

        bool                    GetSVIdRefHideWhenUnderground           () const;
        void                    SetSVIdRefHideWhenUnderground           ( bool value );

        bool                    GetSVIdRefInvisibleStopBounce           () const;
        void                    SetSVIdRefInvisibleStopBounce           ( bool value );

        bool                    GetSVIdRefLightGenP                     () const;
        void                    SetSVIdRefLightGenP                     ( bool value );

        bool                    GetSVIdRefOnlyRefracted                 () const;
        void                    SetSVIdRefOnlyRefracted                 ( bool value );

        bool                    GetSVIdRefReflectMirror                 () const;
        void                    SetSVIdRefReflectMirror                 ( bool value );

        bool                    GetSVIdRefReflected                     () const;
        void                    SetSVIdRefReflected                     ( bool value );

        bool                    GetSVIdRefRefracted                     () const;
        void                    SetSVIdRefRefracted                     ( bool value );

        bool                    GetSVIdRefVehicle                       () const;
        void                    SetSVIdRefVehicle                       ( bool value );

        bool                    GetSVIdRefViewDepBump                   () const;
        void                    SetSVIdRefViewDepBump                   ( bool value );

        bool                    GetSVIdRefViewDepOcclusion              () const;
        void                    SetSVIdRefViewDepOcclusion              ( bool value );

        bool                    GetSVIdRefViewDepWindIntens             () const;
        void                    SetSVIdRefViewDepWindIntens             ( bool value );

        List < nodptr<class CHmsSoundSource> >& GetSounds                               () const;
        void                    SetSounds                               ( List < nodptr<class CHmsSoundSource> >& value );

        List < nodptr<class CHmsDecalArray> >& GetStaticDecalArrays                    () const;
        void                    SetStaticDecalArrays                    ( List < nodptr<class CHmsDecalArray> >& value );

        class CMwNod*           GetUserData                             () const;
        void                    SetUserData                             ( class CMwNod* value );

        float                   GetVPackerAverageKVertPerPack           () const;
        void                    SetVPackerAverageKVertPerPack           ( float value );

        float                   GetVPackerAverageObjectPerCell          () const;
        void                    SetVPackerAverageObjectPerCell          ( float value );

        float                   GetVPackerAveragePackPerCell            () const;
        void                    SetVPackerAveragePackPerCell            ( float value );

        uint                    GetVPackerNbUnpackableVSpace            () const;
        void                    SetVPackerNbUnpackableVSpace            ( uint value );

        uint                    GetVPackerObjectInside                  () const;
        void                    SetVPackerObjectInside                  ( uint value );

        uint                    GetVPackerObjectOutside                 () const;
        void                    SetVPackerObjectOutside                 ( uint value );

        float                   GetVPackerPercentCellUsed               () const;
        void                    SetVPackerPercentCellUsed               ( float value );

        float                   GetVPackerPercentObjectOutside          () const;
        void                    SetVPackerPercentObjectOutside          ( float value );

        uint                    GetVPackerPowerX                        () const;
        void                    SetVPackerPowerX                        ( uint value );

        uint                    GetVPackerPowerY                        () const;
        void                    SetVPackerPowerY                        ( uint value );

        uint                    GetVPackerPowerZ                        () const;
        void                    SetVPackerPowerZ                        ( uint value );

        void                    VPackerForceBBoxUpdate                  ();
        void                    VPackerLogUsageStats                    ();
