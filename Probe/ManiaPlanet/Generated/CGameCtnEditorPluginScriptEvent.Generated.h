        enum { CLASSID = 0x03164000 };

        static CGameCtnEditorPluginScriptEvent* CreateInstance ();

        enum eType
        {
            TYPE_CURSORSELECTIONBEGIN,
            TYPE_CURSORSELECTIONEND,
            TYPE_CURSORCHANGE,
            TYPE_MAPMODIFIED,
            TYPE_EDITANCHOR,
            TYPE_EDITOBJECTIVES,
            TYPE_STARTVALIDATION
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        Id                      GetEditedAnchorDataId                   () const;
        void                    SetEditedAnchorDataId                   ( Id value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

