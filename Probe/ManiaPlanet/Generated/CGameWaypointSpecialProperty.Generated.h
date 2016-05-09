        enum { CLASSID = 0x0313B000 };

        static CGameWaypointSpecialProperty* CreateInstance ();

        uint                    GetOrder                                () const;
        void                    SetOrder                                ( uint value );

        StringA                 GetTag                                  () const;
        void                    SetTag                                  ( StringA value );

