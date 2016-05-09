        enum { CLASSID = 0x0802D000 };

        static CMotionCmdBaseParams* CreateInstance ();

        enum eTimeUnit
        {
            TIMEUNIT_MSECOND,
            TIMEUNIT_SECOND,
            TIMEUNIT_MINUTE,
            TIMEUNIT_HOUR,
            TIMEUNIT_DAY
        };
        static std::wstring     TimeUnitToString                        ( eTimeUnit value );
        static eTimeUnit        ParseTimeUnit                           ( const std::wstring& wstrName );

        float                   GetPeriod                               () const;
        void                    SetPeriod                               ( float value );

        float                   GetPhase                                () const;
        void                    SetPhase                                ( float value );

        eTimeUnit               GetTimeUnit                             () const;
        void                    SetTimeUnit                             ( eTimeUnit value );

