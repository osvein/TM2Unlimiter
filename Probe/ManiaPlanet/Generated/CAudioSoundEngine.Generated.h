        enum { CLASSID = 0x10005000 };

        static CAudioSoundEngine* CreateInstance ();

        float                   GetAccel                                () const;
        void                    SetAccel                                ( float value );

        float                   GetAlpha                                () const;
        void                    SetAlpha                                ( float value );

        float                   GetRpm                                  () const;
        void                    SetRpm                                  ( float value );

        float                   GetRpmNormalised                        () const;
        void                    SetRpmNormalised                        ( float value );

        float                   GetVehicleSpeed                         () const;
        void                    SetVehicleSpeed                         ( float value );

