        enum { CLASSID = 0x03019000 };

        static CGameMenuColorEffect* CreateInstance ();

        Array < float >&        GetBeamWidths                           () const;
        void                    SetBeamWidths                           ( Array < float >& value );

        Array < float >&        GetColorPeriods                         () const;
        void                    SetColorPeriods                         ( Array < float >& value );

        Array < class CFuncFullColorGradient* >& GetColorsBeam                           () const;
        void                    SetColorsBeam                           ( Array < class CFuncFullColorGradient* >& value );

        bool                    GetForceFirstColorWord                  () const;
        void                    SetForceFirstColorWord                  ( bool value );

        bool                    GetForceNoMove                          () const;
        void                    SetForceNoMove                          ( bool value );

        Array < float >&        GetInterWidths                          () const;
        void                    SetInterWidths                          ( Array < float >& value );

        bool                    GetIsBeamColorEvolving                  () const;
        void                    SetIsBeamColorEvolving                  ( bool value );

        bool                    GetIsBeamMoving                         () const;
        void                    SetIsBeamMoving                         ( bool value );

        bool                    GetIsColorEvolveHalf                    () const;
        void                    SetIsColorEvolveHalf                    ( bool value );

        bool                    GetIsColorEvolveInverse                 () const;
        void                    SetIsColorEvolveInverse                 ( bool value );

        bool                    GetIsMoveHalf                           () const;
        void                    SetIsMoveHalf                           ( bool value );

        bool                    GetIsMoveInverse                        () const;
        void                    SetIsMoveInverse                        ( bool value );

        float                   GetPeriod                               () const;
        void                    SetPeriod                               ( float value );

