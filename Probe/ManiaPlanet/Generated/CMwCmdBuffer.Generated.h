        enum { CLASSID = 0x0101C000 };

        static CMwCmdBuffer*    CreateInstance ();

        uint                    GetCmdCount                             () const;
        void                    SetCmdCount                             ( uint value );

        List < class CMwCmd* >& GetCmds                                 () const;
        void                    SetCmds                                 ( List < class CMwCmd* >& value );

