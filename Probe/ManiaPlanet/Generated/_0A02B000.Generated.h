        enum { CLASSID = 0x0A02B000 };

        static _0A02B000*       CreateInstance ();

        enum eBurnoutMode
        {
            BURNOUTMODE_NONE,
            BURNOUTMODE_BURNOUT,
            BURNOUTMODE_DONUT,
            BURNOUTMODE_AFTERBURNOUT
        };
        static std::wstring     BurnoutModeToString                     ( eBurnoutMode value );
        static eBurnoutMode     ParseBurnoutMode                        ( const std::wstring& wstrName );

        eBurnoutMode            GetBurnoutMode                          () const;
        void                    SetBurnoutMode                          ( eBurnoutMode value );

        int                     GetCurGear                              () const;
        void                    SetCurGear                              ( int value );

        float                   GetCurRPM                               () const;
        void                    SetCurRPM                               ( float value );

        float                   GetCurSteer                             () const;
        void                    SetCurSteer                             ( float value );

        float                   GetFrontSpeed                           () const;
        void                    SetFrontSpeed                           ( float value );

        bool                    GetIsDeclutching                        () const;
        void                    SetIsDeclutching                        ( bool value );

        uint                    GetTurboRoulettePeriodMs                () const;
        void                    SetTurboRoulettePeriodMs                ( uint value );

        bool                    GetUseRawInputs                         () const;
        void                    SetUseRawInputs                         ( bool value );

        float                   GetWantsReverseGearSmoothed             () const;
        void                    SetWantsReverseGearSmoothed             ( float value );

