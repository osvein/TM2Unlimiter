        enum { CLASSID = 0x03166000 };

        static CGameCtnMediaBlockCameraEffectInertialTracking* CreateInstance ();

        bool                    GetAutoFocusEnabled                     () const;
        void                    SetAutoFocusEnabled                     ( bool value );

        bool                    GetAutoZoomEnabled                      () const;
        void                    SetAutoZoomEnabled                      ( bool value );

        float                   GetAutoZoomMaxDist                      () const;
        void                    SetAutoZoomMaxDist                      ( float value );

        float                   GetAutoZoomMaxFov                       () const;
        void                    SetAutoZoomMaxFov                       ( float value );

        float                   GetAutoZoomMinDist                      () const;
        void                    SetAutoZoomMinDist                      ( float value );

        float                   GetAutoZoomMinFov                       () const;
        void                    SetAutoZoomMinFov                       ( float value );

        bool                    GetTrackingEnabled                      () const;
        void                    SetTrackingEnabled                      ( bool value );

