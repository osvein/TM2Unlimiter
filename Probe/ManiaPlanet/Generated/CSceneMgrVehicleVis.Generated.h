        enum { CLASSID = 0x0A037000 };

        static CSceneMgrVehicleVis* CreateInstance ();

        enum eExtrapolation
        {
            EXTRAPOLATION_NONE,
            EXTRAPOLATION_BASIC,
            EXTRAPOLATION_CONTINUOUS1,
            EXTRAPOLATION_CONTINUOUS2,
            EXTRAPOLATION_PHBDR,
            EXTRAPOLATION_PHBINTERPOLATION
        };
        static std::wstring     ExtrapolationToString                   ( eExtrapolation value );
        static eExtrapolation   ParseExtrapolation                      ( const std::wstring& wstrName );

        enum eReplayStateType
        {
            REPLAYSTATETYPE_BLENDTIME,
            REPLAYSTATETYPE_BLENDCONSTANT
        };
        static std::wstring     ReplayStateTypeToString                 ( eReplayStateType value );
        static eReplayStateType ParseReplayStateType                    ( const std::wstring& wstrName );

        int                     GetBlendExtrapolateMs_Test              () const;
        void                    SetBlendExtrapolateMs_Test              ( int value );

        float                   GetDetachedPartImpulseCoef              () const;
        void                    SetDetachedPartImpulseCoef              ( float value );

        eExtrapolation          GetExtrapolation                        () const;
        void                    SetExtrapolation                        ( eExtrapolation value );

        bool                    GetHermiteInterp                        () const;
        void                    SetHermiteInterp                        ( bool value );

        bool                    GetIsUpdateAsync                        () const;
        void                    SetIsUpdateAsync                        ( bool value );

        float                   GetReplayBlendVal                       () const;
        void                    SetReplayBlendVal                       ( float value );

        eReplayStateType        GetReplayStateType                      () const;
        void                    SetReplayStateType                      ( eReplayStateType value );

        float                   GetRigidPartFluidFrictionAngular        () const;
        void                    SetRigidPartFluidFrictionAngular        ( float value );

        float                   GetRigidPartFluidFrictionLinear         () const;
        void                    SetRigidPartFluidFrictionLinear         ( float value );

        float                   GetRigidPartRandAngularVel              () const;
        void                    SetRigidPartRandAngularVel              ( float value );

        float                   GetRigidPartRandLinearVel               () const;
        void                    SetRigidPartRandLinearVel               ( float value );

