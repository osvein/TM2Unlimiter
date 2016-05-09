        enum { CLASSID = 0x05003000 };

        static CFuncKeysTrans*  CreateInstance ();

        Array < Vec3D >&        GetTrans                                () const;
        void                    SetTrans                                ( Array < Vec3D >& value );

