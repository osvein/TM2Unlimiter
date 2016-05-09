        enum { CLASSID = 0x0700A000 };

        static CControlEnum*    CreateInstance ();

        enum eDisplayType
        {
            DISPLAYTYPE_TEXT,
            DISPLAYTYPE_ICON,
            DISPLAYTYPE_TEXT_ICON
        };
        static std::wstring     DisplayTypeToString                     ( eDisplayType value );
        static eDisplayType     ParseDisplayType                        ( const std::wstring& wstrName );

        eDisplayType            GetDisplayType                          () const;
        void                    SetDisplayType                          ( eDisplayType value );

        uint                    GetEnumIndex                            () const;
        void                    SetEnumIndex                            ( uint value );

        StringA                 GetEnumString                           () const;
        void                    SetEnumString                           ( StringA value );

        class CFuncEnum*        GetFuncEnum                             () const;
        void                    SetFuncEnum                             ( class CFuncEnum* value );

        bool                    GetIsLooping                            () const;
        void                    SetIsLooping                            ( bool value );

        void                    Decr                                    ();
        void                    Incr                                    ();
