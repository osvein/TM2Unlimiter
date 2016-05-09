        enum { CLASSID = 0x04002000 };

        static GxLightBall*     CreateInstance ();

        enum eAttenuationType
        {
            ATTENUATIONTYPE_HYPERTNL,
            ATTENUATIONTYPE_1_D_R_2,
            ATTENUATIONTYPE_HYPERNORM2,
            ATTENUATIONTYPE_HDRRADIUS
        };
        static std::wstring     AttenuationTypeToString                 ( eAttenuationType value );
        static eAttenuationType ParseAttenuationType                    ( const std::wstring& wstrName );

        enum eTweakHN2
        {
            TWEAKHN2_NONE,
            TWEAKHN2_INTENS_DERIVAT0,
            TWEAKHN2_1_D_2,
            TWEAKHN2_1_D_2_K
        };
        static std::wstring     TweakHN2ToString                        ( eTweakHN2 value );
        static eTweakHN2        ParseTweakHN2                           ( const std::wstring& wstrName );

        color                   GetAmbientRGB                           () const;
        void                    SetAmbientRGB                           ( color value );

        float                   GetAttHTnLR                             () const;
        void                    SetAttHTnLR                             ( float value );

        float                   GetAttHTnLR2                            () const;
        void                    SetAttHTnLR2                            ( float value );

        float                   GetAttHyper2DerivAt0                    () const;
        void                    SetAttHyper2DerivAt0                    ( float value );

        float                   GetAttHyper2Tension                     () const;
        void                    SetAttHyper2Tension                     ( float value );

        eAttenuationType        GetAttenuationType                      () const;
        void                    SetAttenuationType                      ( eAttenuationType value );

        bool                    GetCustomRadiusFlare                    () const;
        void                    SetCustomRadiusFlare                    ( bool value );

        bool                    GetCustomRadiusIndex                    () const;
        void                    SetCustomRadiusIndex                    ( bool value );

        bool                    GetCustomRadiusShadow                   () const;
        void                    SetCustomRadiusShadow                   ( bool value );

        bool                    GetCustomRadiusSpecular                 () const;
        void                    SetCustomRadiusSpecular                 ( bool value );

        float                   GetEmittingCylinderLenZ                 () const;
        void                    SetEmittingCylinderLenZ                 ( float value );

        float                   GetEmittingRadius                       () const;
        void                    SetEmittingRadius                       ( float value );

        float                   GetRadius                               () const;
        void                    SetRadius                               ( float value );

        float                   GetRadiusFlare                          () const;
        void                    SetRadiusFlare                          ( float value );

        float                   GetRadiusIndex                          () const;
        void                    SetRadiusIndex                          ( float value );

        float                   GetRadiusShadow                         () const;
        void                    SetRadiusShadow                         ( float value );

        float                   GetRadiusSpecular                       () const;
        void                    SetRadiusSpecular                       ( float value );

        eTweakHN2               GetTweakHN2                             () const;
        void                    SetTweakHN2                             ( eTweakHN2 value );

