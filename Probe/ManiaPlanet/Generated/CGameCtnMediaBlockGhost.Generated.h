        enum { CLASSID = 0x030E5000 };

        static CGameCtnMediaBlockGhost* CreateInstance ();

        class CGameCtnGhost*    GetGhostModel                           () const;
        void                    SetGhostModel                           ( class CGameCtnGhost* value );

        float                   GetStartOffset                          () const;
        void                    SetStartOffset                          ( float value );

