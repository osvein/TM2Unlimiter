        enum { CLASSID = 0x030CC000 };

        static CGameRemoteBufferDataInfoFinds* CreateInstance ();

        uint                    GetCountPlayerPerPage                   () const;
        void                    SetCountPlayerPerPage                   ( uint value );

        uint                    GetCountServerPerPage                   () const;
        void                    SetCountServerPerPage                   ( uint value );

        uint                    GetRefreshPlayerDuration                () const;
        void                    SetRefreshPlayerDuration                ( uint value );

        uint                    GetRefreshServerDuration                () const;
        void                    SetRefreshServerDuration                ( uint value );

