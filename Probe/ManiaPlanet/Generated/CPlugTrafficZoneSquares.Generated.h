        enum { CLASSID = 0x090D2000 };

        static CPlugTrafficZoneSquares* CreateInstance ();

        float                   GetAcceleration                         () const;
        void                    SetAcceleration                         ( float value );

        float                   GetCurrentPitch                         () const;
        void                    SetCurrentPitch                         ( float value );

        float                   GetCurrentSpeed                         () const;
        void                    SetCurrentSpeed                         ( float value );

        float                   GetCurrentYaw                           () const;
        void                    SetCurrentYaw                           ( float value );

        Id                      GetId                                   () const;
        void                    SetId                                   ( Id value );

        float                   GetMaxSpeed                             () const;
        void                    SetMaxSpeed                             ( float value );

        float                   GetMaxSpeedDistance                     () const;
        void                    SetMaxSpeedDistance                     ( float value );

        float                   GetMinSpeed                             () const;
        void                    SetMinSpeed                             ( float value );

        float                   GetMinSpeedDistance                     () const;
        void                    SetMinSpeedDistance                     ( float value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        float                   GetPitchSpeed                           () const;
        void                    SetPitchSpeed                           ( float value );

        List < uint3 >&         GetSquares                              () const;
        void                    SetSquares                              ( List < uint3 >& value );

        float                   GetYawSpeed                             () const;
        void                    SetYawSpeed                             ( float value );

