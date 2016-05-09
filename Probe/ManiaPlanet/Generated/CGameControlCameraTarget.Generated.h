        enum { CLASSID = 0x03072000 };

        static CGameControlCameraTarget* CreateInstance ();

        bool                    GetCanUseRelativeTargetLocation         () const;
        void                    SetCanUseRelativeTargetLocation         ( bool value );

        bool                    GetInterpolate                          () const;
        void                    SetInterpolate                          ( bool value );

        bool                    GetIsUpLinked                           () const;
        void                    SetIsUpLinked                           ( bool value );

        float                   GetLookAtFactor                         () const;
        void                    SetLookAtFactor                         ( float value );

        Matrix43                GetRelativeTargetLocation               () const;
        void                    SetRelativeTargetLocation               ( Matrix43 value );

        uint                    GetTargetGameMobilId                    () const;
        void                    SetTargetGameMobilId                    ( uint value );

        Vec3D                   GetTranslation                          () const;
        void                    SetTranslation                          ( Vec3D value );

