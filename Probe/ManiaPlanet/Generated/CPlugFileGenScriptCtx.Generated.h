        enum { CLASSID = 0x090C0000 };

        static CPlugFileGenScriptCtx* CreateInstance ();

        uint                    GetLevelIndex                           () const;
        void                    SetLevelIndex                           ( uint value );

        uint                    GetTexelCountX                          () const;
        void                    SetTexelCountX                          ( uint value );

        uint                    GetTexelCountY                          () const;
        void                    SetTexelCountY                          ( uint value );

        uint                    GetTexelIndexX                          () const;
        void                    SetTexelIndexX                          ( uint value );

        uint                    GetTexelIndexY                          () const;
        void                    SetTexelIndexY                          ( uint value );

        float                   GetTexelValueA                          () const;
        void                    SetTexelValueA                          ( float value );

        float                   GetTexelValueB                          () const;
        void                    SetTexelValueB                          ( float value );

        float                   GetTexelValueG                          () const;
        void                    SetTexelValueG                          ( float value );

        float                   GetTexelValueR                          () const;
        void                    SetTexelValueR                          ( float value );

