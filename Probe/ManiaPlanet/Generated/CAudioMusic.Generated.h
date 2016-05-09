        enum { CLASSID = 0x10004000 };

        static CAudioMusic*     CreateInstance ();

        Array < bool >&         GetTracksEnabled                        () const;
        void                    SetTracksEnabled                        ( Array < bool >& value );

