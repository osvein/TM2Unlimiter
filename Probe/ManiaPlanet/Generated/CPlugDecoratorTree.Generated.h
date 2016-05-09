        enum { CLASSID = 0x090A2000 };

        static CPlugDecoratorTree* CreateInstance ();

        enum eCollidableCond
        {
            COLLIDABLECOND_NEVER,
            COLLIDABLECOND_LOWONLY,
            COLLIDABLECOND_LOWANDMEDIUM,
            COLLIDABLECOND_MEDIUMONLY,
            COLLIDABLECOND_MEDIUMANDHIGH,
            COLLIDABLECOND_HIGHONLY,
            COLLIDABLECOND_ALWAYS
        };
        static std::wstring     CollidableCondToString                  ( eCollidableCond value );
        static eCollidableCond  ParseCollidableCond                     ( const std::wstring& wstrName );

        enum eExistCond
        {
            EXISTCOND_NEVER,
            EXISTCOND_LOWONLY,
            EXISTCOND_LOWANDMEDIUM,
            EXISTCOND_MEDIUMONLY,
            EXISTCOND_MEDIUMANDHIGH,
            EXISTCOND_HIGHONLY,
            EXISTCOND_ALWAYS
        };
        static std::wstring     ExistCondToString                       ( eExistCond value );
        static eExistCond       ParseExistCond                          ( const std::wstring& wstrName );

        enum eShadowCasterCond
        {
            SHADOWCASTERCOND_NEVER,
            SHADOWCASTERCOND_LOWONLY,
            SHADOWCASTERCOND_LOWANDMEDIUM,
            SHADOWCASTERCOND_MEDIUMONLY,
            SHADOWCASTERCOND_MEDIUMANDHIGH,
            SHADOWCASTERCOND_HIGHONLY,
            SHADOWCASTERCOND_ALWAYS
        };
        static std::wstring     ShadowCasterCondToString                ( eShadowCasterCond value );
        static eShadowCasterCond ParseShadowCasterCond                   ( const std::wstring& wstrName );

        enum eVisibleCond
        {
            VISIBLECOND_NEVER,
            VISIBLECOND_LOWONLY,
            VISIBLECOND_LOWANDMEDIUM,
            VISIBLECOND_MEDIUMONLY,
            VISIBLECOND_MEDIUMANDHIGH,
            VISIBLECOND_HIGHONLY,
            VISIBLECOND_ALWAYS
        };
        static std::wstring     VisibleCondToString                     ( eVisibleCond value );
        static eVisibleCond     ParseVisibleCond                        ( const std::wstring& wstrName );

        eCollidableCond         GetCollidableCond                       () const;
        void                    SetCollidableCond                       ( eCollidableCond value );

        eExistCond              GetExistCond                            () const;
        void                    SetExistCond                            ( eExistCond value );

        class CPlugMaterial*    GetMaterial                             () const;
        void                    SetMaterial                             ( class CPlugMaterial* value );

        bool                    GetNoLocation                           () const;
        void                    SetNoLocation                           ( bool value );

        bool                    GetShadowCasterApplyOnChilds            () const;
        void                    SetShadowCasterApplyOnChilds            ( bool value );

        eShadowCasterCond       GetShadowCasterCond                     () const;
        void                    SetShadowCasterCond                     ( eShadowCasterCond value );

        bool                    GetTransformVisualToSurface             () const;
        void                    SetTransformVisualToSurface             ( bool value );

        Id                      GetTreeId                               () const;
        void                    SetTreeId                               ( Id value );

        class CPlugTreeLight*   GetTreeLight                            () const;
        void                    SetTreeLight                            ( class CPlugTreeLight* value );

        bool                    GetVisibleApplyOnChilds                 () const;
        void                    SetVisibleApplyOnChilds                 ( bool value );

        eVisibleCond            GetVisibleCond                          () const;
        void                    SetVisibleCond                          ( eVisibleCond value );

