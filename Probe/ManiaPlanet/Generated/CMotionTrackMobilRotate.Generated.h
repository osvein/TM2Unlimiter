        enum { CLASSID = 0x08035000 };

        static CMotionTrackMobilRotate* CreateInstance ();

        Vec3D                   GetAxe                                  () const;
        void                    SetAxe                                  ( Vec3D value );

        bool                    GetIsLeftMult                           () const;
        void                    SetIsLeftMult                           ( bool value );

        float                   GetLoopAngle                            () const;
        void                    SetLoopAngle                            ( float value );

        Vec3D                   GetRotationCenter                       () const;
        void                    SetRotationCenter                       ( Vec3D value );

