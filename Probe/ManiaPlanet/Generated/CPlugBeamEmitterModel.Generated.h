        enum { CLASSID = 0x090B4000 };

        static CPlugBeamEmitterModel* CreateInstance ();

        enum eDisplayType
        {
            DISPLAYTYPE_LINESWIDE,
            DISPLAYTYPE_CYLINDER
        };
        static std::wstring     DisplayTypeToString                     ( eDisplayType value );
        static eDisplayType     ParseDisplayType                        ( const std::wstring& wstrName );

        uint                    GetCylinderSideCount                    () const;
        void                    SetCylinderSideCount                    ( uint value );

        eDisplayType            GetDisplayType                          () const;
        void                    SetDisplayType                          ( eDisplayType value );

        uint                    GetDuration                             () const;
        void                    SetDuration                             ( uint value );

        class CPlugMaterial*    GetMaterial                             () const;
        void                    SetMaterial                             ( class CPlugMaterial* value );

        float                   GetUVScale                              () const;
        void                    SetUVScale                              ( float value );

