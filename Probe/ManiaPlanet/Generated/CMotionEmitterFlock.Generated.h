        enum { CLASSID = 0x0804F000 };

        static CMotionEmitterFlock* CreateInstance ();

        class CSceneFlockModel* GetFlockModel                           () const;
        void                    SetFlockModel                           ( class CSceneFlockModel* value );

        bool                    GetIsLandingArea                        () const;
        void                    SetIsLandingArea                        ( bool value );

        bool                    GetIsRepulsor                           () const;
        void                    SetIsRepulsor                           ( bool value );

        float                   GetPower                                () const;
        void                    SetPower                                ( float value );

        float                   GetRadius                               () const;
        void                    SetRadius                               ( float value );

        uint                    GetSpawnCount                           () const;
        void                    SetSpawnCount                           ( uint value );

        void                    UpdateParams                            ();
