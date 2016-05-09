        enum { CLASSID = 0x0A036000 };

        static CSceneLocationCamera* CreateInstance ();

        Vec2D                   GetFovRectMax                           () const;
        void                    SetFovRectMax                           ( Vec2D value );

        Vec2D                   GetFovRectMin                           () const;
        void                    SetFovRectMin                           ( Vec2D value );

        float                   GetStereoScreenDist                     () const;
        void                    SetStereoScreenDist                     ( float value );

