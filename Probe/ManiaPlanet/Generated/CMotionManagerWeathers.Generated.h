        enum { CLASSID = 0x08053000 };

        static CMotionManagerWeathers* CreateInstance ();

        enum eClearMode
        {
            CLEARMODE_FIXED,
            CLEARMODE_FOG
        };
        static std::wstring     ClearModeToString                       ( eClearMode value );
        static eClearMode       ParseClearMode                          ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBitmapSpecularDir                    () const;
        void                    SetBitmapSpecularDir                    ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapWaterFog                       () const;
        void                    SetBitmapWaterFog                       ( class CPlugBitmap* value );

        color                   GetClearColor                           () const;
        void                    SetClearColor                           ( color value );

        eClearMode              GetClearMode                            () const;
        void                    SetClearMode                            ( eClearMode value );

        bool                    GetEnableUpdate                         () const;
        void                    SetEnableUpdate                         ( bool value );

        class CFuncDayTime*     GetFuncDayTime                          () const;
        void                    SetFuncDayTime                          ( class CFuncDayTime* value );

        List < nodptr<class CFuncWeather> >& GetFuncWeathers                         () const;
        void                    SetFuncWeathers                         ( List < nodptr<class CFuncWeather> >& value );

        float                   GetSiteLatitude                         () const;
        void                    SetSiteLatitude                         ( float value );

        float                   GetSunMoonIntensity                     () const;
        void                    SetSunMoonIntensity                     ( float value );

        float                   GetTimeRemapped                         () const;
        void                    SetTimeRemapped                         ( float value );

        class CMotionTimerLoop* GetTimer                                () const;
        void                    SetTimer                                ( class CMotionTimerLoop* value );

        void                    SaveInModelFid                          ();
