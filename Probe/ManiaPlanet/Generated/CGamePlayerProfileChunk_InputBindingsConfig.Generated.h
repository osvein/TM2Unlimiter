        enum { CLASSID = 0x0312F000 };

        static CGamePlayerProfileChunk_InputBindingsConfig* CreateInstance ();

        class CInputBindingsConfig* GetConfig                               () const;
        void                    SetConfig                               ( class CInputBindingsConfig* value );

