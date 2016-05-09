        enum { CLASSID = 0x09026000 };

        static CPlugShaderApply* CreateInstance ();

        enum eAlphaBlendDst
        {
            ALPHABLENDDST_0,
            ALPHABLENDDST_1,
            ALPHABLENDDST_SRCCOLOR,
            ALPHABLENDDST_1_SRCCOLOR,
            ALPHABLENDDST_SRCALPHA,
            ALPHABLENDDST_1_SRCALPHA,
            ALPHABLENDDST_DSTCOLOR,
            ALPHABLENDDST_1_DSTCOLOR,
            ALPHABLENDDST_DSTALPHA,
            ALPHABLENDDST_1_DSTALPHA,
            ALPHABLENDDST_SRCALPHASAT,
            ALPHABLENDDST_CONSTANT,
            ALPHABLENDDST_1_CONSTANT
        };
        static std::wstring     AlphaBlendDstToString                   ( eAlphaBlendDst value );
        static eAlphaBlendDst   ParseAlphaBlendDst                      ( const std::wstring& wstrName );

        enum eAlphaBlendOp
        {
            ALPHABLENDOP_ADD,
            ALPHABLENDOP_SRC_DST,
            ALPHABLENDOP_DST_SRC,
            ALPHABLENDOP_MIN,
            ALPHABLENDOP_MAX
        };
        static std::wstring     AlphaBlendOpToString                    ( eAlphaBlendOp value );
        static eAlphaBlendOp    ParseAlphaBlendOp                       ( const std::wstring& wstrName );

        enum eAlphaBlendSrc
        {
            ALPHABLENDSRC_0,
            ALPHABLENDSRC_1,
            ALPHABLENDSRC_SRCCOLOR,
            ALPHABLENDSRC_1_SRCCOLOR,
            ALPHABLENDSRC_SRCALPHA,
            ALPHABLENDSRC_1_SRCALPHA,
            ALPHABLENDSRC_DSTCOLOR,
            ALPHABLENDSRC_1_DSTCOLOR,
            ALPHABLENDSRC_DSTALPHA,
            ALPHABLENDSRC_1_DSTALPHA,
            ALPHABLENDSRC_SRCALPHASAT,
            ALPHABLENDSRC_CONSTANT,
            ALPHABLENDSRC_1_CONSTANT
        };
        static std::wstring     AlphaBlendSrcToString                   ( eAlphaBlendSrc value );
        static eAlphaBlendSrc   ParseAlphaBlendSrc                      ( const std::wstring& wstrName );

        enum eAlphaCmpPass
        {
            ALPHACMPPASS_0,
            ALPHACMPPASS_1,
            ALPHACMPPASS_2,
            ALPHACMPPASS_3,
            ALPHACMPPASS_4,
            ALPHACMPPASS_5,
            ALPHACMPPASS_ALWAYS_PASS
        };
        static std::wstring     AlphaCmpPassToString                    ( eAlphaCmpPass value );
        static eAlphaCmpPass    ParseAlphaCmpPass                       ( const std::wstring& wstrName );

        enum eBlendDst
        {
            BLENDDST_0,
            BLENDDST_1,
            BLENDDST_SRCCOLOR,
            BLENDDST_1_SRCCOLOR,
            BLENDDST_SRCALPHA,
            BLENDDST_1_SRCALPHA,
            BLENDDST_DSTCOLOR,
            BLENDDST_1_DSTCOLOR,
            BLENDDST_DSTALPHA,
            BLENDDST_1_DSTALPHA,
            BLENDDST_SRCALPHASAT,
            BLENDDST_CONSTANT,
            BLENDDST_1_CONSTANT
        };
        static std::wstring     BlendDstToString                        ( eBlendDst value );
        static eBlendDst        ParseBlendDst                           ( const std::wstring& wstrName );

        enum eBlendOp
        {
            BLENDOP_ADD,
            BLENDOP_SRC_DST,
            BLENDOP_DST_SRC,
            BLENDOP_MIN,
            BLENDOP_MAX
        };
        static std::wstring     BlendOpToString                         ( eBlendOp value );
        static eBlendOp         ParseBlendOp                            ( const std::wstring& wstrName );

        enum eBlendSrc
        {
            BLENDSRC_0,
            BLENDSRC_1,
            BLENDSRC_SRCCOLOR,
            BLENDSRC_1_SRCCOLOR,
            BLENDSRC_SRCALPHA,
            BLENDSRC_1_SRCALPHA,
            BLENDSRC_DSTCOLOR,
            BLENDSRC_1_DSTCOLOR,
            BLENDSRC_DSTALPHA,
            BLENDSRC_1_DSTALPHA,
            BLENDSRC_SRCALPHASAT,
            BLENDSRC_CONSTANT,
            BLENDSRC_1_CONSTANT
        };
        static std::wstring     BlendSrcToString                        ( eBlendSrc value );
        static eBlendSrc        ParseBlendSrc                           ( const std::wstring& wstrName );

        enum eShadingSpace
        {
            SHADINGSPACE_LINEAR,
            SHADINGSPACE_SRGB
        };
        static std::wstring     ShadingSpaceToString                    ( eShadingSpace value );
        static eShadingSpace    ParseShadingSpace                       ( const std::wstring& wstrName );

        enum eT3FullDeferred
        {
            T3FULLDEFERRED_NONE,
            T3FULLDEFERRED_WARP
        };
        static std::wstring     T3FullDeferredToString                  ( eT3FullDeferred value );
        static eT3FullDeferred  ParseT3FullDeferred                     ( const std::wstring& wstrName );

        eAlphaBlendDst          GetAlphaBlendDst                        () const;
        void                    SetAlphaBlendDst                        ( eAlphaBlendDst value );

        eAlphaBlendOp           GetAlphaBlendOp                         () const;
        void                    SetAlphaBlendOp                         ( eAlphaBlendOp value );

        eAlphaBlendSrc          GetAlphaBlendSrc                        () const;
        void                    SetAlphaBlendSrc                        ( eAlphaBlendSrc value );

        eAlphaCmpPass           GetAlphaCmpPass                         () const;
        void                    SetAlphaCmpPass                         ( eAlphaCmpPass value );

        uint                    GetAlphaRef                             () const;
        void                    SetAlphaRef                             ( uint value );

        bool                    GetAlphaToCoverage                      () const;
        void                    SetAlphaToCoverage                      ( bool value );

        Array < class CPlugBitmapApply* >& GetBitmapApply                          () const;
        void                    SetBitmapApply                          ( Array < class CPlugBitmapApply* >& value );

        float                   GetBlendConstant                        () const;
        void                    SetBlendConstant                        ( float value );

        eBlendDst               GetBlendDst                             () const;
        void                    SetBlendDst                             ( eBlendDst value );

        eBlendOp                GetBlendOp                              () const;
        void                    SetBlendOp                              ( eBlendOp value );

        eBlendSrc               GetBlendSrc                             () const;
        void                    SetBlendSrc                             ( eBlendSrc value );

        bool                    GetForceIsAlphaBlend                    () const;
        void                    SetForceIsAlphaBlend                    ( bool value );

        bool                    GetSeparateAlphaBlend                   () const;
        void                    SetSeparateAlphaBlend                   ( bool value );

        bool                    GetSetBlendFromOpacityMap               () const;
        void                    SetSetBlendFromOpacityMap               ( bool value );

        eShadingSpace           GetShadingSpace                         () const;
        void                    SetShadingSpace                         ( eShadingSpace value );

        bool                    GetStencilToFillOnce                    () const;
        void                    SetStencilToFillOnce                    ( bool value );

        StringA                 GetT3Deferred                           () const;
        void                    SetT3Deferred                           ( StringA value );

        bool                    GetT3Deferred_CanDecal2d                () const;
        void                    SetT3Deferred_CanDecal2d                ( bool value );

        eT3FullDeferred         GetT3FullDeferred                       () const;
        void                    SetT3FullDeferred                       ( eT3FullDeferred value );

        float                   GetTexOpConstAlpha                      () const;
        void                    SetTexOpConstAlpha                      ( float value );

        color                   GetTexOpConstRGB                        () const;
        void                    SetTexOpConstRGB                        ( color value );

