        enum { CLASSID = 0x01020000 };

        static CMwCmdBufferCore* CreateInstance ();

        uint                    GetComputerTime                         () const;
        void                    SetComputerTime                         ( uint value );

        float                   GetDeltaSmoothed                        () const;
        void                    SetDeltaSmoothed                        ( float value );

        float                   GetDeltaSmoothing                       () const;
        void                    SetDeltaSmoothing                       ( float value );

        uint                    GetGameTime                             () const;
        void                    SetGameTime                             ( uint value );

        uint                    GetHumanTime                            () const;
        void                    SetHumanTime                            ( uint value );

        bool                    GetIsEnabled                            () const;
        void                    SetIsEnabled                            ( bool value );

        bool                    GetIsLagForbidden                       () const;
        void                    SetIsLagForbidden                       ( bool value );

        float                   GetPeriodEstimated                      () const;
        void                    SetPeriodEstimated                      ( float value );

        float                   GetPeriodSmoothing                      () const;
        void                    SetPeriodSmoothing                      ( float value );

        float                   GetSimulationRelativeSpeed              () const;
        void                    SetSimulationRelativeSpeed              ( float value );

        uint                    GetSimulationTime                       () const;
        void                    SetSimulationTime                       ( uint value );

