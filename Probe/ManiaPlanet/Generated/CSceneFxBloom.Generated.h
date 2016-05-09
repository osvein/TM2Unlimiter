        enum { CLASSID = 0x0A03B000 };

        static CSceneFxBloom*   CreateInstance ();

        enum eRadialInput
        {
            RADIALINPUT_NONE,
            RADIALINPUT_2D,
            RADIALINPUT_3D
        };
        static std::wstring     RadialInputToString                     ( eRadialInput value );
        static eRadialInput     ParseRadialInput                        ( const std::wstring& wstrName );

        uint                    GetBlurSize                             () const;
        void                    SetBlurSize                             ( uint value );

        float                   GetDataBlend                            () const;
        void                    SetDataBlend                            ( float value );

        List < nodptr<class CSceneFxBloomData> >& GetDatas                                () const;
        void                    SetDatas                                ( List < nodptr<class CSceneFxBloomData> >& value );

        bool                    GetDualData                             () const;
        void                    SetDualData                             ( bool value );

        float                   GetIntensity                            () const;
        void                    SetIntensity                            ( float value );

        eRadialInput            GetRadialInput                          () const;
        void                    SetRadialInput                          ( eRadialInput value );

        float                   GetRadialIntens                         () const;
        void                    SetRadialIntens                         ( float value );

        Vec2D                   GetRadialOffset2d                       () const;
        void                    SetRadialOffset2d                       ( Vec2D value );

        Vec3D                   GetRadialOffset3d                       () const;
        void                    SetRadialOffset3d                       ( Vec3D value );

        float                   GetRadialRadius2d                       () const;
        void                    SetRadialRadius2d                       ( float value );

        float                   GetRadialRadius3d                       () const;
        void                    SetRadialRadius3d                       ( float value );

        uint                    Getm_RadialProjQuality                  () const;
        void                    Setm_RadialProjQuality                  ( uint value );

