        enum { CLASSID = 0x0305F000 };

        static CGameSkinnedNod* CreateInstance ();

        class CMwNod*           GetBaseNodFid                           () const;
        void                    SetBaseNodFid                           ( class CMwNod* value );

        class CGameSkin*        GetGameSkin                             () const;
        void                    SetGameSkin                             ( class CGameSkin* value );

        Array < class CMwNod* >& GetRemapFids                            () const;
        void                    SetRemapFids                            ( Array < class CMwNod* >& value );

