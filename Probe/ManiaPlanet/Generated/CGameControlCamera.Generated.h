        enum { CLASSID = 0x0306B000 };

        static CGameControlCamera* CreateInstance ();

        float                   GetDefaultFarZ                          () const;
        void                    SetDefaultFarZ                          ( float value );

        float                   GetDefaultFov                           () const;
        void                    SetDefaultFov                           ( float value );

        float                   GetDefaultNearZ                         () const;
        void                    SetDefaultNearZ                         ( float value );

        float                   GetFarZ                                 () const;
        void                    SetFarZ                                 ( float value );

        uint                    GetFollowedGameMobilId                  () const;
        void                    SetFollowedGameMobilId                  ( uint value );

        Matrix43                GetForcedLocation                       () const;
        void                    SetForcedLocation                       ( Matrix43 value );

        Vec3D                   GetForcedUp                             () const;
        void                    SetForcedUp                             ( Vec3D value );

        float                   GetFov                                  () const;
        void                    SetFov                                  ( float value );

        class CGameScene*       GetGameScene                            () const;
        void                    SetGameScene                            ( class CGameScene* value );

        bool                    GetIsActive                             () const;
        void                    SetIsActive                             ( bool value );

        bool                    GetIsFirstPerson                        () const;
        void                    SetIsFirstPerson                        ( bool value );

        bool                    GetIsFollowing                          () const;
        void                    SetIsFollowing                          ( bool value );

        float                   GetMaxDist                              () const;
        void                    SetMaxDist                              ( float value );

        float                   GetMaxFarZ                              () const;
        void                    SetMaxFarZ                              ( float value );

        float                   GetMaxFov                               () const;
        void                    SetMaxFov                               ( float value );

        float                   GetMaxNearZ                             () const;
        void                    SetMaxNearZ                             ( float value );

        float                   GetMaxSpeed                             () const;
        void                    SetMaxSpeed                             ( float value );

        float                   GetMinDist                              () const;
        void                    SetMinDist                              ( float value );

        float                   GetMinFarZ                              () const;
        void                    SetMinFarZ                              ( float value );

        float                   GetMinFov                               () const;
        void                    SetMinFov                               ( float value );

        float                   GetMinNearZ                             () const;
        void                    SetMinNearZ                             ( float value );

        float                   GetNearZ                                () const;
        void                    SetNearZ                                ( float value );

        float                   GetPlaneDist                            () const;
        void                    SetPlaneDist                            ( float value );

        Vec3D                   GetRelativeFollowedPos                  () const;
        void                    SetRelativeFollowedPos                  ( Vec3D value );

        Vec3D                   GetSpeed                                () const;
        void                    SetSpeed                                ( Vec3D value );

        bool                    GetUseFollowedOrientation               () const;
        void                    SetUseFollowedOrientation               ( bool value );

        bool                    GetUseForcedLocation                    () const;
        void                    SetUseForcedLocation                    ( bool value );

        bool                    GetUseForcedUp                          () const;
        void                    SetUseForcedUp                          ( bool value );

        bool                    GetUseOnlyFollowedMobilPosition         () const;
        void                    SetUseOnlyFollowedMobilPosition         ( bool value );

        void                    Reset                                   ();
