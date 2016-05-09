        enum { CLASSID = 0x090E2000 };

        static CPlugBlockShadingResource* CreateInstance ();

        class CPlugFileImg*     GetImage_DefaultDiffuse                 () const;
        void                    SetImage_DefaultDiffuse                 ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImage_DefaultNormal                  () const;
        void                    SetImage_DefaultNormal                  ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImage_DefaultSpecular                () const;
        void                    SetImage_DefaultSpecular                ( class CPlugFileImg* value );

        class CPlugMaterial*    GetMaterial_TDiffSpecNorm               () const;
        void                    SetMaterial_TDiffSpecNorm               ( class CPlugMaterial* value );

