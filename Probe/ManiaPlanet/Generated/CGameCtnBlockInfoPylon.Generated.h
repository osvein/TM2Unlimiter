        enum { CLASSID = 0x03055000 };

        static CGameCtnBlockInfoPylon* CreateInstance ();

        enum ePylonAmount
        {
            PYLONAMOUNT_PYLONS_X_4,
            PYLONAMOUNT_PYLONS_X_8
        };
        static std::wstring     PylonAmountToString                     ( ePylonAmount value );
        static ePylonAmount     ParsePylonAmount                        ( const std::wstring& wstrName );

        enum ePylonPlacement
        {
            PYLONPLACEMENT_SUSTAIN_ROAD_CORE,
            PYLONPLACEMENT_SUSTAIN_ROAD_EXTERIOR
        };
        static std::wstring     PylonPlacementToString                  ( ePylonPlacement value );
        static ePylonPlacement  ParsePylonPlacement                     ( const std::wstring& wstrName );

        int                     GetBlockHeightOffset                    () const;
        void                    SetBlockHeightOffset                    ( int value );

        ePylonAmount            GetPylonAmount                          () const;
        void                    SetPylonAmount                          ( ePylonAmount value );

        float                   GetPylonOffset                          () const;
        void                    SetPylonOffset                          ( float value );

        ePylonPlacement         GetPylonPlacement                       () const;
        void                    SetPylonPlacement                       ( ePylonPlacement value );

