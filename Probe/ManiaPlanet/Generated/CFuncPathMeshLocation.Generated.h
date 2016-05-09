        enum { CLASSID = 0x05021000 };

        static CFuncPathMeshLocation* CreateInstance ();

        Matrix43                GetLocation                             () const;
        void                    SetLocation                             ( Matrix43 value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

