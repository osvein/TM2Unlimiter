        enum { CLASSID = 0x0702B000 };

        static CControlIconIndex* CreateInstance ();

        Id                      GetIdOff                                () const;
        void                    SetIdOff                                ( Id value );

        Id                      GetIdOffFocused                         () const;
        void                    SetIdOffFocused                         ( Id value );

        Id                      GetIdOffGrayed                          () const;
        void                    SetIdOffGrayed                          ( Id value );

        Id                      GetIdOn                                 () const;
        void                    SetIdOn                                 ( Id value );

        Id                      GetIdOnFocused                          () const;
        void                    SetIdOnFocused                          ( Id value );

        Id                      GetIdOnGrayed                           () const;
        void                    SetIdOnGrayed                           ( Id value );

        uint                    GetIndexOff                             () const;
        void                    SetIndexOff                             ( uint value );

        uint                    GetIndexOffFocused                      () const;
        void                    SetIndexOffFocused                      ( uint value );

        uint                    GetIndexOffGrayed                       () const;
        void                    SetIndexOffGrayed                       ( uint value );

        uint                    GetIndexOn                              () const;
        void                    SetIndexOn                              ( uint value );

        uint                    GetIndexOnFocused                       () const;
        void                    SetIndexOnFocused                       ( uint value );

        uint                    GetIndexOnGrayed                        () const;
        void                    SetIndexOnGrayed                        ( uint value );

        uint                    GetMarginPercentU                       () const;
        void                    SetMarginPercentU                       ( uint value );

        uint                    GetMarginPercentV                       () const;
        void                    SetMarginPercentV                       ( uint value );

        float                   GetMarginSizeX                          () const;
        void                    SetMarginSizeX                          ( float value );

        float                   GetMarginSizeY                          () const;
        void                    SetMarginSizeY                          ( float value );

