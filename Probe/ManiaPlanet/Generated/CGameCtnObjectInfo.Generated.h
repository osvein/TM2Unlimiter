        enum { CLASSID = 0x0301C000 };

        static CGameCtnObjectInfo* CreateInstance ();

        enum eObjectInfoType
        {
            OBJECTINFOTYPE_UNDEFINED,
            OBJECTINFOTYPE_ORNAMENT,
            OBJECTINFOTYPE_ITEM,
            OBJECTINFOTYPE_CHARACTER,
            OBJECTINFOTYPE_VEHICLE
        };
        static std::wstring     ObjectInfoTypeToString                  ( eObjectInfoType value );
        static eObjectInfoType  ParseObjectInfoType                     ( const std::wstring& wstrName );

        class CPlugAudioEnvironment* GetAudioEnvironmentInCar                () const;
        void                    SetAudioEnvironmentInCar                ( class CPlugAudioEnvironment* value );

        class CPlugBitmap*      GetBannerProfileFid                     () const;
        void                    SetBannerProfileFid                     ( class CPlugBitmap* value );

        class CGameAttributes*  GetBaseAttributes                       () const;
        void                    SetBaseAttributes                       ( class CGameAttributes* value );

        List < nodptr<class CGameControlCamera> >& GetCameras                              () const;
        void                    SetCameras                              ( List < nodptr<class CGameControlCamera> >& value );

        class CPlugDecoratorSolid* GetDecoratorSolid                       () const;
        void                    SetDecoratorSolid                       ( class CPlugDecoratorSolid* value );

        uint                    GetDefaultCamName                       () const;
        void                    SetDefaultCamName                       ( uint value );

        class CPlugFileZip*     GetDefaultSkinFid                       () const;
        void                    SetDefaultSkinFid                       ( class CPlugFileZip* value );

        class CSystemPackDesc*  GetDefaultSkinPackDesc                  () const;
        void                    SetDefaultSkinPackDesc                  ( class CSystemPackDesc* value );

        Vec3D                   GetGroundPoint                          () const;
        void                    SetGroundPoint                          ( Vec3D value );

        bool                    GetIsFreelyAnchorable                   () const;
        void                    SetIsFreelyAnchorable                   ( bool value );

        bool                    GetIsUsable                             () const;
        void                    SetIsUsable                             ( bool value );

        Array < class CPlugFileZip* >& GetNadeoSkinsFids                       () const;
        void                    SetNadeoSkinsFids                       ( Array < class CPlugFileZip* >& value );

        eObjectInfoType         GetObjectInfoType                       () const;
        void                    SetObjectInfoType                       ( eObjectInfoType value );

        float                   GetOrbitalCenterHeightFromGround        () const;
        void                    SetOrbitalCenterHeightFromGround        ( float value );

        float                   GetOrbitalPreviewAngle                  () const;
        void                    SetOrbitalPreviewAngle                  ( float value );

        float                   GetOrbitalRadiusBase                    () const;
        void                    SetOrbitalRadiusBase                    ( float value );

        float                   GetPainterGroundMargin                  () const;
        void                    SetPainterGroundMargin                  ( float value );

        class CMwNod*           GetPhyModel                             () const;
        void                    SetPhyModel                             ( class CMwNod* value );

        List < Vec3D >&         GetPivotPositions                       () const;
        void                    SetPivotPositions                       ( List < Vec3D >& value );

        class CScene2d*         GetRaceInterfaceFid                     () const;
        void                    SetRaceInterfaceFid                     ( class CScene2d* value );

        class CPlugMaterial*    GetStemBumpMaterial                     () const;
        void                    SetStemBumpMaterial                     ( class CPlugMaterial* value );

        class CPlugMaterial*    GetStemMaterial                         () const;
        void                    SetStemMaterial                         ( class CPlugMaterial* value );

        class CPlugTrafficObjectParams* GetTrafficParams                        () const;
        void                    SetTrafficParams                        ( class CPlugTrafficObjectParams* value );

        class CPlugTurretObjectParams* GetTurretParams                         () const;
        void                    SetTurretParams                         ( class CPlugTurretObjectParams* value );

        class CMwNod*           GetVisModel                             () const;
        void                    SetVisModel                             ( class CMwNod* value );

        class CMwNod*           GetVisModelStatic                       () const;
        void                    SetVisModelStatic                       ( class CMwNod* value );

