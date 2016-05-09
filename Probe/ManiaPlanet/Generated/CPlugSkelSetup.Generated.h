        enum { CLASSID = 0x090C8000 };

        static CPlugSkelSetup*  CreateInstance ();

        float                   GetFootIKCenteringCoefConvSpeed         () const;
        void                    SetFootIKCenteringCoefConvSpeed         ( float value );

        float                   GetFootIKCenteringCoefMax               () const;
        void                    SetFootIKCenteringCoefMax               ( float value );

        float                   GetFootIKCenteringHipsElevation         () const;
        void                    SetFootIKCenteringHipsElevation         ( float value );

        bool                    GetFootIKEnabled                        () const;
        void                    SetFootIKEnabled                        ( bool value );

        float                   GetFootIKEndLodZ                        () const;
        void                    SetFootIKEndLodZ                        ( float value );

        float                   GetFootIKRayLen                         () const;
        void                    SetFootIKRayLen                         ( float value );

        float                   GetFootIKRayRadius                      () const;
        void                    SetFootIKRayRadius                      ( float value );

        float                   GetFootIKSlopeMaxDeg                    () const;
        void                    SetFootIKSlopeMaxDeg                    ( float value );

        float                   GetFootIKTargetConvSpeed                () const;
        void                    SetFootIKTargetConvSpeed                ( float value );

        float                   GetFootIkRayStartOffetY                 () const;
        void                    SetFootIkRayStartOffetY                 ( float value );

        uint                    GetLowerJawJoint                        () const;
        void                    SetLowerJawJoint                        ( uint value );

        Vec3D                   GetLowerJawRotLocalAxis                 () const;
        void                    SetLowerJawRotLocalAxis                 ( Vec3D value );

        float                   GetLowerJawRotMaxAngleDeg               () const;
        void                    SetLowerJawRotMaxAngleDeg               ( float value );

        void                    EdBuildPhysicalBonesSample              ();
