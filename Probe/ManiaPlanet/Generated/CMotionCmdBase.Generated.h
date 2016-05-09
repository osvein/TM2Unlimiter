        enum { CLASSID = 0x08029000 };

        static CMotionCmdBase*  CreateInstance ();

        enum eWaveType
        {
            WAVETYPE_SIN,
            WAVETYPE_TRIANGLE,
            WAVETYPE_SQUARE,
            WAVETYPE_SAWTOOTH,
            WAVETYPE_INVERSESAWTOOTH
        };
        static std::wstring     WaveTypeToString                        ( eWaveType value );
        static eWaveType        ParseWaveType                           ( const std::wstring& wstrName );

        class CMotionCmdBaseParams* GetCmdBaseParams                        () const;
        void                    SetCmdBaseParams                        ( class CMotionCmdBaseParams* value );

        bool                    GetIsAbsolutePhase                      () const;
        void                    SetIsAbsolutePhase                      ( bool value );

        bool                    GetIsOnce                               () const;
        void                    SetIsOnce                               ( bool value );

        uint                    GetLoopCount                            () const;
        void                    SetLoopCount                            ( uint value );

        float                   GetNormedValue                          () const;
        void                    SetNormedValue                          ( float value );

        float                   GetPeriod                               () const;
        void                    SetPeriod                               ( float value );

        float                   GetPhase                                () const;
        void                    SetPhase                                ( float value );

        float                   GetValue                                () const;
        void                    SetValue                                ( float value );

        eWaveType               GetWaveType                             () const;
        void                    SetWaveType                             ( eWaveType value );

