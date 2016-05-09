        enum { CLASSID = 0x06008000 };

        static CHmsZoneElem*    CreateInstance ();

        Matrix43                GetLocation                             () const;
        void                    SetLocation                             ( Matrix43 value );

        Vec3D                   GetVel                                  () const;
        void                    SetVel                                  ( Vec3D value );

        class CHmsZone*         GetZone                                 () const;
        void                    SetZone                                 ( class CHmsZone* value );

