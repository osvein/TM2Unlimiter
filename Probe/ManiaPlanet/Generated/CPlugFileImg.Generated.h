        enum { CLASSID = 0x09025000 };

        static CPlugFileImg*    CreateInstance ();

        enum eDimension
        {
            DIMENSION_1D,
            DIMENSION_2D,
            DIMENSION_3D,
            DIMENSION_CUBE
        };
        static std::wstring     DimensionToString                       ( eDimension value );
        static eDimension       ParseDimension                          ( const std::wstring& wstrName );

        enum eFormat
        {
            FORMAT_BGRA,
            FORMAT_BC1_DXT1,
            FORMAT_BC2_DXT2_PM,
            FORMAT_BC2_DXT3,
            FORMAT_BC3_DXT4_PM,
            FORMAT_BC3_DXT5,
            FORMAT_RGBA16,
            FORMAT_RGBA16F,
            FORMAT_RGBA32F,
            FORMAT_FILEJPG,
            FORMAT_BC4_ATI1N,
            FORMAT_BC5_ATI2N
        };
        static std::wstring     FormatToString                          ( eFormat value );
        static eFormat          ParseFormat                             ( const std::wstring& wstrName );

        uint                    GetDepth                                () const;
        void                    SetDepth                                ( uint value );

        eDimension              GetDimension                            () const;
        void                    SetDimension                            ( eDimension value );

        eFormat                 GetFormat                               () const;
        void                    SetFormat                               ( eFormat value );

        uint                    GetHeight                               () const;
        void                    SetHeight                               ( uint value );

        bool                    GetIsInSystemMemory                     () const;
        void                    SetIsInSystemMemory                     ( bool value );

        uint                    GetNbComp                               () const;
        void                    SetNbComp                               ( uint value );

        bool                    GetOriginIsTop                          () const;
        void                    SetOriginIsTop                          ( bool value );

        uint                    GetSystemKb                             () const;
        void                    SetSystemKb                             ( uint value );

        uint                    GetWidth                                () const;
        void                    SetWidth                                ( uint value );

        uint                    GetcMipLevel                            () const;
        void                    SetcMipLevel                            ( uint value );

        uint                    GetcMipLevelSkipAtLoad                  () const;
        void                    SetcMipLevelSkipAtLoad                  ( uint value );

        void                    ScaleToPowerOfTwo                       ( bool bShrink, uint uiTexFilter );
