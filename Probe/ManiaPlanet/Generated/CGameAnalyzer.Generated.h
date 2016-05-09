        enum { CLASSID = 0x030E1000 };

        static CGameAnalyzer*   CreateInstance ();

        class CControlGrid*     GetContainerLeft                        () const;
        void                    SetContainerLeft                        ( class CControlGrid* value );

        class CControlGrid*     GetContainerRight                       () const;
        void                    SetContainerRight                       ( class CControlGrid* value );

        class CMwStatsValue*    GetFrameRate                            () const;
        void                    SetFrameRate                            ( class CMwStatsValue* value );

        int                     GetMode                                 () const;
        void                    SetMode                                 ( int value );

        class CScene2d*         GetScene                                () const;
        void                    SetScene                                ( class CScene2d* value );

