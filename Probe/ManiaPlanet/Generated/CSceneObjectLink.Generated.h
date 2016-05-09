        enum { CLASSID = 0x0A014000 };

        static CSceneObjectLink* CreateInstance ();

        bool                    GetIsActive2                            () const;
        void                    SetIsActive2                            ( bool value );

        bool                    GetIsDynamic                            () const;
        void                    SetIsDynamic                            ( bool value );

        bool                    GetIsFromModel                          () const;
        void                    SetIsFromModel                          ( bool value );

        bool                    GetIsToSave                             () const;
        void                    SetIsToSave                             ( bool value );

        class CSceneMobil*      GetMobil                                () const;
        void                    SetMobil                                ( class CSceneMobil* value );

        Id                      GetMobilTreeId                          () const;
        void                    SetMobilTreeId                          ( Id value );

        class CSceneObject*     GetObject                               () const;
        void                    SetObject                               ( class CSceneObject* value );

        Matrix43                GetRelativeLocation                     () const;
        void                    SetRelativeLocation                     ( Matrix43 value );

        bool                    GetUseOnlyMobilPosition                 () const;
        void                    SetUseOnlyMobilPosition                 ( bool value );

        bool                    GetUseOnlyMobilTreePosition             () const;
        void                    SetUseOnlyMobilTreePosition             ( bool value );

        bool                    GetUseTreeVisibilityForPoc              () const;
        void                    SetUseTreeVisibilityForPoc              ( bool value );

