        enum { CLASSID = 0x0316F000 };

        static CGameCoverFlowDesc* CreateInstance ();

        enum eBoxesLayout
        {
            BOXESLAYOUT_LINEAR,
            BOXESLAYOUT_PARABOLIC3,
            BOXESLAYOUT_PERSPECTIVE
        };
        static std::wstring     BoxesLayoutToString                     ( eBoxesLayout value );
        static eBoxesLayout     ParseBoxesLayout                        ( const std::wstring& wstrName );

        enum eStationsLayout
        {
            STATIONSLAYOUT_LINEAR,
            STATIONSLAYOUT_PARABOLIC3,
            STATIONSLAYOUT_PERSPECTIVE
        };
        static std::wstring     StationsLayoutToString                  ( eStationsLayout value );
        static eStationsLayout  ParseStationsLayout                     ( const std::wstring& wstrName );

        float                   GetBoxesAngleMax0                       () const;
        void                    SetBoxesAngleMax0                       ( float value );

        float                   GetBoxesAngleMax1                       () const;
        void                    SetBoxesAngleMax1                       ( float value );

        float                   GetBoxesBumpY                           () const;
        void                    SetBoxesBumpY                           ( float value );

        eBoxesLayout            GetBoxesLayout                          () const;
        void                    SetBoxesLayout                          ( eBoxesLayout value );

        float                   GetBoxesOffsetX                         () const;
        void                    SetBoxesOffsetX                         ( float value );

        float                   GetBoxesOffsetY                         () const;
        void                    SetBoxesOffsetY                         ( float value );

        float                   GetBoxesOffsetZ                         () const;
        void                    SetBoxesOffsetZ                         ( float value );

        float                   GetBoxesSpeed                           () const;
        void                    SetBoxesSpeed                           ( float value );

        float                   GetBoxesStepX0                          () const;
        void                    SetBoxesStepX0                          ( float value );

        float                   GetBoxesStepY1                          () const;
        void                    SetBoxesStepY1                          ( float value );

        float                   GetBoxesStepZ0                          () const;
        void                    SetBoxesStepZ0                          ( float value );

        float                   GetBoxesStepZ1                          () const;
        void                    SetBoxesStepZ1                          ( float value );

        uint                    GetBoxesTransitionDuration0             () const;
        void                    SetBoxesTransitionDuration0             ( uint value );

        uint                    GetBoxesTransitionDuration1             () const;
        void                    SetBoxesTransitionDuration1             ( uint value );

        uint                    GetBoxesTransitionDuration2             () const;
        void                    SetBoxesTransitionDuration2             ( uint value );

        float                   GetBoxesZoomDistance                    () const;
        void                    SetBoxesZoomDistance                    ( float value );

        float                   GetCloudsRgbMaxScale                    () const;
        void                    SetCloudsRgbMaxScale                    ( float value );

        color                   GetCloudsRgbMaxSrgb                     () const;
        void                    SetCloudsRgbMaxSrgb                     ( color value );

        float                   GetCloudsRgbMinScale                    () const;
        void                    SetCloudsRgbMinScale                    ( float value );

        color                   GetCloudsRgbMinSrgb                     () const;
        void                    SetCloudsRgbMinSrgb                     ( color value );

        color                   GetFogColorSrgb                         () const;
        void                    SetFogColorSrgb                         ( color value );

        class CGameSkin*        GetGameSkin                             () const;
        void                    SetGameSkin                             ( class CGameSkin* value );

        class CSystemFidsFolder* GetGameSkinFolder                       () const;
        void                    SetGameSkinFolder                       ( class CSystemFidsFolder* value );

        color                   GetLAmbient_LinearRgb                   () const;
        void                    SetLAmbient_LinearRgb                   ( color value );

        float                   GetLBall_Intens                         () const;
        void                    SetLBall_Intens                         ( float value );

        color                   GetLBall_LinearRgb                      () const;
        void                    SetLBall_LinearRgb                      ( color value );

        float                   GetLBall_Radius                         () const;
        void                    SetLBall_Radius                         ( float value );

        float                   GetLDir0_DirPhi                         () const;
        void                    SetLDir0_DirPhi                         ( float value );

        float                   GetLDir0_DirTheta                       () const;
        void                    SetLDir0_DirTheta                       ( float value );

        float                   GetLDir0_Intens                         () const;
        void                    SetLDir0_Intens                         ( float value );

        color                   GetLDir0_LinearRgb                      () const;
        void                    SetLDir0_LinearRgb                      ( color value );

        class CScene3d*         GetSceneFid                             () const;
        void                    SetSceneFid                             ( class CScene3d* value );

        float                   GetStationsAngleMax0                    () const;
        void                    SetStationsAngleMax0                    ( float value );

        float                   GetStationsAngleMax1                    () const;
        void                    SetStationsAngleMax1                    ( float value );

        float                   GetStationsBumpY                        () const;
        void                    SetStationsBumpY                        ( float value );

        eStationsLayout         GetStationsLayout                       () const;
        void                    SetStationsLayout                       ( eStationsLayout value );

        float                   GetStationsOffsetX                      () const;
        void                    SetStationsOffsetX                      ( float value );

        float                   GetStationsOffsetY                      () const;
        void                    SetStationsOffsetY                      ( float value );

        float                   GetStationsOffsetZ                      () const;
        void                    SetStationsOffsetZ                      ( float value );

        float                   GetStationsSpeed                        () const;
        void                    SetStationsSpeed                        ( float value );

        float                   GetStationsStepX0                       () const;
        void                    SetStationsStepX0                       ( float value );

        float                   GetStationsStepY1                       () const;
        void                    SetStationsStepY1                       ( float value );

        float                   GetStationsStepZ0                       () const;
        void                    SetStationsStepZ0                       ( float value );

        float                   GetStationsStepZ1                       () const;
        void                    SetStationsStepZ1                       ( float value );

        uint                    GetStationsTransitionDuration0          () const;
        void                    SetStationsTransitionDuration0          ( uint value );

        uint                    GetStationsTransitionDuration1          () const;
        void                    SetStationsTransitionDuration1          ( uint value );

        uint                    GetStationsTransitionDuration2          () const;
        void                    SetStationsTransitionDuration2          ( uint value );

        float                   GetStationsZoomDistance                 () const;
        void                    SetStationsZoomDistance                 ( float value );

        float                   GetTimeRemapped                         () const;
        void                    SetTimeRemapped                         ( float value );

