        enum { CLASSID = 0x0804C000 };

        static CMotionEmitterLeaves* CreateInstance ();

        class CMotionManagerLeaves* GetManagerModel                         () const;
        void                    SetManagerModel                         ( class CMotionManagerLeaves* value );

        Vec3D                   GetPos                                  () const;
        void                    SetPos                                  ( Vec3D value );

        Vec3D                   GetRadius                               () const;
        void                    SetRadius                               ( Vec3D value );

