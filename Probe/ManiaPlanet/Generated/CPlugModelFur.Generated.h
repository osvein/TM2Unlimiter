        enum { CLASSID = 0x0909D000 };

        static CPlugModelFur*   CreateInstance ();

        uint                    GetChunkVertCount                       () const;
        void                    SetChunkVertCount                       ( uint value );

        float                   GetCurvatureDeg                         () const;
        void                    SetCurvatureDeg                         ( float value );

        class CMwNod*           GetCurvatureMap                         () const;
        void                    SetCurvatureMap                         ( class CMwNod* value );

        float                   GetCurvatureVarDeg                      () const;
        void                    SetCurvatureVarDeg                      ( float value );

        bool                    GetDebug                                () const;
        void                    SetDebug                                ( bool value );

        bool                    GetDensityInAtlasY                      () const;
        void                    SetDensityInAtlasY                      ( bool value );

        class CMwNod*           GetDensityMap                           () const;
        void                    SetDensityMap                           ( class CMwNod* value );

        uint                    GetDensityMax                           () const;
        void                    SetDensityMax                           ( uint value );

        float                   GetDensityRandom                        () const;
        void                    SetDensityRandom                        ( float value );

        uint                    GetDensitySampling                      () const;
        void                    SetDensitySampling                      ( uint value );

        class CMwNod*           GetDiffuseMap                           () const;
        void                    SetDiffuseMap                           ( class CMwNod* value );

        float                   GetDirAlphaDeg                          () const;
        void                    SetDirAlphaDeg                          ( float value );

        class CMwNod*           GetDirAlphaMap                          () const;
        void                    SetDirAlphaMap                          ( class CMwNod* value );

        float                   GetDirAlphaVarDeg                       () const;
        void                    SetDirAlphaVarDeg                       ( float value );

        float                   GetDirBetaDeg                           () const;
        void                    SetDirBetaDeg                           ( float value );

        class CMwNod*           GetDirBetaMap                           () const;
        void                    SetDirBetaMap                           ( class CMwNod* value );

        float                   GetDirBetaVarDeg                        () const;
        void                    SetDirBetaVarDeg                        ( float value );

        bool                    GetDoubleLayer                          () const;
        void                    SetDoubleLayer                          ( bool value );

        float                   GetDynaAccel                            () const;
        void                    SetDynaAccel                            ( float value );

        float                   GetDynaAccelVar                         () const;
        void                    SetDynaAccelVar                         ( float value );

        float                   GetDynaAlphaMax                         () const;
        void                    SetDynaAlphaMax                         ( float value );

        float                   GetDynaAlphaMin                         () const;
        void                    SetDynaAlphaMin                         ( float value );

        float                   GetDynaBetaMax                          () const;
        void                    SetDynaBetaMax                          ( float value );

        float                   GetDynaBetaMin                          () const;
        void                    SetDynaBetaMin                          ( float value );

        bool                    GetDynaEnabled                          () const;
        void                    SetDynaEnabled                          ( bool value );

        float                   GetDynaK1                               () const;
        void                    SetDynaK1                               ( float value );

        float                   GetDynaK1Var                            () const;
        void                    SetDynaK1Var                            ( float value );

        float                   GetDynaK2                               () const;
        void                    SetDynaK2                               ( float value );

        float                   GetDynaK2Var                            () const;
        void                    SetDynaK2Var                            ( float value );

        bool                    GetDynaZeroBeta                         () const;
        void                    SetDynaZeroBeta                         ( bool value );

        bool                    GetEnabled                              () const;
        void                    SetEnabled                              ( bool value );

        uint                    GetFluffChunkCount                      () const;
        void                    SetFluffChunkCount                      ( uint value );

        float                   GetFluffPosRandom                       () const;
        void                    SetFluffPosRandom                       ( float value );

        bool                    GetFluffShapeCircular                   () const;
        void                    SetFluffShapeCircular                   ( bool value );

        float                   GetFluffShapeEndWidthCoef               () const;
        void                    SetFluffShapeEndWidthCoef               ( float value );

        uint                    GetHairMaxCount                         () const;
        void                    SetHairMaxCount                         ( uint value );

        float                   GetHelixDeg                             () const;
        void                    SetHelixDeg                             ( float value );

        float                   GetHelixVarDeg                          () const;
        void                    SetHelixVarDeg                          ( float value );

        float                   GetLength                               () const;
        void                    SetLength                               ( float value );

        class CMwNod*           GetLengthMap                            () const;
        void                    SetLengthMap                            ( class CMwNod* value );

        float                   GetLengthVar                            () const;
        void                    SetLengthVar                            ( float value );

        uint                    GetMapAtlasX                            () const;
        void                    SetMapAtlasX                            ( uint value );

        uint                    GetMapAtlasY                            () const;
        void                    SetMapAtlasY                            ( uint value );

        class CPlugMaterial*    GetMaterial                             () const;
        void                    SetMaterial                             ( class CPlugMaterial* value );

        StringA                 GetMaterialName                         () const;
        void                    SetMaterialName                         ( StringA value );

        bool                    GetModulateWidthByTriSurf               () const;
        void                    SetModulateWidthByTriSurf               ( bool value );

        float                   GetNormalBendAngleX                     () const;
        void                    SetNormalBendAngleX                     ( float value );

        float                   GetNormalBendAngleY                     () const;
        void                    SetNormalBendAngleY                     ( float value );

        uint                    GetRandSeed                             () const;
        void                    SetRandSeed                             ( uint value );

        bool                    GetRandomUDir                           () const;
        void                    SetRandomUDir                           ( bool value );

        class CMwNod*           GetSpecularMap                          () const;
        void                    SetSpecularMap                          ( class CMwNod* value );

        float                   GetWidth                                () const;
        void                    SetWidth                                ( float value );

        class CMwNod*           GetWidthMap                             () const;
        void                    SetWidthMap                             ( class CMwNod* value );

        float                   GetWidthVar                             () const;
        void                    SetWidthVar                             ( float value );

