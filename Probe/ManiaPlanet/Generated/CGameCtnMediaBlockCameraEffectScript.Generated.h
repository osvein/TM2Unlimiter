        enum { CLASSID = 0x03161000 };

        static CGameCtnMediaBlockCameraEffectScript* CreateInstance ();

        float                   GetA                                    () const;
        void                    SetA                                    ( float value );

        float                   GetB                                    () const;
        void                    SetB                                    ( float value );

        float                   GetC                                    () const;
        void                    SetC                                    ( float value );

        float                   GetNow                                  () const;
        void                    SetNow                                  ( float value );

        Vec3D                   GetOffsetPos                            () const;
        void                    SetOffsetPos                            ( Vec3D value );

        Vec3D                   GetOffsetRot                            () const;
        void                    SetOffsetRot                            ( Vec3D value );

