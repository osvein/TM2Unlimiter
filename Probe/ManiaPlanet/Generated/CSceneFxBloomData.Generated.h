        enum { CLASSID = 0x0A03F000 };

        static CSceneFxBloomData* CreateInstance ();

        float                   GetFakeHdrExponent                      () const;
        void                    SetFakeHdrExponent                      ( float value );

        float                   GetFakeHdrMin                           () const;
        void                    SetFakeHdrMin                           ( float value );

        float                   GetHighInvExponent                      () const;
        void                    SetHighInvExponent                      ( float value );

