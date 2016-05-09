        enum { CLASSID = 0x0A094000 };

        static CSceneAnimFileSkelBinding* CreateInstance ();

        class CMwNod*           GetAnimFile                             () const;
        void                    SetAnimFile                             ( class CMwNod* value );

        class CMwNod*           GetSkel                                 () const;
        void                    SetSkel                                 ( class CMwNod* value );

        uint                    GetcRef                                 () const;
        void                    SetcRef                                 ( uint value );

