        enum { CLASSID = 0x05046000 };

        static CFuncCloudsParam* CreateInstance ();

        enum eHeightCenter
        {
            HEIGHTCENTER_CAMERA,
            HEIGHTCENTER_WORLDXZ
        };
        static std::wstring     HeightCenterToString                    ( eHeightCenter value );
        static eHeightCenter    ParseHeightCenter                       ( const std::wstring& wstrName );

        enum eLighting
        {
            LIGHTING_PER_OBJECT,
            LIGHTING_PER_SPRITE
        };
        static std::wstring     LightingToString                        ( eLighting value );
        static eLighting        ParseLighting                           ( const std::wstring& wstrName );

        float                   GetBottomFarZ                           () const;
        void                    SetBottomFarZ                           ( float value );

        float                   GetBottomNearZ                          () const;
        void                    SetBottomNearZ                          ( float value );

        eHeightCenter           GetHeightCenter                         () const;
        void                    SetHeightCenter                         ( eHeightCenter value );

        Vec2D                   GetHeightCenterXZ                       () const;
        void                    SetHeightCenterXZ                       ( Vec2D value );

        eLighting               GetLighting                             () const;
        void                    SetLighting                             ( eLighting value );

        List < float >&         GetPointDists                           () const;
        void                    SetPointDists                           ( List < float >& value );

        List < float >&         GetPointHeights                         () const;
        void                    SetPointHeights                         ( List < float >& value );

        float                   GetSpeedScale                           () const;
        void                    SetSpeedScale                           ( float value );

