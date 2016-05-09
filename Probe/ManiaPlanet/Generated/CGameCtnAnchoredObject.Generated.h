        enum { CLASSID = 0x03101000 };

        static CGameCtnAnchoredObject* CreateInstance ();

        Id                      GetAnchorTreeId                         () const;
        void                    SetAnchorTreeId                         ( Id value );

        Matrix43                GetBlockLocation                        () const;
        void                    SetBlockLocation                        ( Matrix43 value );

        uint3                   GetBlockUnitCoord                       () const;
        void                    SetBlockUnitCoord                       ( uint3 value );

        bool                    GetIsLocationInitialised                () const;
        void                    SetIsLocationInitialised                ( bool value );

        Matrix43                GetLocationInBlock                      () const;
        void                    SetLocationInBlock                      ( Matrix43 value );

        class CGameCtnObjectInfo* GetObjectInfo                           () const;
        void                    SetObjectInfo                           ( class CGameCtnObjectInfo* value );

        float                   GetPitch                                () const;
        void                    SetPitch                                ( float value );

        Vec3D                   GetRelativePosition                     () const;
        void                    SetRelativePosition                     ( Vec3D value );

        float                   GetRoll                                 () const;
        void                    SetRoll                                 ( float value );

        class CGameWaypointSpecialProperty* GetWaypointSpecialProperty              () const;
        void                    SetWaypointSpecialProperty              ( class CGameWaypointSpecialProperty* value );

        float                   GetYaw                                  () const;
        void                    SetYaw                                  ( float value );

