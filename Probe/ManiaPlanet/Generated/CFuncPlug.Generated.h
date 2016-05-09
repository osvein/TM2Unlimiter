        enum { CLASSID = 0x0500B000 };

        static CFuncPlug*       CreateInstance ();

        bool                    GetAutoCreateMotion                     () const;
        void                    SetAutoCreateMotion                     ( bool value );

        Id                      GetInputVal                             () const;
        void                    SetInputVal                             ( Id value );

        float                   GetPeriod                               () const;
        void                    SetPeriod                               ( float value );

        float                   GetPhase                                () const;
        void                    SetPhase                                ( float value );

        bool                    GetRandomizePhase                       () const;
        void                    SetRandomizePhase                       ( bool value );

