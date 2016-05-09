        enum { CLASSID = 0x0314D000 };

        static CGameCtnZoneTransition* CreateInstance ();

        enum eBorder_East
        {
            BORDER_EAST_PARENT,
            BORDER_EAST_PARENTTOCHILD,
            BORDER_EAST_CHILDTOPARENT,
            BORDER_EAST_STRAIGHT,
            BORDER_EAST_CHILD
        };
        static std::wstring     Border_EastToString                     ( eBorder_East value );
        static eBorder_East     ParseBorder_East                        ( const std::wstring& wstrName );

        enum eBorder_North
        {
            BORDER_NORTH_PARENT,
            BORDER_NORTH_PARENTTOCHILD,
            BORDER_NORTH_CHILDTOPARENT,
            BORDER_NORTH_STRAIGHT,
            BORDER_NORTH_CHILD
        };
        static std::wstring     Border_NorthToString                    ( eBorder_North value );
        static eBorder_North    ParseBorder_North                       ( const std::wstring& wstrName );

        enum eBorder_South
        {
            BORDER_SOUTH_PARENT,
            BORDER_SOUTH_PARENTTOCHILD,
            BORDER_SOUTH_CHILDTOPARENT,
            BORDER_SOUTH_STRAIGHT,
            BORDER_SOUTH_CHILD
        };
        static std::wstring     Border_SouthToString                    ( eBorder_South value );
        static eBorder_South    ParseBorder_South                       ( const std::wstring& wstrName );

        enum eBorder_West
        {
            BORDER_WEST_PARENT,
            BORDER_WEST_PARENTTOCHILD,
            BORDER_WEST_CHILDTOPARENT,
            BORDER_WEST_STRAIGHT,
            BORDER_WEST_CHILD
        };
        static std::wstring     Border_WestToString                     ( eBorder_West value );
        static eBorder_West     ParseBorder_West                        ( const std::wstring& wstrName );

        enum eTransitionType
        {
            TRANSITIONTYPE_CUSTOM,
            TRANSITIONTYPE_TRIZONE,
            TRANSITIONTYPE_OVERLAP
        };
        static std::wstring     TransitionTypeToString                  ( eTransitionType value );
        static eTransitionType  ParseTransitionType                     ( const std::wstring& wstrName );

        class CGameCtnBlockInfoTransition* GetBlockInfoTransition                  () const;
        void                    SetBlockInfoTransition                  ( class CGameCtnBlockInfoTransition* value );

        eBorder_East            GetBorder_East                          () const;
        void                    SetBorder_East                          ( eBorder_East value );

        eBorder_North           GetBorder_North                         () const;
        void                    SetBorder_North                         ( eBorder_North value );

        eBorder_South           GetBorder_South                         () const;
        void                    SetBorder_South                         ( eBorder_South value );

        eBorder_West            GetBorder_West                          () const;
        void                    SetBorder_West                          ( eBorder_West value );

        Id                      GetFrontierId_0To1                      () const;
        void                    SetFrontierId_0To1                      ( Id value );

        Id                      GetFrontierId_0To2                      () const;
        void                    SetFrontierId_0To2                      ( Id value );

        Id                      GetFrontierId_1To2                      () const;
        void                    SetFrontierId_1To2                      ( Id value );

        Id                      GetFrontierId_Base                      () const;
        void                    SetFrontierId_Base                      ( Id value );

        Id                      GetFrontierId_BaseToOverlap             () const;
        void                    SetFrontierId_BaseToOverlap             ( Id value );

        Id                      GetFrontierId_Overlap                   () const;
        void                    SetFrontierId_Overlap                   ( Id value );

        class CGameCtnZoneGenealogy* GetGenealogy_East                       () const;
        void                    SetGenealogy_East                       ( class CGameCtnZoneGenealogy* value );

        class CGameCtnZoneGenealogy* GetGenealogy_North                      () const;
        void                    SetGenealogy_North                      ( class CGameCtnZoneGenealogy* value );

        class CGameCtnZoneGenealogy* GetGenealogy_South                      () const;
        void                    SetGenealogy_South                      ( class CGameCtnZoneGenealogy* value );

        class CGameCtnZoneGenealogy* GetGenealogy_West                       () const;
        void                    SetGenealogy_West                       ( class CGameCtnZoneGenealogy* value );

        Id                      GetReplacementZoneId                    () const;
        void                    SetReplacementZoneId                    ( Id value );

        eTransitionType         GetTransitionType                       () const;
        void                    SetTransitionType                       ( eTransitionType value );

