        enum { CLASSID = 0x0907E000 };

        static CPlugBitmapSampler* CreateInstance ();

        enum eTexAddressU
        {
            TEXADDRESSU_WRAP,
            TEXADDRESSU_MIRROR,
            TEXADDRESSU_CLAMP,
            TEXADDRESSU_BORDERSM3
        };
        static std::wstring     TexAddressUToString                     ( eTexAddressU value );
        static eTexAddressU     ParseTexAddressU                        ( const std::wstring& wstrName );

        enum eTexAddressV
        {
            TEXADDRESSV_WRAP,
            TEXADDRESSV_MIRROR,
            TEXADDRESSV_CLAMP,
            TEXADDRESSV_BORDERSM3
        };
        static std::wstring     TexAddressVToString                     ( eTexAddressV value );
        static eTexAddressV     ParseTexAddressV                        ( const std::wstring& wstrName );

        enum eTexAddressW
        {
            TEXADDRESSW_WRAP,
            TEXADDRESSW_MIRROR,
            TEXADDRESSW_CLAMP,
            TEXADDRESSW_BORDERSM3
        };
        static std::wstring     TexAddressWToString                     ( eTexAddressW value );
        static eTexAddressW     ParseTexAddressW                        ( const std::wstring& wstrName );

        enum eWantedFiltering
        {
            WANTEDFILTERING_POINT,
            WANTEDFILTERING_BILINEAR,
            WANTEDFILTERING_TRILINEAR,
            WANTEDFILTERING_ANISOTROPIC
        };
        static std::wstring     WantedFilteringToString                 ( eWantedFiltering value );
        static eWantedFiltering ParseWantedFiltering                    ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBitmap                               () const;
        void                    SetBitmap                               ( class CPlugBitmap* value );

        float                   GetBorderAlpha                          () const;
        void                    SetBorderAlpha                          ( float value );

        color                   GetBorderRGB                            () const;
        void                    SetBorderRGB                            ( color value );

        float                   GetFixedLodBias                         () const;
        void                    SetFixedLodBias                         ( float value );

        bool                    GetIsInternal                           () const;
        void                    SetIsInternal                           ( bool value );

        bool                    GetIsSharedByDevices                    () const;
        void                    SetIsSharedByDevices                    ( bool value );

        uint                    GetMaxMipLevel                          () const;
        void                    SetMaxMipLevel                          ( uint value );

        uint                    GetNbCompRequired                       () const;
        void                    SetNbCompRequired                       ( uint value );

        bool                    GetSrgbToLinear                         () const;
        void                    SetSrgbToLinear                         ( bool value );

        bool                    GetSynchNameWithShader                  () const;
        void                    SetSynchNameWithShader                  ( bool value );

        eTexAddressU            GetTexAddressU                          () const;
        void                    SetTexAddressU                          ( eTexAddressU value );

        eTexAddressV            GetTexAddressV                          () const;
        void                    SetTexAddressV                          ( eTexAddressV value );

        eTexAddressW            GetTexAddressW                          () const;
        void                    SetTexAddressW                          ( eTexAddressW value );

        float                   GetTreeMipStartZ                        () const;
        void                    SetTreeMipStartZ                        ( float value );

        bool                    GetTreeMipUseLodBias                    () const;
        void                    SetTreeMipUseLodBias                    ( bool value );

        bool                    GetUseBitmapDefaults                    () const;
        void                    SetUseBitmapDefaults                    ( bool value );

        eWantedFiltering        GetWantedFiltering                      () const;
        void                    SetWantedFiltering                      ( eWantedFiltering value );

