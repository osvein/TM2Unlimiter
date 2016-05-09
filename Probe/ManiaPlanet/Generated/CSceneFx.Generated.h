        enum { CLASSID = 0x0A072000 };

        static CSceneFx*        CreateInstance ();

        float                   GetIntensity                            () const;
        void                    SetIntensity                            ( float value );

        bool                    GetWantPreLoad                          () const;
        void                    SetWantPreLoad                          ( bool value );

