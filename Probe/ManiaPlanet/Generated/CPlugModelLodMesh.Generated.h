        enum { CLASSID = 0x0909C000 };

        static CPlugModelLodMesh* CreateInstance ();

        StringA                 GetOptimGroupId                         () const;
        void                    SetOptimGroupId                         ( StringA value );

        bool                    GetOptimIsCreateSubInfluences           () const;
        void                    SetOptimIsCreateSubInfluences           ( bool value );

        Vec3D                   GetOptimSplitGridCellSize               () const;
        void                    SetOptimSplitGridCellSize               ( Vec3D value );

        bool                    GetOptimSplitGridIsUse                  () const;
        void                    SetOptimSplitGridIsUse                  ( bool value );

        Vec3D                   GetOptimSplitGridOrigin                 () const;
        void                    SetOptimSplitGridOrigin                 ( Vec3D value );

