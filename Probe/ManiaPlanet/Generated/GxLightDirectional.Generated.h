        enum { CLASSID = 0x04007000 };

        static GxLightDirectional* CreateInstance ();

        Vec3D                   GetBoundaryHintPos                      () const;
        void                    SetBoundaryHintPos                      ( Vec3D value );

        float                   GetDazzleAngleMax                       () const;
        void                    SetDazzleAngleMax                       ( float value );

        float                   GetDazzleIntensity                      () const;
        void                    SetDazzleIntensity                      ( float value );

        color                   GetDblSidedRGB                          () const;
        void                    SetDblSidedRGB                          ( color value );

        float                   GetEmittAngularSize                     () const;
        void                    SetEmittAngularSize                     ( float value );

        float                   GetFlareAngularSize                     () const;
        void                    SetFlareAngularSize                     ( float value );

        float                   GetFlareIntensPower                     () const;
        void                    SetFlareIntensPower                     ( float value );

        float                   GetReverseIntens                        () const;
        void                    SetReverseIntens                        ( float value );

        color                   GetReverseRGB                           () const;
        void                    SetReverseRGB                           ( color value );

        bool                    GetUseBoundaryHint                      () const;
        void                    SetUseBoundaryHint                      ( bool value );

