        enum { CLASSID = 0x06009000 };

        static CHmsZoneOverlay* CreateInstance ();

        enum eAdaptRatio
        {
            ADAPTRATIO_NONE,
            ADAPTRATIO_RESIZEX,
            ADAPTRATIO_RESIZEY
        };
        static std::wstring     AdaptRatioToString                      ( eAdaptRatio value );
        static eAdaptRatio      ParseAdaptRatio                         ( const std::wstring& wstrName );

        enum ePickEnableMode
        {
            PICKENABLEMODE_DISABLED,
            PICKENABLEMODE_FOREGROUND,
            PICKENABLEMODE_ALWAYS
        };
        static std::wstring     PickEnableModeToString                  ( ePickEnableMode value );
        static ePickEnableMode  ParsePickEnableMode                     ( const std::wstring& wstrName );

        eAdaptRatio             GetAdaptRatio                           () const;
        void                    SetAdaptRatio                           ( eAdaptRatio value );

        List < nodptr<class CHmsCorpus> >& GetCorpusVisibles                       () const;
        void                    SetCorpusVisibles                       ( List < nodptr<class CHmsCorpus> >& value );

        color                   GetDescClearColor                       () const;
        void                    SetDescClearColor                       ( color value );

        bool                    GetDescIsClearColorEnable               () const;
        void                    SetDescIsClearColorEnable               ( bool value );

        bool                    GetDescIsClearDepthEnable               () const;
        void                    SetDescIsClearDepthEnable               ( bool value );

        bool                    GetDescIsClearStencilEnable             () const;
        void                    SetDescIsClearStencilEnable             ( bool value );

        Vec2D                   GetDrawRectMax                          () const;
        void                    SetDrawRectMax                          ( Vec2D value );

        Vec2D                   GetDrawRectMin                          () const;
        void                    SetDrawRectMin                          ( Vec2D value );

        Vec3D                   GetFrustumCenter                        () const;
        void                    SetFrustumCenter                        ( Vec3D value );

        Vec3D                   GetFurstrumHfDiag                       () const;
        void                    SetFurstrumHfDiag                       ( Vec3D value );

        ePickEnableMode         GetPickEnableMode                       () const;
        void                    SetPickEnableMode                       ( ePickEnableMode value );

        uint                    GetSortOrder                            () const;
        void                    SetSortOrder                            ( uint value );

        bool                    GetUseZBuffer                           () const;
        void                    SetUseZBuffer                           ( bool value );

