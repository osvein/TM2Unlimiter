        enum { CLASSID = 0x2D017000 };

        static CSmClient*       CreateInstance ();

        class CSmArenaClient*   GetArenaClient                          () const;
        void                    SetArenaClient                          ( class CSmArenaClient* value );

        class CSmArenaRules*    GetRules                                () const;
        void                    SetRules                                ( class CSmArenaRules* value );

