        enum { CLASSID = 0x0302C000 };

        static CGameRemoteBufferDataInfo* CreateInstance ();

        uint                    GetDefault_CacheDuration                () const;
        void                    SetDefault_CacheDuration                ( uint value );

        uint                    GetDefault_PerPageCount                 () const;
        void                    SetDefault_PerPageCount                 ( uint value );

