        enum { CLASSID = 0x0302B000 };

        static CGameRemoteBufferPool* CreateInstance ();

        uint                    GetBuffersCount                         () const;
        void                    SetBuffersCount                         ( uint value );

        class CGameRemoteBufferDataInfo* GetDataInfo                             () const;
        void                    SetDataInfo                             ( class CGameRemoteBufferDataInfo* value );

