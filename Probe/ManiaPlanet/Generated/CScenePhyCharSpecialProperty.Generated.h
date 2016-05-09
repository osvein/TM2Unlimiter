        enum { CLASSID = 0x0A071000 };

        static CScenePhyCharSpecialProperty* CreateInstance ();

        enum eSpecialType
        {
            SPECIALTYPE_JUMPPAD,
            SPECIALTYPE_SPEEDUP,
            SPECIALTYPE_TURBO,
            SPECIALTYPE_FREEWHEELING
        };
        static std::wstring     SpecialTypeToString                     ( eSpecialType value );
        static eSpecialType     ParseSpecialType                        ( const std::wstring& wstrName );

        uint                    GetFreeWheelingDuration                 () const;
        void                    SetFreeWheelingDuration                 ( uint value );

        Vec3D                   GetJumpPadDestinationOffset             () const;
        void                    SetJumpPadDestinationOffset             ( Vec3D value );

        bool                    GetJumpPadFixedVel                      () const;
        void                    SetJumpPadFixedVel                      ( bool value );

        uint                    GetPower                                () const;
        void                    SetPower                                ( uint value );

        eSpecialType            GetSpecialType                          () const;
        void                    SetSpecialType                          ( eSpecialType value );

        float                   GetSpeedUpCoef                          () const;
        void                    SetSpeedUpCoef                          ( float value );

        uint                    GetSpeedUpDuration                      () const;
        void                    SetSpeedUpDuration                      ( uint value );

        float                   GetTrajectoryCurve                      () const;
        void                    SetTrajectoryCurve                      ( float value );

        uint                    GetTurboDuration                        () const;
        void                    SetTurboDuration                        ( uint value );

        float                   GetTurboVal                             () const;
        void                    SetTurboVal                             ( float value );

