        enum { CLASSID = 0x0A082000 };

        static CSceneVehicleCarMarksModelSub* CreateInstance ();

        enum eCondMaterialId
        {

        };
        static std::wstring     CondMaterialIdToString                  ( eCondMaterialId value );
        static eCondMaterialId  ParseCondMaterialId                     ( const std::wstring& wstrName );

        float                   GetAlpha                                () const;
        void                    SetAlpha                                ( float value );

        float                   GetAlphaCoefForceX                      () const;
        void                    SetAlphaCoefForceX                      ( float value );

        float                   GetAlphaCoefForceZ                      () const;
        void                    SetAlphaCoefForceZ                      ( float value );

        float                   GetAlphaMax                             () const;
        void                    SetAlphaMax                             ( float value );

        float                   GetCondForceXGreaterThan                () const;
        void                    SetCondForceXGreaterThan                ( float value );

        float                   GetCondForceZGreaterThan                () const;
        void                    SetCondForceZGreaterThan                ( float value );

        bool                    GetCondGroundContact                    () const;
        void                    SetCondGroundContact                    ( bool value );

        eCondMaterialId         GetCondMaterialId                       () const;
        void                    SetCondMaterialId                       ( eCondMaterialId value );

        bool                    GetCondSliding                          () const;
        void                    SetCondSliding                          ( bool value );

        bool                    GetDebugDisplay                         () const;
        void                    SetDebugDisplay                         ( bool value );

        float                   GetFadeDist                             () const;
        void                    SetFadeDist                             ( float value );

        float                   GetGroundOffset                         () const;
        void                    SetGroundOffset                         ( float value );

        class CPlugMaterial*    GetMaterial                             () const;
        void                    SetMaterial                             ( class CPlugMaterial* value );

        float                   GetSampleMinDist                        () const;
        void                    SetSampleMinDist                        ( float value );

        float                   GetTexVPerMeter                         () const;
        void                    SetTexVPerMeter                         ( float value );

        float                   GetWidth                                () const;
        void                    SetWidth                                ( float value );

        float                   GetWidthCoefForceX                      () const;
        void                    SetWidthCoefForceX                      ( float value );

        float                   GetWidthCoefForceZ                      () const;
        void                    SetWidthCoefForceZ                      ( float value );

        float                   GetWidthMax                             () const;
        void                    SetWidthMax                             ( float value );

