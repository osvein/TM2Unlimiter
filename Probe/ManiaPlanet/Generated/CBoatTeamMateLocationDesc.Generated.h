        enum { CLASSID = 0x0A109000 };

        static CBoatTeamMateLocationDesc* CreateInstance ();

        Id                      GetLocationId                           () const;
        void                    SetLocationId                           ( Id value );

        float                   GetRotationYDeg                         () const;
        void                    SetRotationYDeg                         ( float value );

        Vec3D                   GetTranslation                          () const;
        void                    SetTranslation                          ( Vec3D value );

