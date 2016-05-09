        enum { CLASSID = 0x090C3000 };

        static CPlugSkinnedPlayerResource* CreateInstance ();

        class CPlugFileImg*     GetImage_DefaultBodyDiffuse             () const;
        void                    SetImage_DefaultBodyDiffuse             ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImage_DefaultBodyDiffuseOpacity      () const;
        void                    SetImage_DefaultBodyDiffuseOpacity      ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImage_DefaultBodyEnergy              () const;
        void                    SetImage_DefaultBodyEnergy              ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImage_DefaultBodyNormal              () const;
        void                    SetImage_DefaultBodyNormal              ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImage_DefaultBodySpecular            () const;
        void                    SetImage_DefaultBodySpecular            ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImage_DefaultBodyTeamMask            () const;
        void                    SetImage_DefaultBodyTeamMask            ( class CPlugFileImg* value );

        class CPlugLight*       GetLight_BodyFakeShadow                 () const;
        void                    SetLight_BodyFakeShadow                 ( class CPlugLight* value );

        class CPlugMaterial*    GetMaterial_BodyAnimSkel_ActionMakerOtherFrames() const;
        void                    SetMaterial_BodyAnimSkel_ActionMakerOtherFrames( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterial_BodyAnimSkel_DiffuseTransp_Specular() const;
        void                    SetMaterial_BodyAnimSkel_DiffuseTransp_Specular( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterial_BodyAnimSkel_DiffuseTransp_Specular_Normal() const;
        void                    SetMaterial_BodyAnimSkel_DiffuseTransp_Specular_Normal( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterial_BodyAnimSkel_Diffuse_Energy_Specular_Normal() const;
        void                    SetMaterial_BodyAnimSkel_Diffuse_Energy_Specular_Normal( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterial_BodyAnimSkel_Energy         () const;
        void                    SetMaterial_BodyAnimSkel_Energy         ( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterial_BodyAnimSkel_Shield         () const;
        void                    SetMaterial_BodyAnimSkel_Shield         ( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterial_BodyAnimSkel_Teleport       () const;
        void                    SetMaterial_BodyAnimSkel_Teleport       ( class CPlugMaterial* value );

