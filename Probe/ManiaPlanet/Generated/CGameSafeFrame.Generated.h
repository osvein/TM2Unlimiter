        enum { CLASSID = 0x030B6000 };

        static CGameSafeFrame*  CreateInstance ();

        bool                    GetAutoZoom                             () const;
        void                    SetAutoZoom                             ( bool value );

        Vec2D                   GetPosition                             () const;
        void                    SetPosition                             ( Vec2D value );

        uint                    GetSafeFrameSizeX                       () const;
        void                    SetSafeFrameSizeX                       ( uint value );

        uint                    GetSafeFrameSizeY                       () const;
        void                    SetSafeFrameSizeY                       ( uint value );

        float                   GetZoom                                 () const;
        void                    SetZoom                                 ( float value );

