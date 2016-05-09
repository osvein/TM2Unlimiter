        enum { CLASSID = 0x09072000 };

        static CPlugModelTree*  CreateInstance ();

        List < nodptr<class CMwNod> >& GetChildGens                            () const;
        void                    SetChildGens                            ( List < nodptr<class CMwNod> >& value );

        List < Id >&            GetChildGensIds                         () const;
        void                    SetChildGensIds                         ( List < Id >& value );

        List < Matrix43 >&      GetChildGensLocs                        () const;
        void                    SetChildGensLocs                        ( List < Matrix43 >& value );

        List < nodptr<class CPlugModelTree> >& GetChilds                               () const;
        void                    SetChilds                               ( List < nodptr<class CPlugModelTree> >& value );

        Matrix43                GetLocation                             () const;
        void                    SetLocation                             ( Matrix43 value );

        List < nodptr<class CPlugModelLodMesh> >& GetLodMeshes                            () const;
        void                    SetLodMeshes                            ( List < nodptr<class CPlugModelLodMesh> >& value );

        List < Matrix43 >&      GetLodMeshesLocs                        () const;
        void                    SetLodMeshesLocs                        ( List < Matrix43 >& value );

        bool                    GetOptimIsKeepTree                      () const;
        void                    SetOptimIsKeepTree                      ( bool value );

        Vec3D                   GetRotationPivot                        () const;
        void                    SetRotationPivot                        ( Vec3D value );

        Vec3D                   GetScalePivot                           () const;
        void                    SetScalePivot                           ( Vec3D value );

        List < Matrix43 >&      GetSurfaceLocs                          () const;
        void                    SetSurfaceLocs                          ( List < Matrix43 >& value );

        List < nodptr<class CPlugModelMesh> >& GetSurfaces                             () const;
        void                    SetSurfaces                             ( List < nodptr<class CPlugModelMesh> >& value );

