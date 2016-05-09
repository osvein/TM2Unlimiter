        enum { CLASSID = 0x0303A000 };

        static CGameCtnDecorationMood* CreateInstance ();

        enum eToneMapFilmCurve
        {
            TONEMAPFILMCURVE_DISABLE,
            TONEMAPFILMCURVE_PRESET1,
            TONEMAPFILMCURVE_PRESET2,
            TONEMAPFILMCURVE_PRESET3
        };
        static std::wstring     ToneMapFilmCurveToString                ( eToneMapFilmCurve value );
        static eToneMapFilmCurve ParseToneMapFilmCurve                   ( const std::wstring& wstrName );

        bool                    GetBackgroundIsLocallyLighted           () const;
        void                    SetBackgroundIsLocallyLighted           ( bool value );

        class CFuncCloudsSolids* GetCloudsSolids                         () const;
        void                    SetCloudsSolids                         ( class CFuncCloudsSolids* value );

        float                   GetDeltaGMT                             () const;
        void                    SetDeltaGMT                             ( float value );

        bool                    GetEnableStars                          () const;
        void                    SetEnableStars                          ( bool value );

        class CFuncKeysReal*    GetFxBloom_FidFuncIntensAtHdrNorm       () const;
        void                    SetFxBloom_FidFuncIntensAtHdrNorm       ( class CFuncKeysReal* value );

        class CPlugFxLightning* GetFxLightning                          () const;
        void                    SetFxLightning                          ( class CPlugFxLightning* value );

        class CPlugFxWindOnDecal* GetFxWindOnDecal                        () const;
        void                    SetFxWindOnDecal                        ( class CPlugFxWindOnDecal* value );

        class CPlugFxWindOnTreeSprite* GetFxWindOnTreeSprite                   () const;
        void                    SetFxWindOnTreeSprite                   ( class CPlugFxWindOnTreeSprite* value );

        class CHmsAmbientOcc*   GetHmsAmbientOcc                        () const;
        void                    SetHmsAmbientOcc                        ( class CHmsAmbientOcc* value );

        class CHmsLightMap*     GetHmsLightMap                          () const;
        void                    SetHmsLightMap                          ( class CHmsLightMap* value );

        bool                    GetIsNight                              () const;
        void                    SetIsNight                              ( bool value );

        float                   GetLatitude                             () const;
        void                    SetLatitude                             ( float value );

        float                   GetLocalLightScale                      () const;
        void                    SetLocalLightScale                      ( float value );

        float                   GetLongitude                            () const;
        void                    SetLongitude                            ( float value );

        class CSystemFidsFolder* GetRemapFolder                          () const;
        void                    SetRemapFolder                          ( class CSystemFidsFolder* value );

        float                   GetRemappedStartDayTime                 () const;
        void                    SetRemappedStartDayTime                 ( float value );

        class CGameSkin*        GetRemapping                            () const;
        void                    SetRemapping                            ( class CGameSkin* value );

        float                   GetShadowCarIntensity                   () const;
        void                    SetShadowCarIntensity                   ( float value );

        uint                    GetShadowCountCarHuman                  () const;
        void                    SetShadowCountCarHuman                  ( uint value );

        uint                    GetShadowCountCarOpponent               () const;
        void                    SetShadowCountCarOpponent               ( uint value );

        bool                    GetShadowScene                          () const;
        void                    SetShadowScene                          ( bool value );

        bool                    GetSolidLightAreSkinned                 () const;
        void                    SetSolidLightAreSkinned                 ( bool value );

        float                   GetSunMoonIntensity                     () const;
        void                    SetSunMoonIntensity                     ( float value );

        Vec3D                   GetTech3Bloom                           () const;
        void                    SetTech3Bloom                           ( Vec3D value );

        Vec3D                   GetTech3SpecularFake_ExpScaleMax        () const;
        void                    SetTech3SpecularFake_ExpScaleMax        ( Vec3D value );

        Vec2D                   GetTech3SpecularLocal                   () const;
        void                    SetTech3SpecularLocal                   ( Vec2D value );

        Vec4D                   GetTech3ToneMapAutoExp                  () const;
        void                    SetTech3ToneMapAutoExp                  ( Vec4D value );

        StringA                 GetTimeSunFall                          () const;
        void                    SetTimeSunFall                          ( StringA value );

        StringA                 GetTimeSunRise                          () const;
        void                    SetTimeSunRise                          ( StringA value );

        class CFuncKeysReal*    GetToneMapAutoExp_FidAvgLumiToKeyValue  () const;
        void                    SetToneMapAutoExp_FidAvgLumiToKeyValue  ( class CFuncKeysReal* value );

        float                   GetToneMapExposureStaticBase            () const;
        void                    SetToneMapExposureStaticBase            ( float value );

        eToneMapFilmCurve       GetToneMapFilmCurve                     () const;
        void                    SetToneMapFilmCurve                     ( eToneMapFilmCurve value );

        StringA                 GetToneMapping                          () const;
        void                    SetToneMapping                          ( StringA value );

