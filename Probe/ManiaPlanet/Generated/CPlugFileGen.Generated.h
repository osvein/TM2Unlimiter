        enum { CLASSID = 0x0902F000 };

        static CPlugFileGen*    CreateInstance ();

        enum eGenKind
        {
            GENKIND_CHECKER,
            GENKIND_LIGHTMAP,
            GENKIND_PLAIN,
            GENKIND_POINT,
            GENKIND_SHADE,
            GENKIND_RENDER,
            GENKIND_RENDERCUBE,
            GENKIND_CUBENORMALS,
            GENKIND_IDENTITY,
            GENKIND_PIXELS,
            GENKIND_DEPTH,
            GENKIND_DEPTHCUBE,
            GENKIND_RENDERF,
            GENKIND_IRADIANCE,
            GENKIND_SPECULAR,
            GENKIND_TESTNORMAL,
            GENKIND_RANDNORMAL,
            GENKIND_SPECULARCUBE,
            GENKIND_HEMIREFLEC,
            GENKIND_CUBEINVHEMIREFLEC,
            GENKIND_SPECULARSLA,
            GENKIND_HUEGRADIENT,
            GENKIND_SLGRADIENT,
            GENKIND_VOLUMEROTATE,
            GENKIND_SPECULARCUBEVECT,
            GENKIND_TESTMIPMAP,
            GENKIND_SPECCUBEVECTRGB,
            GENKIND_DDXINMIPMAP,
            GENKIND_RANDVOLUME,
            GENKIND_UNALLOC,
            GENKIND_POTENTIALFIELD,
            GENKIND_RENDERCUBEF,
            GENKIND_TESTANAGLYPH,
            GENKIND_ACOSSMOOTHINRANGE,
            GENKIND_PERLINPERM,
            GENKIND_PERLINPERM2D,
            GENKIND_PERLINGRAD3,
            GENKIND_PERLINGRAD3OFPERM,
            GENKIND_SCRIPT,
            GENKIND_CUBE3X2_2D1ROTCUBE,
            GENKIND_CUBE3X2_YA1,
            GENKIND_SHCLAMPEDCOS,
            GENKIND_RANDOM,
            GENKIND_HUESATURATION,
            GENKIND_SMENERGYHUEINTENS,
            GENKIND_PERLINGRAD3OFPERM2D,
            GENKIND_PERLINGRAD4OFPERM2D,
            GENKIND_SIMPLEX4
        };
        static std::wstring     GenKindToString                         ( eGenKind value );
        static eGenKind         ParseGenKind                            ( const std::wstring& wstrName );

        eGenKind                GetGenKind                              () const;
        void                    SetGenKind                              ( eGenKind value );

