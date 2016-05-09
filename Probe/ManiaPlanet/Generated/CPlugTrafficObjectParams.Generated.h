        enum { CLASSID = 0x090D1000 };

        static CPlugTrafficObjectParams* CreateInstance ();

        enum eTrafficModel
        {
            TRAFFICMODEL_LINEAR_CONSTANT,
            TRAFFICMODEL_LINEAR_FOLLOW,
            TRAFFICMODEL_ZONE_RANDOM_BOUNCE,
            TRAFFICMODEL_ZONE_FOLLOW,
            TRAFFICMODEL_DIRECTION_FOLLOW,
            TRAFFICMODEL_WAIT_FOR_PICKUP,
            TRAFFICMODEL_A_FOLLOW,
            TRAFFICMODEL_A_CONSTANT_AIR,
            TRAFFICMODEL_LINEAR_STOP_AND_ROTATE,
            TRAFFICMODEL_A_CONSTANT_GROUND
        };
        static std::wstring     TrafficModelToString                    ( eTrafficModel value );
        static eTrafficModel    ParseTrafficModel                       ( const std::wstring& wstrName );

        enum eTrafficPathType
        {
            TRAFFICPATHTYPE_SPLINE_PATH,
            TRAFFICPATHTYPE_SQUARES_PATH,
            TRAFFICPATHTYPE_SQUARES_ZONE
        };
        static std::wstring     TrafficPathTypeToString                 ( eTrafficPathType value );
        static eTrafficPathType ParseTrafficPathType                    ( const std::wstring& wstrName );

        Matrix43                GetBaseOffset                           () const;
        void                    SetBaseOffset                           ( Matrix43 value );

        float                   GetDefaultAcceleration                  () const;
        void                    SetDefaultAcceleration                  ( float value );

        float                   GetDefaultDecceleration                 () const;
        void                    SetDefaultDecceleration                 ( float value );

        float                   GetDefaultSpeed                         () const;
        void                    SetDefaultSpeed                         ( float value );

        uint                    GetPointDelay                           () const;
        void                    SetPointDelay                           ( uint value );

        eTrafficModel           GetTrafficModel                         () const;
        void                    SetTrafficModel                         ( eTrafficModel value );

        eTrafficPathType        GetTrafficPathType                      () const;
        void                    SetTrafficPathType                      ( eTrafficPathType value );

