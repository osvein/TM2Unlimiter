        enum { CLASSID = 0x09021000 };

        static CPlugBitmapRenderLightFromMap* CreateInstance ();

        class CPlugBitmap*      GetBitmapLightHistory                   () const;
        void                    SetBitmapLightHistory                   ( class CPlugBitmap* value );

        float                   GetCameraDovWorldY_MaxDot               () const;
        void                    SetCameraDovWorldY_MaxDot               ( float value );

        float                   GetCameraFarZ_ToAdd                     () const;
        void                    SetCameraFarZ_ToAdd                     ( float value );

        float                   GetCameraNearZ_FactorInObject           () const;
        void                    SetCameraNearZ_FactorInObject           ( float value );

        uint                    GetObjectCountPerAxisMax                () const;
        void                    SetObjectCountPerAxisMax                ( uint value );

        uint                    GetObjectCountPerAxisMin                () const;
        void                    SetObjectCountPerAxisMin                ( uint value );

        uint                    GetObjectCountPerAxisVision             () const;
        void                    SetObjectCountPerAxisVision             ( uint value );

        uint                    GetRayCastHalfTimeMs                    () const;
        void                    SetRayCastHalfTimeMs                    ( uint value );

        float                   GetRemapMax_DayAmb                      () const;
        void                    SetRemapMax_DayAmb                      ( float value );

        float                   GetRemapMax_DayDir                      () const;
        void                    SetRemapMax_DayDir                      ( float value );

        float                   GetRemapMax_Night                       () const;
        void                    SetRemapMax_Night                       ( float value );

        float                   GetRemapMin_DayAmb                      () const;
        void                    SetRemapMin_DayAmb                      ( float value );

        float                   GetRemapMin_DayDir                      () const;
        void                    SetRemapMin_DayDir                      ( float value );

        float                   GetRemapMin_Night                       () const;
        void                    SetRemapMin_Night                       ( float value );

        uint                    GetSampledWidthPerObject                () const;
        void                    SetSampledWidthPerObject                ( uint value );

        float                   GetStartFadeToWhite                     () const;
        void                    SetStartFadeToWhite                     ( float value );

