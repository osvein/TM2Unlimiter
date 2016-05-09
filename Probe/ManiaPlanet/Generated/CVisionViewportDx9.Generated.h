        enum { CLASSID = 0x0C00A000 };

        static CVisionViewportDx9* CreateInstance ();

        enum eCpuExtSupported
        {
            CPUEXTSUPPORTED_NONE,
            CPUEXTSUPPORTED_SSE,
            CPUEXTSUPPORTED_SSE2
        };
        static std::wstring     CpuExtSupportedToString                 ( eCpuExtSupported value );
        static eCpuExtSupported ParseCpuExtSupported                    ( const std::wstring& wstrName );

        enum eShadowDepthFilter
        {
            SHADOWDEPTHFILTER_POINT,
            SHADOWDEPTHFILTER_BILINEAR,
            SHADOWDEPTHFILTER_TRILINEAR,
            SHADOWDEPTHFILTER_ANISOTROPIC
        };
        static std::wstring     ShadowDepthFilterToString               ( eShadowDepthFilter value );
        static eShadowDepthFilter ParseShadowDepthFilter                  ( const std::wstring& wstrName );

        class CPlugShader*      GetBenchShader                          () const;
        void                    SetBenchShader                          ( class CPlugShader* value );

        eCpuExtSupported        GetCpuExtSupported                      () const;
        void                    SetCpuExtSupported                      ( eCpuExtSupported value );

        class CDx9DeviceCaps*   GetDeviceCaps                           () const;
        void                    SetDeviceCaps                           ( class CDx9DeviceCaps* value );

        List < StringA >&       GetPerfTimeStrs                         () const;
        void                    SetPerfTimeStrs                         ( List < StringA >& value );

        float                   GetPointSizeMax                         () const;
        void                    SetPointSizeMax                         ( float value );

        float                   GetPointSizeMin                         () const;
        void                    SetPointSizeMin                         ( float value );

        float                   GetShadowDepthBiasFactor                () const;
        void                    SetShadowDepthBiasFactor                ( float value );

        eShadowDepthFilter      GetShadowDepthFilter                    () const;
        void                    SetShadowDepthFilter                    ( eShadowDepthFilter value );

        float                   GetShadowDepthSlopeFactor               () const;
        void                    SetShadowDepthSlopeFactor               ( float value );

        void                    GetPerformance                          ();
