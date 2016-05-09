        enum { CLASSID = 0x0A023000 };

        static CSceneVehicleScript* CreateInstance ();

        class CHmsItem*         GetContact_Item1                        () const;
        void                    SetContact_Item1                        ( class CHmsItem* value );

        class CHmsItem*         GetContact_Item2                        () const;
        void                    SetContact_Item2                        ( class CHmsItem* value );

        uint                    GetContact_Material1                    () const;
        void                    SetContact_Material1                    ( uint value );

        uint                    GetContact_Material2                    () const;
        void                    SetContact_Material2                    ( uint value );

        Vec3D                   GetContact_Normal                       () const;
        void                    SetContact_Normal                       ( Vec3D value );

        Vec3D                   GetContact_Position                     () const;
        void                    SetContact_Position                     ( Vec3D value );

        Vec3D                   GetContact_RelativeSpeed                () const;
        void                    SetContact_RelativeSpeed                ( Vec3D value );

        Vec3D                   GetContact_Replacement                  () const;
        void                    SetContact_Replacement                  ( Vec3D value );

        bool                    GetContact_StillExists                  () const;
        void                    SetContact_StillExists                  ( bool value );

        class CMwCmdBlockMain*  GetGameplayScript                       () const;
        void                    SetGameplayScript                       ( class CMwCmdBlockMain* value );

        void                    AddVehicleForce                         ( Vec3D vecforce, Vec3D vecrelativeapplicationpoint );
        void                    AddVehicleTorque                        ( Vec3D vectorque );
        void                    AddWorldForce                           ( Vec3D vecforce, Vec3D vecrelativeapplicationpoint );
        float                   GetReal                                 ( StringA strfieldName );
        Vec3D                   GetVehiclePosition                      ();
        Matrix43                GetVehicleRotation                      ();
        Vec3D                   GetVehicleSpeed                         ();
        void                    LetReal                                 ( StringA strfieldName, float fvalue );
        void                    SetReal                                 ( StringA strfieldName, float fvalue );
