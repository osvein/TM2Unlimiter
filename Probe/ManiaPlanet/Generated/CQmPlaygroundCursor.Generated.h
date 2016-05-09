        enum { CLASSID = 0x2C025000 };

        static CQmPlaygroundCursor* CreateInstance ();

        color                   GetColor                                () const;
        void                    SetColor                                ( color value );

        uint                    GetCoordX                               () const;
        void                    SetCoordX                               ( uint value );

        uint                    GetCoordY                               () const;
        void                    SetCoordY                               ( uint value );

        uint                    GetCoordZ                               () const;
        void                    SetCoordZ                               ( uint value );

        float                   GetDisplayOffset                        () const;
        void                    SetDisplayOffset                        ( float value );

        class CSceneMobil*      GetMobil                                () const;
        void                    SetMobil                                ( class CSceneMobil* value );

        void                    CreatePlugTree                          ();
