        enum { CLASSID = 0x0400A000 };

        static GxLightFrustum*  CreateInstance ();

        enum eApply
        {
            APPLY_MODULATEADD,
            APPLY_MODULATE,
            APPLY_ADD,
            APPLY_MODULATEX2
        };
        static std::wstring     ApplyToString                           ( eApply value );
        static eApply           ParseApply                              ( const std::wstring& wstrName );

        enum eTechnique
        {
            TECHNIQUE_RENDERCUBE,
            TECHNIQUE_2DMASKNOCLIPZ,
            TECHNIQUE_2DBALLLIGHT,
            TECHNIQUE_GENSHADOWMASK
        };
        static std::wstring     TechniqueToString                       ( eTechnique value );
        static eTechnique       ParseTechnique                          ( const std::wstring& wstrName );

        eApply                  GetApply                                () const;
        void                    SetApply                                ( eApply value );

        bool                    GetDoAttenuation                        () const;
        void                    SetDoAttenuation                        ( bool value );

        bool                    GetDoFadeZ                              () const;
        void                    SetDoFadeZ                              ( bool value );

        float                   GetFarZ                                 () const;
        void                    SetFarZ                                 ( float value );

        float                   GetFovY                                 () const;
        void                    SetFovY                                 ( float value );

        bool                    GetIsOrtho                              () const;
        void                    SetIsOrtho                              ( bool value );

        float                   GetNearZ                                () const;
        void                    SetNearZ                                ( float value );

        float                   GetRatioFadeZ                           () const;
        void                    SetRatioFadeZ                           ( float value );

        float                   GetRatioXY                              () const;
        void                    SetRatioXY                              ( float value );

        float                   GetSizeX                                () const;
        void                    SetSizeX                                ( float value );

        float                   GetSizeY                                () const;
        void                    SetSizeY                                ( float value );

        eTechnique              GetTechnique                            () const;
        void                    SetTechnique                            ( eTechnique value );

        bool                    GetUseFaceNegX                          () const;
        void                    SetUseFaceNegX                          ( bool value );

        bool                    GetUseFaceNegY                          () const;
        void                    SetUseFaceNegY                          ( bool value );

        bool                    GetUseFaceNegZ                          () const;
        void                    SetUseFaceNegZ                          ( bool value );

        bool                    GetUseFacePosX                          () const;
        void                    SetUseFacePosX                          ( bool value );

        bool                    GetUseFacePosY                          () const;
        void                    SetUseFacePosY                          ( bool value );

        bool                    GetUseFacePosZ                          () const;
        void                    SetUseFacePosZ                          ( bool value );

        uint                    GetiShadowGroup                         () const;
        void                    SetiShadowGroup                         ( uint value );

