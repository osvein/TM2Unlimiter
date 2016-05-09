        enum { CLASSID = 0x05018000 };

        static CFuncLight*      CreateInstance ();

        enum eFctType
        {
            FCTTYPE_SINUS,
            FCTTYPE_FLICK
        };
        static std::wstring     FctTypeToString                         ( eFctType value );
        static eFctType         ParseFctType                            ( const std::wstring& wstrName );

        eFctType                GetFctType                              () const;
        void                    SetFctType                              ( eFctType value );

        uint                    GetFlickCount                           () const;
        void                    SetFlickCount                           ( uint value );

        float                   GetFlickPeriod                          () const;
        void                    SetFlickPeriod                          ( float value );

