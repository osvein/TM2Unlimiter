        enum { CLASSID = 0x0303B000 };

        static CGameCtnDecorationSize* CreateInstance ();

        uint                    GetBaseHeight                           () const;
        void                    SetBaseHeight                           ( uint value );

        Vec2D                   GetEditionZoneMax                       () const;
        void                    SetEditionZoneMax                       ( Vec2D value );

        Vec2D                   GetEditionZoneMin                       () const;
        void                    SetEditionZoneMin                       ( Vec2D value );

        bool                    GetOffsetBlockY                         () const;
        void                    SetOffsetBlockY                         ( bool value );

        class CScene3d*         GetScene                                () const;
        void                    SetScene                                ( class CScene3d* value );

        uint                    GetSizeX                                () const;
        void                    SetSizeX                                ( uint value );

        uint                    GetSizeY                                () const;
        void                    SetSizeY                                ( uint value );

        uint                    GetSizeZ                                () const;
        void                    SetSizeZ                                ( uint value );

        uint                    GetVertexCount                          () const;
        void                    SetVertexCount                          ( uint value );

