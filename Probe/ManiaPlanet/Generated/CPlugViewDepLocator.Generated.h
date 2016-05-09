        enum { CLASSID = 0x090A0000 };

        static CPlugViewDepLocator* CreateInstance ();

        float                   GetMaxY                                 () const;
        void                    SetMaxY                                 ( float value );

        float                   GetMinY                                 () const;
        void                    SetMinY                                 ( float value );

        bool                    GetUseWaterY                            () const;
        void                    SetUseWaterY                            ( bool value );

