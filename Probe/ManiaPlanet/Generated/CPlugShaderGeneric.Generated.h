        enum { CLASSID = 0x09004000 };

        static CPlugShaderGeneric* CreateInstance ();

        enum eVertexColor
        {
            VERTEXCOLOR_CUSTOM,
            VERTEXCOLOR_COPYGLOBAL,
            VERTEXCOLOR_COPYVERTEX,
            VERTEXCOLOR_LIGHTGLOBAL,
            VERTEXCOLOR_LIGHTVERTEX,
            VERTEXCOLOR_DISABLED
        };
        static std::wstring     VertexColorToString                     ( eVertexColor value );
        static eVertexColor     ParseVertexColor                        ( const std::wstring& wstrName );

        color                   GetAmbientRGB                           () const;
        void                    SetAmbientRGB                           ( color value );

        bool                    GetDblSidedLighting                     () const;
        void                    SetDblSidedLighting                     ( bool value );

        float                   GetDiffuseAlpha                         () const;
        void                    SetDiffuseAlpha                         ( float value );

        color                   GetDiffuseRGB                           () const;
        void                    SetDiffuseRGB                           ( color value );

        color                   GetEmissiveRGB                          () const;
        void                    SetEmissiveRGB                          ( color value );

        float                   GetGlobalAlpha                          () const;
        void                    SetGlobalAlpha                          ( float value );

        color                   GetGlobalRGB                            () const;
        void                    SetGlobalRGB                            ( color value );

        bool                    GetNormalizeNs                          () const;
        void                    SetNormalizeNs                          ( bool value );

        bool                    GetOnlyInfiniteLights                   () const;
        void                    SetOnlyInfiniteLights                   ( bool value );

        float                   GetSpecularExp                          () const;
        void                    SetSpecularExp                          ( float value );

        color                   GetSpecularRGB                          () const;
        void                    SetSpecularRGB                          ( color value );

        bool                    GetUseAmbient                           () const;
        void                    SetUseAmbient                           ( bool value );

        bool                    GetUseAmbientCV                         () const;
        void                    SetUseAmbientCV                         ( bool value );

        bool                    GetUseDiffuse                           () const;
        void                    SetUseDiffuse                           ( bool value );

        bool                    GetUseDiffuseCV                         () const;
        void                    SetUseDiffuseCV                         ( bool value );

        bool                    GetUseEmissive                          () const;
        void                    SetUseEmissive                          ( bool value );

        bool                    GetUseEmissiveCV                        () const;
        void                    SetUseEmissiveCV                        ( bool value );

        bool                    GetUseSpecular                          () const;
        void                    SetUseSpecular                          ( bool value );

        eVertexColor            GetVertexColor                          () const;
        void                    SetVertexColor                          ( eVertexColor value );

        float                   GetWireAlpha                            () const;
        void                    SetWireAlpha                            ( float value );

        color                   GetWireRGB                              () const;
        void                    SetWireRGB                              ( color value );

