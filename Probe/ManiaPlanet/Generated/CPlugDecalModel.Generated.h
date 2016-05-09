        enum { CLASSID = 0x090A7000 };

        static CPlugDecalModel* CreateInstance ();

        class CPlugBitmap*      GetDiffuseA                             () const;
        void                    SetDiffuseA                             ( class CPlugBitmap* value );

        bool                    GetFadeNormalAndZ                       () const;
        void                    SetFadeNormalAndZ                       ( bool value );

        class CPlugBitmap*      GetIcon                                 () const;
        void                    SetIcon                                 ( class CPlugBitmap* value );

        float                   GetImpactSize                           () const;
        void                    SetImpactSize                           ( float value );

        bool                    GetIsObsolete                           () const;
        void                    SetIsObsolete                           ( bool value );

        float                   GetMaxAngleN                            () const;
        void                    SetMaxAngleN                            ( float value );

        float                   GetMaxAngleN3d                          () const;
        void                    SetMaxAngleN3d                          ( float value );

        class CPlugBitmap*      GetNormal                               () const;
        void                    SetNormal                               ( class CPlugBitmap* value );

        bool                    GetRandomInstances                      () const;
        void                    SetRandomInstances                      ( bool value );

        class CPlugSolid*       GetSolid                                () const;
        void                    SetSolid                                ( class CPlugSolid* value );

        class CPlugBitmap*      GetSpecular                             () const;
        void                    SetSpecular                             ( class CPlugBitmap* value );

        float                   GetTexelByMeter                         () const;
        void                    SetTexelByMeter                         ( float value );

        class CPlugBitmap*      Get_3dSpriteBitmap                      () const;
        void                    Set_3dSpriteBitmap                      ( class CPlugBitmap* value );

        Id                      Get_3dSpriteGroupId                     () const;
        void                    Set_3dSpriteGroupId                     ( Id value );

