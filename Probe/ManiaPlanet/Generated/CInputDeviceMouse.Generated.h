        enum { CLASSID = 0x13008000 };

        static CInputDeviceMouse* CreateInstance ();

        bool                    GetIsInsideWindow                       () const;
        void                    SetIsInsideWindow                       ( bool value );

        Vec2D                   GetKineticScrollVel                     () const;
        void                    SetKineticScrollVel                     ( Vec2D value );

        Vec2D                   GetPosInViewport                        () const;
        void                    SetPosInViewport                        ( Vec2D value );

