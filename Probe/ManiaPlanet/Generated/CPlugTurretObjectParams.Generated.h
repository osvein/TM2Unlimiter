        enum { CLASSID = 0x090D6000 };

        static CPlugTurretObjectParams* CreateInstance ();

        float                   GetBasePitch                            () const;
        void                    SetBasePitch                            ( float value );

        float                   GetBaseYaw                              () const;
        void                    SetBaseYaw                              ( float value );

        Matrix43                GetBulletOffset                         () const;
        void                    SetBulletOffset                         ( Matrix43 value );

        Id                      GetGunId                                () const;
        void                    SetGunId                                ( Id value );

        float                   GetHorizontalFOV                        () const;
        void                    SetHorizontalFOV                        ( float value );

        float                   GetMaxShootDistance                     () const;
        void                    SetMaxShootDistance                     ( float value );

        float                   GetMinShootDistance                     () const;
        void                    SetMinShootDistance                     ( float value );

        float                   GetPitchSpeed                           () const;
        void                    SetPitchSpeed                           ( float value );

        uint                    GetShootPeriod                          () const;
        void                    SetShootPeriod                          ( uint value );

        float                   GetYawSpeed                             () const;
        void                    SetYawSpeed                             ( float value );

