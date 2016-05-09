        enum { CLASSID = 0x240D0000 };

        static CTrackManiaRaceAnalyzer* CreateInstance ();

        uint                    GetInputDeltaT1                         () const;
        void                    SetInputDeltaT1                         ( uint value );

        uint                    GetInputDeltaT2                         () const;
        void                    SetInputDeltaT2                         ( uint value );

        uint                    GetInputDeltaT3                         () const;
        void                    SetInputDeltaT3                         ( uint value );

        class CMwStatsValue*    GetInputValue1                          () const;
        void                    SetInputValue1                          ( class CMwStatsValue* value );

        class CMwStatsValue*    GetInputValue2                          () const;
        void                    SetInputValue2                          ( class CMwStatsValue* value );

        uint                    GetValidationSeed                       () const;
        void                    SetValidationSeed                       ( uint value );

