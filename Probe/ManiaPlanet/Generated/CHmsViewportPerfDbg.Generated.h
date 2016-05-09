        enum { CLASSID = 0x06014000 };

        static CHmsViewportPerfDbg* CreateInstance ();

        enum eFillForced
        {
            FILLFORCED_DEFAULT,
            FILLFORCED_POINT,
            FILLFORCED_WIRED
        };
        static std::wstring     FillForcedToString                      ( eFillForced value );
        static eFillForced      ParseFillForced                         ( const std::wstring& wstrName );

        enum eProfile
        {
            PROFILE_VISION,
            PROFILE_CORECMD
        };
        static std::wstring     ProfileToString                         ( eProfile value );
        static eProfile         ParseProfile                            ( const std::wstring& wstrName );

        enum eShowFps
        {
            SHOWFPS_NONE,
            SHOWFPS_FPS,
            SHOWFPS_TIMEELAPSED,
            SHOWFPS_LEGENDS
        };
        static std::wstring     ShowFpsToString                         ( eShowFps value );
        static eShowFps         ParseShowFps                            ( const std::wstring& wstrName );

        enum eSumUp
        {
            SUMUP_AVERAGE,
            SUMUP_MAXIMUM
        };
        static std::wstring     SumUpToString                           ( eSumUp value );
        static eSumUp           ParseSumUp                              ( const std::wstring& wstrName );

        enum eVisionSkip
        {
            VISIONSKIP_NONE,
            VISIONSKIP_API_CALLS,
            VISIONSKIP_ALL
        };
        static std::wstring     VisionSkipToString                      ( eVisionSkip value );
        static eVisionSkip      ParseVisionSkip                         ( const std::wstring& wstrName );

        bool                    GetDebugParticle                        () const;
        void                    SetDebugParticle                        ( bool value );

        eFillForced             GetFillForced                           () const;
        void                    SetFillForced                           ( eFillForced value );

        bool                    GetIsFillRateEnable                     () const;
        void                    SetIsFillRateEnable                     ( bool value );

        bool                    GetIsFillRateLegendEnable               () const;
        void                    SetIsFillRateLegendEnable               ( bool value );

        bool                    GetIsFillRateNoMipMapEnable             () const;
        void                    SetIsFillRateNoMipMapEnable             ( bool value );

        bool                    GetIsFillRateStencilTestEnable          () const;
        void                    SetIsFillRateStencilTestEnable          ( bool value );

        bool                    GetIsFillRateZTestEnable                () const;
        void                    SetIsFillRateZTestEnable                ( bool value );

        eProfile                GetProfile                              () const;
        void                    SetProfile                              ( eProfile value );

        eShowFps                GetShowFps                              () const;
        void                    SetShowFps                              ( eShowFps value );

        bool                    GetShowMem                              () const;
        void                    SetShowMem                              ( bool value );

        bool                    GetSmallScissor                         () const;
        void                    SetSmallScissor                         ( bool value );

        bool                    GetSmallShader                          () const;
        void                    SetSmallShader                          ( bool value );

        eSumUp                  GetSumUp                                () const;
        void                    SetSumUp                                ( eSumUp value );

        bool                    GetUseAverage                           () const;
        void                    SetUseAverage                           ( bool value );

        eVisionSkip             GetVisionSkip                           () const;
        void                    SetVisionSkip                           ( eVisionSkip value );

