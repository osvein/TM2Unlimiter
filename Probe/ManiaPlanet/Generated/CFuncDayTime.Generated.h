        enum { CLASSID = 0x05045000 };

        static CFuncDayTime*    CreateInstance ();

        color                   GetCloudsX2maxRgbLinear                 () const;
        void                    SetCloudsX2maxRgbLinear                 ( color value );

        float                   GetCloudsX2maxRgbScale                  () const;
        void                    SetCloudsX2maxRgbScale                  ( float value );

        color                   GetCloudsX2minRgbLinear                 () const;
        void                    SetCloudsX2minRgbLinear                 ( color value );

        float                   GetCloudsX2minRgbScale                  () const;
        void                    SetCloudsX2minRgbScale                  ( float value );

        float                   GetFxSmSelfIllumScaleGamePlay           () const;
        void                    SetFxSmSelfIllumScaleGamePlay           ( float value );

        float                   GetHdrSunAtmo1Power                     () const;
        void                    SetHdrSunAtmo1Power                     ( float value );

        color                   GetHdrSunAtmo1RgbLinear                 () const;
        void                    SetHdrSunAtmo1RgbLinear                 ( color value );

        float                   GetHdrSunAtmo1Scale                     () const;
        void                    SetHdrSunAtmo1Scale                     ( float value );

        float                   GetHdrSunAtmo2Power                     () const;
        void                    SetHdrSunAtmo2Power                     ( float value );

        color                   GetHdrSunAtmo2RgbLinear                 () const;
        void                    SetHdrSunAtmo2RgbLinear                 ( color value );

        float                   GetHdrSunAtmo2Scale                     () const;
        void                    SetHdrSunAtmo2Scale                     ( float value );

        bool                    GetHdrSunAtmoUseRgb                     () const;
        void                    SetHdrSunAtmoUseRgb                     ( bool value );

        float                   GetHdrSunPower                          () const;
        void                    SetHdrSunPower                          ( float value );

        float                   GetSunThroughCloudIntens                () const;
        void                    SetSunThroughCloudIntens                ( float value );

