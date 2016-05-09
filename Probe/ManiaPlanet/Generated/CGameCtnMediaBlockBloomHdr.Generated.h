        enum { CLASSID = 0x03128000 };

        static CGameCtnMediaBlockBloomHdr* CreateInstance ();

        float                   GetIntensity                            () const;
        void                    SetIntensity                            ( float value );

        float                   GetStreaksAttenuation                   () const;
        void                    SetStreaksAttenuation                   ( float value );

        float                   GetStreaksIntensity                     () const;
        void                    SetStreaksIntensity                     ( float value );

