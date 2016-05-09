        enum { CLASSID = 0x09058000 };

        static CPlugBitmapRenderHemisphere* CreateInstance ();

        enum eHemiLayout
        {
            HEMILAYOUT_1,
            HEMILAYOUT_2_4_16
        };
        static std::wstring     HemiLayoutToString                      ( eHemiLayout value );
        static eHemiLayout      ParseHemiLayout                         ( const std::wstring& wstrName );

        bool                    GetAutoScaleWithPower                   () const;
        void                    SetAutoScaleWithPower                   ( bool value );

        eHemiLayout             GetHemiLayout                           () const;
        void                    SetHemiLayout                           ( eHemiLayout value );

        float                   GetSpecularPower0                       () const;
        void                    SetSpecularPower0                       ( float value );

        float                   GetSpecularPower1                       () const;
        void                    SetSpecularPower1                       ( float value );

        bool                    Getm_UseLightDir                        () const;
        void                    Setm_UseLightDir                        ( bool value );

