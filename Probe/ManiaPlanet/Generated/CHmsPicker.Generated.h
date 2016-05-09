        enum { CLASSID = 0x06018000 };

        static CHmsPicker*      CreateInstance ();

        class CHmsCamera*       GetCamera                               () const;
        void                    SetCamera                               ( class CHmsCamera* value );

        class CHmsCorpus*       GetCorpus                               () const;
        void                    SetCorpus                               ( class CHmsCorpus* value );

        float                   GetDepth                                () const;
        void                    SetDepth                                ( float value );

        Vec2D                   GetInputPos                             () const;
        void                    SetInputPos                             ( Vec2D value );

        bool                    GetIsEnable                             () const;
        void                    SetIsEnable                             ( bool value );

        class CHmsZoneOverlay*  GetOverlay                              () const;
        void                    SetOverlay                              ( class CHmsZoneOverlay* value );

        Vec3D                   GetPickNormalV                          () const;
        void                    SetPickNormalV                          ( Vec3D value );

        Vec3D                   GetPickNormalZ                          () const;
        void                    SetPickNormalZ                          ( Vec3D value );

        Vec3D                   GetPickPosV                             () const;
        void                    SetPickPosV                             ( Vec3D value );

        Vec3D                   GetPickPosZ                             () const;
        void                    SetPickPosZ                             ( Vec3D value );

        float                   GetPickZ                                () const;
        void                    SetPickZ                                ( float value );

        float                   GetPickZNoBiasZ                         () const;
        void                    SetPickZNoBiasZ                         ( float value );

        Vec2D                   GetPosRect                              () const;
        void                    SetPosRect                              ( Vec2D value );

        Vec3D                   GetRayDir                               () const;
        void                    SetRayDir                               ( Vec3D value );

        Vec3D                   GetRayPos                               () const;
        void                    SetRayPos                               ( Vec3D value );

        class CPlugTree*        GetTree                                 () const;
        void                    SetTree                                 ( class CPlugTree* value );

