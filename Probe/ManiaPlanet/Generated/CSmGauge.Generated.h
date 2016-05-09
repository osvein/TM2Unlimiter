        enum { CLASSID = 0x2D027000 };

        static CSmGauge*        CreateInstance ();

        uint                    GetClan                                 () const;
        void                    SetClan                                 ( uint value );

        uint                    GetMax                                  () const;
        void                    SetMax                                  ( uint value );

        int                     GetSpeed                                () const;
        void                    SetSpeed                                ( int value );

        uint                    GetValue                                () const;
        void                    SetValue                                ( uint value );

        float                   GetValueReal                            () const;
        void                    SetValueReal                            ( float value );

