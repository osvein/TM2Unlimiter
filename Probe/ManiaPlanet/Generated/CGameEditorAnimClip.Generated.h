        enum { CLASSID = 0x0314B000 };

        static CGameEditorAnimClip* CreateInstance ();

        float                   GetClipDuration                         () const;
        void                    SetClipDuration                         ( float value );

        bool                    GetClipIsLooping                        () const;
        void                    SetClipIsLooping                        ( bool value );

        Id                      GetClipName                             () const;
        void                    SetClipName                             ( Id value );

        float                   GetCollisionMargin                      () const;
        void                    SetCollisionMargin                      ( float value );

        bool                    GetCollisions                           () const;
        void                    SetCollisions                           ( bool value );

        Id                      GetDbgBoneId                            () const;
        void                    SetDbgBoneId                            ( Id value );

        bool                    GetDbgDrawJointCurves                   () const;
        void                    SetDbgDrawJointCurves                   ( bool value );

        float                   GetDbgIKTolerance                       () const;
        void                    SetDbgIKTolerance                       ( float value );

        bool                    GetDbgIKs                               () const;
        void                    SetDbgIKs                               ( bool value );

        int                     GetDbgJoint                             () const;
        void                    SetDbgJoint                             ( int value );

        int                     GetDbgSkel                              () const;
        void                    SetDbgSkel                              ( int value );

        bool                    GetDbgTestIK                            () const;
        void                    SetDbgTestIK                            ( bool value );

        float                   GetDbgVal                               () const;
        void                    SetDbgVal                               ( float value );

        bool                    GetDrawGrid                             () const;
        void                    SetDrawGrid                             ( bool value );

        bool                    GetDrawJointWeights                     () const;
        void                    SetDrawJointWeights                     ( bool value );

        bool                    GetDrawRefBox                           () const;
        void                    SetDrawRefBox                           ( bool value );

        float                   GetLowerJaw                             () const;
        void                    SetLowerJaw                             ( float value );

        bool                    GetPreviewLoop                          () const;
        void                    SetPreviewLoop                          ( bool value );

        bool                    GetRemoveRootMotion                     () const;
        void                    SetRemoveRootMotion                     ( bool value );

        uint                    GetTime                                 () const;
        void                    SetTime                                 ( uint value );

