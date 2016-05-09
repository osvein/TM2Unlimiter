        enum { CLASSID = 0x04001000 };

        static GxLight*         CreateInstance ();

        color                   GetColor                                () const;
        void                    SetColor                                ( color value );

        float                   GetDiffuseIntensity                     () const;
        void                    SetDiffuseIntensity                     ( float value );

        bool                    GetDoLighting                           () const;
        void                    SetDoLighting                           ( bool value );

        bool                    GetDoSpecular                           () const;
        void                    SetDoSpecular                           ( bool value );

        bool                    GetEnableGroup0                         () const;
        void                    SetEnableGroup0                         ( bool value );

        bool                    GetEnableGroup1                         () const;
        void                    SetEnableGroup1                         ( bool value );

        bool                    GetEnableGroup2                         () const;
        void                    SetEnableGroup2                         ( bool value );

        bool                    GetEnableGroup3                         () const;
        void                    SetEnableGroup3                         ( bool value );

        float                   GetFlareIntensity                       () const;
        void                    SetFlareIntensity                       ( float value );

        bool                    GetHasLensFlare                         () const;
        void                    SetHasLensFlare                         ( bool value );

        bool                    GetHasSprite                            () const;
        void                    SetHasSprite                            ( bool value );

        bool                    GetIgnoreLocalScale                     () const;
        void                    SetIgnoreLocalScale                     ( bool value );

        float                   GetIntensity                            () const;
        void                    SetIntensity                            ( float value );

        bool                    GetIsInversed                           () const;
        void                    SetIsInversed                           ( bool value );

        bool                    GetIsShadowGen                          () const;
        void                    SetIsShadowGen                          ( bool value );

        bool                    GetLightMapOnly                         () const;
        void                    SetLightMapOnly                         ( bool value );

        class CMwNod*           GetPlugLight                            () const;
        void                    SetPlugLight                            ( class CMwNod* value );

        float                   GetShadowIntensity                      () const;
        void                    SetShadowIntensity                      ( float value );

        color                   GetShadowRGB                            () const;
        void                    SetShadowRGB                            ( color value );

        float                   GetSpecularIntens                       () const;
        void                    SetSpecularIntens                       ( float value );

        float                   GetSpecularPower                        () const;
        void                    SetSpecularPower                        ( float value );

