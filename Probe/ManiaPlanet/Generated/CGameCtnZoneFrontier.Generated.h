        enum { CLASSID = 0x0305E000 };

        static CGameCtnZoneFrontier* CreateInstance ();

        class CGameCtnBlockInfoFrontier* GetBlockInfoFrontier                    () const;
        void                    SetBlockInfoFrontier                    ( class CGameCtnBlockInfoFrontier* value );

        int                     GetBlockYOffsetFromParent               () const;
        void                    SetBlockYOffsetFromParent               ( int value );

        Id                      GetChildZoneId                          () const;
        void                    SetChildZoneId                          ( Id value );

        List < nodptr<class CGameCtnZoneFusionInfo> >& GetCompatibleZones                      () const;
        void                    SetCompatibleZones                      ( List < nodptr<class CGameCtnZoneFusionInfo> >& value );

        bool                    GetFrontierChildBorder_AcceptPylons     () const;
        void                    SetFrontierChildBorder_AcceptPylons     ( bool value );

        bool                    GetFrontierParentBorder_AcceptPylons    () const;
        void                    SetFrontierParentBorder_AcceptPylons    ( bool value );

        bool                    GetFrontierStraightMiddle_AcceptPylons  () const;
        void                    SetFrontierStraightMiddle_AcceptPylons  ( bool value );

        bool                    GetFrontierTransitionMiddle_AcceptPylons() const;
        void                    SetFrontierTransitionMiddle_AcceptPylons( bool value );

        int                     GetParentToChildHeightChange            () const;
        void                    SetParentToChildHeightChange            ( int value );

        Id                      GetParentZoneId                         () const;
        void                    SetParentZoneId                         ( Id value );

