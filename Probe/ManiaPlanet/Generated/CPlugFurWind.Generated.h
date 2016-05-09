        enum { CLASSID = 0x090A6000 };

        static CPlugFurWind*    CreateInstance ();

        float                   GetIntensity                            () const;
        void                    SetIntensity                            ( float value );

        class CFuncNoise*       GetNoiseFunc                            () const;
        void                    SetNoiseFunc                            ( class CFuncNoise* value );

        Vec3D                   GetWorldDir                             () const;
        void                    SetWorldDir                             ( Vec3D value );

