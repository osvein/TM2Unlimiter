        enum { CLASSID = 0x030FF000 };

        static CGamePlaygroundUILayer* CreateInstance ();

        enum eType
        {
            TYPE_NORMAL,
            TYPE_SCORESTABLE,
            TYPE_SCREENIN3D,
            TYPE_ALTMENU,
            TYPE_EDITORPLUGIN
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        bool                    GetIsVisible                            () const;
        void                    SetIsVisible                            ( bool value );

        class CGameManialinkPage* GetLocalPage                            () const;
        void                    SetLocalPage                            ( class CGameManialinkPage* value );

        StringW                 GetManialinkPage                        () const;
        void                    SetManialinkPage                        ( StringW value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

