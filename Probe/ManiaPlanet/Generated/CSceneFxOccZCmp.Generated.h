        enum { CLASSID = 0x0A07E000 };

        static CSceneFxOccZCmp* CreateInstance ();

        enum eBlend
        {
            BLEND_REPLACE,
            BLEND_MODULATE
        };
        static std::wstring     BlendToString                           ( eBlend value );
        static eBlend           ParseBlend                              ( const std::wstring& wstrName );

        eBlend                  GetBlend                                () const;
        void                    SetBlend                                ( eBlend value );

        uint                    GetBlurTexelCount                       () const;
        void                    SetBlurTexelCount                       ( uint value );

        float                   GetImageRadius                          () const;
        void                    SetImageRadius                          ( float value );

        class CPlugPointsInSphereOpt* GetPointsInSphere                       () const;
        void                    SetPointsInSphere                       ( class CPlugPointsInSphereOpt* value );

        class CPlugShaderApply* GetShader                               () const;
        void                    SetShader                               ( class CPlugShaderApply* value );

        bool                    GetUsePointsInSphere                    () const;
        void                    SetUsePointsInSphere                    ( bool value );

