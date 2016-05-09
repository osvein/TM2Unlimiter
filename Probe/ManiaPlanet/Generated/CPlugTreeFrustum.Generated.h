        enum { CLASSID = 0x0906B000 };

        static CPlugTreeFrustum* CreateInstance ();

        float                   GetFarZ                                 () const;
        void                    SetFarZ                                 ( float value );

        uint                    GetNbPointX                             () const;
        void                    SetNbPointX                             ( uint value );

        uint                    GetNbPointZ                             () const;
        void                    SetNbPointZ                             ( uint value );

        uint                    GetNbVisualX                            () const;
        void                    SetNbVisualX                            ( uint value );

        uint                    GetNbVisualZ                            () const;
        void                    SetNbVisualZ                            ( uint value );

        bool                    GetUpdate                               () const;
        void                    SetUpdate                               ( bool value );

        void                    ResetGrid                               ();
