        enum { CLASSID = 0x090CB000 };

        static CPlugFxLensDirtGen* CreateInstance ();

        Id                      GetAtlasId                              () const;
        void                    SetAtlasId                              ( Id value );

        uint                    GetCount                                () const;
        void                    SetCount                                ( uint value );

        float                   GetIntens_Max                           () const;
        void                    SetIntens_Max                           ( float value );

        float                   GetIntens_Min                           () const;
        void                    SetIntens_Min                           ( float value );

        float                   GetScreenSizeYMax                       () const;
        void                    SetScreenSizeYMax                       ( float value );

        float                   GetScreenSizeYMin                       () const;
        void                    SetScreenSizeYMin                       ( float value );

