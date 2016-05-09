        enum { CLASSID = 0x2D018000 };

        static CSmArenaServer*  CreateInstance ();

        class CSmArena*         GetArena                                () const;
        void                    SetArena                                ( class CSmArena* value );

        uint                    GetClientInputsMaxLatency               () const;
        void                    SetClientInputsMaxLatency               ( uint value );

        uint                    GetDbgDelaySendSnapshots                () const;
        void                    SetDbgDelaySendSnapshots                ( uint value );

        uint                    GetDbgMinInputDelay                     () const;
        void                    SetDbgMinInputDelay                     ( uint value );

