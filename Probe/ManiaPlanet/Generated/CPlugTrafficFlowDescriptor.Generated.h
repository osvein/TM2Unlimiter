        enum { CLASSID = 0x090DE000 };

        static CPlugTrafficFlowDescriptor* CreateInstance ();

        float                   GetDensity                              () const;
        void                    SetDensity                              ( float value );

        bool                    GetDrivingDirection                     () const;
        void                    SetDrivingDirection                     ( bool value );

        float                   GetInitialOffset                        () const;
        void                    SetInitialOffset                        ( float value );

        uint                    GetInitialRandSeed                      () const;
        void                    SetInitialRandSeed                      ( uint value );

        float                   GetMinVehiclesSpacing                   () const;
        void                    SetMinVehiclesSpacing                   ( float value );

        float                   GetSpeed                                () const;
        void                    SetSpeed                                ( float value );

