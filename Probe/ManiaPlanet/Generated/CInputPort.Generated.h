        enum { CLASSID = 0x13001000 };

        static CInputPort*      CreateInstance ();

        enum eInputsMode
        {
            INPUTSMODE_TIMED,
            INPUTSMODE_NOTTIMED,
            INPUTSMODE_CONFIG
        };
        static std::wstring     InputsModeToString                      ( eInputsMode value );
        static eInputsMode      ParseInputsMode                         ( const std::wstring& wstrName );

        enum eMouseVisibility
        {
            MOUSEVISIBILITY_AUTO,
            MOUSEVISIBILITY_FORCEHIDE,
            MOUSEVISIBILITY_FORCESHOW
        };
        static std::wstring     MouseVisibilityToString                 ( eMouseVisibility value );
        static eMouseVisibility ParseMouseVisibility                    ( const std::wstring& wstrName );

        Array < class CInputDevice* >& GetConnectedDevices                     () const;
        void                    SetConnectedDevices                     ( Array < class CInputDevice* >& value );

        StringA                 GetCurrentActionMap                     () const;
        void                    SetCurrentActionMap                     ( StringA value );

        uint                    GetEventInStoreCount                    () const;
        void                    SetEventInStoreCount                    ( uint value );

        eInputsMode             GetInputsMode                           () const;
        void                    SetInputsMode                           ( eInputsMode value );

        class CInputReplay*     GetInputsReplay_Replay                  () const;
        void                    SetInputsReplay_Replay                  ( class CInputReplay* value );

        bool                    GetIsDoingIME                           () const;
        void                    SetIsDoingIME                           ( bool value );

        uint                    GetMaxSampleRate                        () const;
        void                    SetMaxSampleRate                        ( uint value );

        uint                    GetMinHistoryLength                     () const;
        void                    SetMinHistoryLength                     ( uint value );

        eMouseVisibility        GetMouseVisibility                      () const;
        void                    SetMouseVisibility                      ( eMouseVisibility value );

        bool                    GetPollingEnabled                       () const;
        void                    SetPollingEnabled                       ( bool value );

        float                   GetRumbleIntensity                      () const;
        void                    SetRumbleIntensity                      ( float value );

        uint                    GetStatsDInputEventsCount               () const;
        void                    SetStatsDInputEventsCount               ( uint value );

        uint                    GetStatsDInputEventsLastFrame           () const;
        void                    SetStatsDInputEventsLastFrame           ( uint value );

        uint                    GetStatsDInputOverflowCount             () const;
        void                    SetStatsDInputOverflowCount             ( uint value );

        bool                    GetStatsDInputOverflowedLastFrame       () const;
        void                    SetStatsDInputOverflowedLastFrame       ( bool value );

        uint                    GetStatsDInputTimedEventsCount          () const;
        void                    SetStatsDInputTimedEventsCount          ( uint value );

        uint                    GetStatsDInputWrongTimestampAhead       () const;
        void                    SetStatsDInputWrongTimestampAhead       ( uint value );

        float                   GetStatsDInputWrongTimestampAvgDelta    () const;
        void                    SetStatsDInputWrongTimestampAvgDelta    ( float value );

        uint                    GetStatsDInputWrongTimestampLate        () const;
        void                    SetStatsDInputWrongTimestampLate        ( uint value );

        float                   GetStatsDInputWrongTimestampRatioAhead  () const;
        void                    SetStatsDInputWrongTimestampRatioAhead  ( float value );

        float                   GetStatsDInputWrongTimestampRatioLate   () const;
        void                    SetStatsDInputWrongTimestampRatioLate   ( float value );

        uint                    GetStatsLatestEvent                     () const;
        void                    SetStatsLatestEvent                     ( uint value );

        uint                    GetStatsNbMappedInputsReceived          () const;
        void                    SetStatsNbMappedInputsReceived          ( uint value );

        void                    DeviceHotPlugUpdate                     ();
        void                    InputsReplay_Pause                      ();
        void                    InputsReplay_Playback                   ();
        void                    InputsReplay_Record                     ();
        void                    InputsReplay_Resume                     ();
        void                    InputsReplay_Stop                       ();
