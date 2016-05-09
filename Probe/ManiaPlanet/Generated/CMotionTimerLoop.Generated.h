        enum { CLASSID = 0x08056000 };

        static CMotionTimerLoop* CreateInstance ();

        uint                    GetRealTimePhase                        () const;
        void                    SetRealTimePhase                        ( uint value );

        float                   GetTimeIn01                             () const;
        void                    SetTimeIn01                             ( float value );

        void                    Stop                                    ();
