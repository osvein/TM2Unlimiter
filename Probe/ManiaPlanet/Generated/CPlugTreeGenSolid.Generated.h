        enum { CLASSID = 0x0909A000 };

        static CPlugTreeGenSolid* CreateInstance ();

        float                   GetCustomFuncTreePeriodScale            () const;
        void                    SetCustomFuncTreePeriodScale            ( float value );

        float                   GetCustomFuncTreePhase                  () const;
        void                    SetCustomFuncTreePhase                  ( float value );

        bool                    GetMergeInstances                       () const;
        void                    SetMergeInstances                       ( bool value );

        class CPlugSolid*       GetSolid                                () const;
        void                    SetSolid                                ( class CPlugSolid* value );

        class CPlugMaterial*    GetSolidReplaceMaterial                 () const;
        void                    SetSolidReplaceMaterial                 ( class CPlugMaterial* value );

        bool                    GetUseCustomFuncTree                    () const;
        void                    SetUseCustomFuncTree                    ( bool value );

