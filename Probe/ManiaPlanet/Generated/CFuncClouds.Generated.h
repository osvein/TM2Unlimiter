        enum { CLASSID = 0x0503A000 };

        static CFuncClouds*     CreateInstance ();

        class CFuncCloudsParam* GetCloudsParam                          () const;
        void                    SetCloudsParam                          ( class CFuncCloudsParam* value );

        class CPlugFileImg*     GetImageColorMax                        () const;
        void                    SetImageColorMax                        ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImageColorMin                        () const;
        void                    SetImageColorMin                        ( class CPlugFileImg* value );

        class CPlugMaterial*    GetMaterialModelToForce                 () const;
        void                    SetMaterialModelToForce                 ( class CPlugMaterial* value );

        class CFuncCloudsSolids* GetSolids                               () const;
        void                    SetSolids                               ( class CFuncCloudsSolids* value );

