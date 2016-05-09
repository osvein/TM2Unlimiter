        enum { CLASSID = 0x07031000 };

        static CControlText*    CreateInstance ();

        enum eTextMode
        {
            TEXTMODE_NORMAL,
            TEXTMODE_EDITABLE,
            TEXTMODE_GRAYEDOUT,
            TEXTMODE_DEFAULT
        };
        static std::wstring     TextModeToString                        ( eTextMode value );
        static eTextMode        ParseTextMode                           ( const std::wstring& wstrName );

        float                   GetClipLength                           () const;
        void                    SetClipLength                           ( float value );

        int                     GetMaxLine                              () const;
        void                    SetMaxLine                              ( int value );

        eTextMode               GetTextMode                             () const;
        void                    SetTextMode                             ( eTextMode value );

        class CPlugTree*        GetTextTree                             () const;
        void                    SetTextTree                             ( class CPlugTree* value );

