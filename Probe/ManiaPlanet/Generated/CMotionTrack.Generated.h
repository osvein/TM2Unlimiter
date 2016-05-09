        enum { CLASSID = 0x08033000 };

        static CMotionTrack*    CreateInstance ();

        class CMwNod*           GetOwner                                () const;
        void                    SetOwner                                ( class CMwNod* value );

