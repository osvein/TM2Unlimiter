        enum { CLASSID = 0x0A033000 };

        static CSceneMgrFlock*  CreateInstance ();

        float                   GetDistanceToSpeed                      () const;
        void                    SetDistanceToSpeed                      ( float value );

        class CSceneFlockModel* GetFlockModel                           () const;
        void                    SetFlockModel                           ( class CSceneFlockModel* value );

        bool                    GetIsPlaying                            () const;
        void                    SetIsPlaying                            ( bool value );

        float                   GetOtherEmitterBirdsInfluence           () const;
        void                    SetOtherEmitterBirdsInfluence           ( float value );

        float                   GetPitchMax                             () const;
        void                    SetPitchMax                             ( float value );

        float                   GetPitchSpeed                           () const;
        void                    SetPitchSpeed                           ( float value );

        float                   GetPitchUpSpeed                         () const;
        void                    SetPitchUpSpeed                         ( float value );

        float                   GetRollMax                              () const;
        void                    SetRollMax                              ( float value );

        float                   GetRollSpeed                            () const;
        void                    SetRollSpeed                            ( float value );

        float                   GetRollUpSpeed                          () const;
        void                    SetRollUpSpeed                          ( float value );

        float                   GetYawMax                               () const;
        void                    SetYawMax                               ( float value );

        float                   GetYawSpeed                             () const;
        void                    SetYawSpeed                             ( float value );

        void                    Restart                                 ();
