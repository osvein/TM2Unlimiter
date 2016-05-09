        enum { CLASSID = 0x0311D000 };

        static CGameCtnZoneGenealogy* CreateInstance ();

        enum eDir
        {
            DIR_NORTH,
            DIR_EAST,
            DIR_SOUTH,
            DIR_WEST
        };
        static std::wstring     DirToString                             ( eDir value );
        static eDir             ParseDir                                ( const std::wstring& wstrName );

        int                     GetBaseHeight                           () const;
        void                    SetBaseHeight                           ( int value );

        int                     GetBottomHeight                         () const;
        void                    SetBottomHeight                         ( int value );

        uint                    GetCurrentIndex                         () const;
        void                    SetCurrentIndex                         ( uint value );

        class CGameCtnZone*     GetCurrentZone                          () const;
        void                    SetCurrentZone                          ( class CGameCtnZone* value );

        Id                      GetCurrentZoneId                        () const;
        void                    SetCurrentZoneId                        ( Id value );

        eDir                    GetDir                                  () const;
        void                    SetDir                                  ( eDir value );

        int                     GetTopHeight                            () const;
        void                    SetTopHeight                            ( int value );

        List < int >&           GetZoneHeights                          () const;
        void                    SetZoneHeights                          ( List < int >& value );

        List < Id >&            GetZoneIds                              () const;
        void                    SetZoneIds                              ( List < Id >& value );

        List < nodptr<class CGameCtnZone> >& GetZones                                () const;
        void                    SetZones                                ( List < nodptr<class CGameCtnZone> >& value );

        void                    AddZoneId                               ();
        void                    RemoveLastZoneId                        ();
