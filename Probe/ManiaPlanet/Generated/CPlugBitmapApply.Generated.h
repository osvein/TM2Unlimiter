        enum { CLASSID = 0x09012000 };

        static CPlugBitmapApply* CreateInstance ();

        enum eTexArg
        {
            TEXARG_TEXTURE,
            TEXARG_VCOLOR0,
            TEXARG_TEMPORARY,
            TEXARG_VCOLOR1
        };
        static std::wstring     TexArgToString                          ( eTexArg value );
        static eTexArg          ParseTexArg                             ( const std::wstring& wstrName );

        enum eTexInput
        {
            TEXINPUT_CURRENT,
            TEXINPUT_CONSTANT
        };
        static std::wstring     TexInputToString                        ( eTexInput value );
        static eTexInput        ParseTexInput                           ( const std::wstring& wstrName );

        enum eTexOutput
        {
            TEXOUTPUT_CURRENT,
            TEXOUTPUT_TEMPORARY
        };
        static std::wstring     TexOutputToString                       ( eTexOutput value );
        static eTexOutput       ParseTexOutput                          ( const std::wstring& wstrName );

        enum eTextureOp
        {
            TEXTUREOP_REPLACE,
            TEXTUREOP_MODULATE,
            TEXTUREOP_MODULATE2X,
            TEXTUREOP_ADD,
            TEXTUREOP_BLENDALPHA,
            TEXTUREOP_ADDDSTCOLORMODBYSRCALPHA,
            TEXTUREOP_ADDSRCCOLORMODBYDSTALPHA,
            TEXTUREOP_BUMPENVMAP,
            TEXTUREOP_BUMPENVMAPLUMI,
            TEXTUREOP_DOTPRODUCT3,
            TEXTUREOP_ADDSIGNED,
            TEXTUREOP_ADDSIGNED2X,
            TEXTUREOP_SUBTRACT,
            TEXTUREOP_ADDSMOOTH,
            TEXTUREOP_BLENDVALPHA,
            TEXTUREOP_REPLACERGB,
            TEXTUREOP_REPLACEALPHA,
            TEXTUREOP_MODULATERGB,
            TEXTUREOP_MODULATEALPHA,
            TEXTUREOP_ADDALPHA,
            TEXTUREOP_MODULATE2XALPHA,
            TEXTUREOP_REPLACERGB_MODULATEALPHA,
            TEXTUREOP_MOD2XRGB_REPLACEALPHA
        };
        static std::wstring     TextureOpToString                       ( eTextureOp value );
        static eTextureOp       ParseTextureOp                          ( const std::wstring& wstrName );

        eTexArg                 GetTexArg                               () const;
        void                    SetTexArg                               ( eTexArg value );

        eTexInput               GetTexInput                             () const;
        void                    SetTexInput                             ( eTexInput value );

        eTexOutput              GetTexOutput                            () const;
        void                    SetTexOutput                            ( eTexOutput value );

        eTextureOp              GetTextureOp                            () const;
        void                    SetTextureOp                            ( eTextureOp value );

