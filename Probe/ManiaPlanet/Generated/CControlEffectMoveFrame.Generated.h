        enum { CLASSID = 0x07025000 };

        static CControlEffectMoveFrame* CreateInstance ();

        Vec3D                   GetAngleFrom                            () const;
        void                    SetAngleFrom                            ( Vec3D value );

        Vec2D                   GetDefaultShift                         () const;
        void                    SetDefaultShift                         ( Vec2D value );

        bool                    GetIsInverse                            () const;
        void                    SetIsInverse                            ( bool value );

        float                   GetPeriod                               () const;
        void                    SetPeriod                               ( float value );

        void                    AddChildShift                           ();
        void                    RemoveChildShift                        ();
