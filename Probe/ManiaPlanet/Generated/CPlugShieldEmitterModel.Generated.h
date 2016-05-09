        enum { CLASSID = 0x090CC000 };

        static CPlugShieldEmitterModel* CreateInstance ();

        float                   GetAnimFps                              () const;
        void                    SetAnimFps                              ( float value );

        float                   GetCapRadius                            () const;
        void                    SetCapRadius                            ( float value );

        uint                    GetDuration                             () const;
        void                    SetDuration                             ( uint value );

        float                   GetHalfAngle                            () const;
        void                    SetHalfAngle                            ( float value );

        class CPlugMaterial*    GetMaterial                             () const;
        void                    SetMaterial                             ( class CPlugMaterial* value );

        float                   GetSphereRadius                         () const;
        void                    SetSphereRadius                         ( float value );

