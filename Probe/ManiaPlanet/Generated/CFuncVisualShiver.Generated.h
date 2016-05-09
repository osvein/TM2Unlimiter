        enum { CLASSID = 0x0501D000 };

        static CFuncVisualShiver* CreateInstance ();

        enum eShiverType
        {
            SHIVERTYPE_NORMAL,
            SHIVERTYPE_AXIS
        };
        static std::wstring     ShiverTypeToString                      ( eShiverType value );
        static eShiverType      ParseShiverType                         ( const std::wstring& wstrName );

        float                   GetAmplitude                            () const;
        void                    SetAmplitude                            ( float value );

        Vec3D                   GetAxis                                 () const;
        void                    SetAxis                                 ( Vec3D value );

        Vec3D                   GetOffsetPlane                          () const;
        void                    SetOffsetPlane                          ( Vec3D value );

        float                   GetPlane2MinDist                        () const;
        void                    SetPlane2MinDist                        ( float value );

        Vec3D                   GetPlane2Normal                         () const;
        void                    SetPlane2Normal                         ( Vec3D value );

        Vec3D                   GetPlane2Point                          () const;
        void                    SetPlane2Point                          ( Vec3D value );

        float                   GetPlaneMinDist                         () const;
        void                    SetPlaneMinDist                         ( float value );

        Vec3D                   GetPlaneNormal                          () const;
        void                    SetPlaneNormal                          ( Vec3D value );

        Vec3D                   GetPlanePoint                           () const;
        void                    SetPlanePoint                           ( Vec3D value );

        eShiverType             GetShiverType                           () const;
        void                    SetShiverType                           ( eShiverType value );

        bool                    GetUsePlane                             () const;
        void                    SetUsePlane                             ( bool value );

        bool                    GetUsePlane2                            () const;
        void                    SetUsePlane2                            ( bool value );

