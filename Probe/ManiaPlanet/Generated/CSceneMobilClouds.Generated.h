        enum { CLASSID = 0x0A02C000 };

        static CSceneMobilClouds* CreateInstance ();

        bool                    GetAutoSizeFarZ                         () const;
        void                    SetAutoSizeFarZ                         ( bool value );

        bool                    GetFadeAlpha                            () const;
        void                    SetFadeAlpha                            ( bool value );

        bool                    GetForceSize                            () const;
        void                    SetForceSize                            ( bool value );

        Vec2D                   GetGridSizeXZ                           () const;
        void                    SetGridSizeXZ                           ( Vec2D value );

        uint                    GetInstCountX                           () const;
        void                    SetInstCountX                           ( uint value );

        uint                    GetInstCountZ                           () const;
        void                    SetInstCountZ                           ( uint value );

        float                   GetScaleFarZ_Visibility                 () const;
        void                    SetScaleFarZ_Visibility                 ( float value );

        List < nodptr<class CPlugSolid> >& GetSolids                               () const;
        void                    SetSolids                               ( List < nodptr<class CPlugSolid> >& value );

        float                   GetWindDir                              () const;
        void                    SetWindDir                              ( float value );

        float                   GetWindSpeed                            () const;
        void                    SetWindSpeed                            ( float value );

        void                    ReBuildInstances                        ();
