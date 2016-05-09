        enum { CLASSID = 0x0900C000 };

        static CPlugSurface*    CreateInstance ();

        enum eGmSurfType
        {

        };
        static std::wstring     GmSurfTypeToString                      ( eGmSurfType value );
        static eGmSurfType      ParseGmSurfType                         ( const std::wstring& wstrName );

        Vec3D                   GetAABBCenter                           () const;
        void                    SetAABBCenter                           ( Vec3D value );

        Vec3D                   GetAABBHalfSize                         () const;
        void                    SetAABBHalfSize                         ( Vec3D value );

        eGmSurfType             GetGmSurfType                           () const;
        void                    SetGmSurfType                           ( eGmSurfType value );

        List < nodptr<class CPlugMaterial> >& GetMaterials                            () const;
        void                    SetMaterials                            ( List < nodptr<class CPlugMaterial> >& value );

        Vec3D                   GetRadii                                () const;
        void                    SetRadii                                ( Vec3D value );

        float                   GetRadius                               () const;
        void                    SetRadius                               ( float value );

        void                    UpdateSurfMaterialIdsFromMaterialIndexs ();
