        enum { CLASSID = 0x03071000 };

        static CGameControlCameraEffectShake* CreateInstance ();

        float                   GetIntensity                            () const;
        void                    SetIntensity                            ( float value );

        Vec3D                   GetOffsetPos                            () const;
        void                    SetOffsetPos                            ( Vec3D value );

        float                   GetPitch                                () const;
        void                    SetPitch                                ( float value );

        float                   GetRoll                                 () const;
        void                    SetRoll                                 ( float value );

        float                   GetSpeed                                () const;
        void                    SetSpeed                                ( float value );

        float                   GetYaw                                  () const;
        void                    SetYaw                                  ( float value );

