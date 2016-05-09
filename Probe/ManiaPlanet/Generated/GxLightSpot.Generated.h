        enum { CLASSID = 0x0400B000 };

        static GxLightSpot*     CreateInstance ();

        float                   GetAngleFlare                           () const;
        void                    SetAngleFlare                           ( float value );

        float                   GetAngleInner                           () const;
        void                    SetAngleInner                           ( float value );

        float                   GetAngleInnerShadow                     () const;
        void                    SetAngleInnerShadow                     ( float value );

        float                   GetAngleOuter                           () const;
        void                    SetAngleOuter                           ( float value );

        float                   GetAngleOuterShadow                     () const;
        void                    SetAngleOuterShadow                     ( float value );

        bool                    GetCustomAngleFlare                     () const;
        void                    SetCustomAngleFlare                     ( bool value );

        bool                    GetCustomAngleShadow                    () const;
        void                    SetCustomAngleShadow                    ( bool value );

