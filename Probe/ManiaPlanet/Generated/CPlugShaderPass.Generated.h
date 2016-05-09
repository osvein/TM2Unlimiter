        enum { CLASSID = 0x09067000 };

        static CPlugShaderPass* CreateInstance ();

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

        enum eCullMode
        {
            CULLMODE_DEFAULT,
            CULLMODE_INVERSE_CULLING,
            CULLMODE_DBLSIDEDLIGHTING
        };
        static std::wstring     CullModeToString                        ( eCullMode value );
        static eCullMode        ParseCullMode                           ( const std::wstring& wstrName );

        eBlendDst               GetBlendDst                             () const;
        void                    SetBlendDst                             ( eBlendDst value );

        eBlendSrc               GetBlendSrc                             () const;
        void                    SetBlendSrc                             ( eBlendSrc value );

        eCullMode               GetCullMode                             () const;
        void                    SetCullMode                             ( eCullMode value );

        bool                    GetIsValid                              () const;
        void                    SetIsValid                              ( bool value );

        class CPlugFileGPUP*    GetPixelShader                          () const;
        void                    SetPixelShader                          ( class CPlugFileGPUP* value );

        Array < class CPlugBitmapSampler* >& GetVertexSamplers                       () const;
        void                    SetVertexSamplers                       ( Array < class CPlugBitmapSampler* >& value );

        class CPlugFileGPUV*    GetVertexShader                         () const;
        void                    SetVertexShader                         ( class CPlugFileGPUV* value );

        uint                    GetiPass                                () const;
        void                    SetiPass                                ( uint value );

