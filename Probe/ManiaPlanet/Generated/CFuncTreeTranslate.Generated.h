        enum { CLASSID = 0x0500D000 };

        static CFuncTreeTranslate* CreateInstance ();

        Vec3D                   GetEndPoint                             () const;
        void                    SetEndPoint                             ( Vec3D value );

        bool                    GetIsPingPong                           () const;
        void                    SetIsPingPong                           ( bool value );

        bool                    GetIsSmooth                             () const;
        void                    SetIsSmooth                             ( bool value );

        Vec3D                   GetStartPoint                           () const;
        void                    SetStartPoint                           ( Vec3D value );

