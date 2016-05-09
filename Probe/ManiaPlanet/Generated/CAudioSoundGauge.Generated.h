        enum { CLASSID = 0x1000A000 };

        static CAudioSoundGauge* CreateInstance ();

        float                   GetFullRatio                            () const;
        void                    SetFullRatio                            ( float value );

        float                   GetGradingRatio                         () const;
        void                    SetGradingRatio                         ( float value );

        float                   GetRate                                 () const;
        void                    SetRate                                 ( float value );

        float                   GetRatio                                () const;
        void                    SetRatio                                ( float value );

