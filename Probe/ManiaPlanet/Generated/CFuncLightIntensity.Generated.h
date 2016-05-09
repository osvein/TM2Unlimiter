        enum { CLASSID = 0x0500C000 };

        static CFuncLightIntensity* CreateInstance ();

        float                   GetFlickerDuration                      () const;
        void                    SetFlickerDuration                      ( float value );

        float                   GetIntensity0                           () const;
        void                    SetIntensity0                           ( float value );

        float                   GetIntensity1                           () const;
        void                    SetIntensity1                           ( float value );

