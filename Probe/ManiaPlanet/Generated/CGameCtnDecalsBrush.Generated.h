        enum { CLASSID = 0x03118000 };

        static CGameCtnDecalsBrush* CreateInstance ();

        enum eDecalProj
        {
            DECALPROJ_CAMERADIR,
            DECALPROJ_GEOMETRYNORMAL
        };
        static std::wstring     DecalProjToString                       ( eDecalProj value );
        static eDecalProj       ParseDecalProj                          ( const std::wstring& wstrName );

        eDecalProj              GetDecalProj                            () const;
        void                    SetDecalProj                            ( eDecalProj value );

        float                   GetEraserSize                           () const;
        void                    SetEraserSize                           ( float value );

        float                   GetGridStepOpacity                      () const;
        void                    SetGridStepOpacity                      ( float value );

        float                   GetGridStepPos                          () const;
        void                    SetGridStepPos                          ( float value );

        float                   GetGridStepRoll                         () const;
        void                    SetGridStepRoll                         ( float value );

        float                   GetGridStepSize                         () const;
        void                    SetGridStepSize                         ( float value );

        float                   GetGridStepThickness                    () const;
        void                    SetGridStepThickness                    ( float value );

        uint                    GetNbDecals                             () const;
        void                    SetNbDecals                             ( uint value );

        float                   GetOpacity                              () const;
        void                    SetOpacity                              ( float value );

        float                   GetRandomOpacityMax                     () const;
        void                    SetRandomOpacityMax                     ( float value );

        float                   GetRandomOpacityMin                     () const;
        void                    SetRandomOpacityMin                     ( float value );

        float                   GetRandomRollMax                        () const;
        void                    SetRandomRollMax                        ( float value );

        float                   GetRandomRollMin                        () const;
        void                    SetRandomRollMin                        ( float value );

        float                   GetRandomSizeMax                        () const;
        void                    SetRandomSizeMax                        ( float value );

        float                   GetRandomSizeMin                        () const;
        void                    SetRandomSizeMin                        ( float value );

        bool                    GetRandomizeAtlasId                     () const;
        void                    SetRandomizeAtlasId                     ( bool value );

        bool                    GetRandomizeOpacity                     () const;
        void                    SetRandomizeOpacity                     ( bool value );

        bool                    GetRandomizeRoll                        () const;
        void                    SetRandomizeRoll                        ( bool value );

        bool                    GetRandomizeSize                        () const;
        void                    SetRandomizeSize                        ( bool value );

        float                   GetSize                                 () const;
        void                    SetSize                                 ( float value );

        float                   GetThickness                            () const;
        void                    SetThickness                            ( float value );

        void                    Reset                                   ();
