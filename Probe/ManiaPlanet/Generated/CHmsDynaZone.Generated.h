        enum { CLASSID = 0x06029000 };

        static CHmsDynaZone*    CreateInstance ();

        uint                    GetAllocatedByteCount                   () const;
        void                    SetAllocatedByteCount                   ( uint value );

        Vec3D                   GetGravity                              () const;
        void                    SetGravity                              ( Vec3D value );

        float                   GetReplacementEpsilon                   () const;
        void                    SetReplacementEpsilon                   ( float value );

        uint                    GetUsedByteCount                        () const;
        void                    SetUsedByteCount                        ( uint value );

        uint                    GetcDynaItem                            () const;
        void                    SetcDynaItem                            ( uint value );

