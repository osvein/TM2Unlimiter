        enum { CLASSID = 0x05020000 };

        static CFuncPathMesh*   CreateInstance ();

        Array < class CFuncPathMeshLocation* >& GetLocations                            () const;
        void                    SetLocations                            ( Array < class CFuncPathMeshLocation* >& value );

        Vec3D                   GetOffsetVisualPos                      () const;
        void                    SetOffsetVisualPos                      ( Vec3D value );

        class CPlugVisual3D*    GetVisual                               () const;
        void                    SetVisual                               ( class CPlugVisual3D* value );

