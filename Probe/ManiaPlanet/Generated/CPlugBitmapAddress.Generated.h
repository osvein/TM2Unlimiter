        enum { CLASSID = 0x09047000 };

        static CPlugBitmapAddress* CreateInstance ();

        enum eGenerateUV
        {
            GENERATEUV_NOGENERATE,
            GENERATEUV_CAMERAVERTEX,
            GENERATEUV_WORLDVERTEX,
            GENERATEUV_WORLDVERTEXXY,
            GENERATEUV_WORLDVERTEXXZ,
            GENERATEUV_WORLDVERTEXYZ,
            GENERATEUV_CAMERANORMAL,
            GENERATEUV_WORLDNORMAL,
            GENERATEUV_CAMERAREFLECTIONVECTOR,
            GENERATEUV_WORLDREFLECTIONVECTOR,
            GENERATEUV_WORLDNORMALNEG,
            GENERATEUV_WATERREFLECTIONVECTOR,
            GENERATEUV_HACK1VERTEX,
            GENERATEUV_MAPTEXEL_DEPRECATED,
            GENERATEUV_FOGPLANE0,
            GENERATEUV_VSK3SEAFOAM,
            GENERATEUV_IMAGESPACE,
            GENERATEUV_LIGHTDIR0REFLECT,
            GENERATEUV_EYENORMAL,
            GENERATEUV_SHADOWB1PW01,
            GENERATEUV_TEX3ASPOSPRCAMERA,
            GENERATEUV_FLATWATERREFLECT,
            GENERATEUV_FLATWATERREFRACT,
            GENERATEUV_FLATWATERFRESNEL,
            GENERATEUV_WORLDPOSXYBLENDZY
        };
        static std::wstring     GenerateUVToString                      ( eGenerateUV value );
        static eGenerateUV      ParseGenerateUV                         ( const std::wstring& wstrName );

        bool                    GetAreUVProjected                       () const;
        void                    SetAreUVProjected                       ( bool value );

        float                   GetBumpEnvScale                         () const;
        void                    SetBumpEnvScale                         ( float value );

        bool                    GetDirectTransfo                        () const;
        void                    SetDirectTransfo                        ( bool value );

        bool                    GetForcePassFill                        () const;
        void                    SetForcePassFill                        ( bool value );

        eGenerateUV             GetGenerateUV                           () const;
        void                    SetGenerateUV                           ( eGenerateUV value );

        bool                    GetSkipAuto_m11_01                      () const;
        void                    SetSkipAuto_m11_01                      ( bool value );

        uint                    GetTexCoordIndex                        () const;
        void                    SetTexCoordIndex                        ( uint value );

        Matrix33                GetTransfoIso3                          () const;
        void                    SetTransfoIso3                          ( Matrix33 value );

        Vec4D                   GetTransfoMat4U                         () const;
        void                    SetTransfoMat4U                         ( Vec4D value );

        Vec4D                   GetTransfoMat4V                         () const;
        void                    SetTransfoMat4V                         ( Vec4D value );

        Vec4D                   GetTransfoMat4W                         () const;
        void                    SetTransfoMat4W                         ( Vec4D value );

        bool                    GetUVTransfoIso3                        () const;
        void                    SetUVTransfoIso3                        ( bool value );

        bool                    GetUVTransfoMat4                        () const;
        void                    SetUVTransfoMat4                        ( bool value );

        bool                    GetUseBitmapTcScale                     () const;
        void                    SetUseBitmapTcScale                     ( bool value );

        bool                    GetUseBumpEnvScale                      () const;
        void                    SetUseBumpEnvScale                      ( bool value );

