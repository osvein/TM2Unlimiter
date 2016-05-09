        enum { CLASSID = 0x0315F000 };

        static CGameManialinkScriptEvent* CreateInstance ();

        enum eType
        {
            TYPE_KEYPRESS,
            TYPE_MOUSECLICK,
            TYPE_MOUSEOVER,
            TYPE_MOUSEOUT
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        StringW                 GetCharPressed                          () const;
        void                    SetCharPressed                          ( StringW value );

        StringW                 GetControlId                            () const;
        void                    SetControlId                            ( StringW value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

