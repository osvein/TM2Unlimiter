        enum { CLASSID = 0x2D01B000 };

        static CSmServer*       CreateInstance ();

        class CSmArenaServer*   GetArenaServer                          () const;
        void                    SetArenaServer                          ( class CSmArenaServer* value );

        class CSmArenaRules*    GetRules                                () const;
        void                    SetRules                                ( class CSmArenaRules* value );

