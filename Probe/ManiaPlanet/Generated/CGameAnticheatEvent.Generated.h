        enum { CLASSID = 0x03144000 };

        static CGameAnticheatEvent* CreateInstance ();

        enum eType
        {
            TYPE_ONMESSAGE,
            TYPE_ONKEYDOWN
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        uint                    GetOnKeyDown_Char                       () const;
        void                    SetOnKeyDown_Char                       ( uint value );

        uint                    GetOnKeyDown_ScanCode                   () const;
        void                    SetOnKeyDown_ScanCode                   ( uint value );

        StringA                 GetOnMessage_Message                    () const;
        void                    SetOnMessage_Message                    ( StringA value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

