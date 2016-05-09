        enum { CLASSID = 0x07022000 };

        static CControlTimeLine2* CreateInstance ();

        color                   GetBgColor                              () const;
        void                    SetBgColor                              ( color value );

        color                   GetBlockColor                           () const;
        void                    SetBlockColor                           ( color value );

        float                   GetBlockHeight                          () const;
        void                    SetBlockHeight                          ( float value );

        color                   GetBlockHighLightColor                  () const;
        void                    SetBlockHighLightColor                  ( color value );

        color                   GetDeadZoneColor                        () const;
        void                    SetDeadZoneColor                        ( color value );

        float                   GetHeight                               () const;
        void                    SetHeight                               ( float value );

        color                   GetKeyColor                             () const;
        void                    SetKeyColor                             ( color value );

        color                   GetKeyFocusColor                        () const;
        void                    SetKeyFocusColor                        ( color value );

        float                   GetKeyHeight                            () const;
        void                    SetKeyHeight                            ( float value );

        color                   GetKeyHighLightColor                    () const;
        void                    SetKeyHighLightColor                    ( color value );

        float                   GetKeyHighLightHeight                   () const;
        void                    SetKeyHighLightHeight                   ( float value );

        float                   GetKeyHighLightWidth                    () const;
        void                    SetKeyHighLightWidth                    ( float value );

        float                   GetKeyWidth                             () const;
        void                    SetKeyWidth                             ( float value );

        color                   GetRulerBgColor                         () const;
        void                    SetRulerBgColor                         ( color value );

        float                   GetRulerHeight                          () const;
        void                    SetRulerHeight                          ( float value );

        float                   GetRulerLength                          () const;
        void                    SetRulerLength                          ( float value );

        color                   GetRulerLinesColorBig                   () const;
        void                    SetRulerLinesColorBig                   ( color value );

        color                   GetRulerLinesColorSmall                 () const;
        void                    SetRulerLinesColorSmall                 ( color value );

        float                   GetTime                                 () const;
        void                    SetTime                                 ( float value );

        float                   GetTimeCursorHeight                     () const;
        void                    SetTimeCursorHeight                     ( float value );

        color                   GetTimeCursorLineColor                  () const;
        void                    SetTimeCursorLineColor                  ( color value );

        float                   GetTimeCursorWidth                      () const;
        void                    SetTimeCursorWidth                      ( float value );

        float                   GetTimeMax                              () const;
        void                    SetTimeMax                              ( float value );

        float                   GetTimeMin                              () const;
        void                    SetTimeMin                              ( float value );

        uint                    GetTrackCount                           () const;
        void                    SetTrackCount                           ( uint value );

        float                   GetTrackHeight                          () const;
        void                    SetTrackHeight                          ( float value );

        color                   GetTrackSeparationColor                 () const;
        void                    SetTrackSeparationColor                 ( color value );

        uint                    GetTrackStart                           () const;
        void                    SetTrackStart                           ( uint value );

        float                   GetWidth                                () const;
        void                    SetWidth                                ( float value );

        void                    CreateSampleData                        ();
