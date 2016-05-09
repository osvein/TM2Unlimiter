        enum { CLASSID = 0x2D023000 };

        static CSmBlock*        CreateInstance ();

        class CSmBase*          GetBase                                 () const;
        void                    SetBase                                 ( class CSmBase* value );

        Vec3D                   GetDirFront                             () const;
        void                    SetDirFront                             ( Vec3D value );

        uint                    GetOrder                                () const;
        void                    SetOrder                                ( uint value );

        Vec3D                   GetPosition                             () const;
        void                    SetPosition                             ( Vec3D value );

        StringA                 GetTag                                  () const;
        void                    SetTag                                  ( StringA value );

