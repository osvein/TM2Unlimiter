        enum { CLASSID = 0x0700B000 };

        static CControlSlider*  CreateInstance ();

        enum eAxis
        {
            AXIS_X,
            AXIS_Y
        };
        static std::wstring     AxisToString                            ( eAxis value );
        static eAxis            ParseAxis                               ( const std::wstring& wstrName );

        eAxis                   GetAxis                                 () const;
        void                    SetAxis                                 ( eAxis value );

        Id                      GetIconIdBar                            () const;
        void                    SetIconIdBar                            ( Id value );

        Id                      GetIconIdCursor                         () const;
        void                    SetIconIdCursor                         ( Id value );

        bool                    GetManualSize                           () const;
        void                    SetManualSize                           ( bool value );

        float                   GetRatio                                () const;
        void                    SetRatio                                ( float value );

