        enum { CLASSID = 0x03106000 };

        static CGameManialinkControl* CreateInstance ();

        enum eHorizontalAlign
        {
            HORIZONTALALIGN_LEFT,
            HORIZONTALALIGN_HCENTER,
            HORIZONTALALIGN_RIGHT,
            HORIZONTALALIGN_NONE
        };
        static std::wstring     HorizontalAlignToString                 ( eHorizontalAlign value );
        static eHorizontalAlign ParseHorizontalAlign                    ( const std::wstring& wstrName );

        enum eVerticalAlign
        {
            VERTICALALIGN_TOP,
            VERTICALALIGN_VCENTER,
            VERTICALALIGN_BOTTOM,
            VERTICALALIGN_NONE,
            VERTICALALIGN_VCENTER2
        };
        static std::wstring     VerticalAlignToString                   ( eVerticalAlign value );
        static eVerticalAlign   ParseVerticalAlign                      ( const std::wstring& wstrName );

        Vec3D                   GetAbsolutePosition                     () const;
        void                    SetAbsolutePosition                     ( Vec3D value );

        float                   GetAbsoluteScale                        () const;
        void                    SetAbsoluteScale                        ( float value );

        class CControlBase*     GetControl                              () const;
        void                    SetControl                              ( class CControlBase* value );

        StringW                 GetControlId                            () const;
        void                    SetControlId                            ( StringW value );

        eHorizontalAlign        GetHorizontalAlign                      () const;
        void                    SetHorizontalAlign                      ( eHorizontalAlign value );

        float                   GetPosnX                                () const;
        void                    SetPosnX                                ( float value );

        float                   GetPosnY                                () const;
        void                    SetPosnY                                ( float value );

        float                   GetPosnZ                                () const;
        void                    SetPosnZ                                ( float value );

        Vec3D                   GetRelativePosition                     () const;
        void                    SetRelativePosition                     ( Vec3D value );

        float                   GetRelativeScale                        () const;
        void                    SetRelativeScale                        ( float value );

        float                   GetScale                                () const;
        void                    SetScale                                ( float value );

        eVerticalAlign          GetVerticalAlign                        () const;
        void                    SetVerticalAlign                        ( eVerticalAlign value );

        void                    Hide                                    ();
        void                    Show                                    ();
        void                    Unload                                  ();
