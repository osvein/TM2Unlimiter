        enum { CLASSID = 0x05002000 };

        static CFuncKeys*       CreateInstance ();

        Array < float >&        GetXs                                   () const;
        void                    SetXs                                   ( Array < float >& value );

        void                    Reset                                   ();
