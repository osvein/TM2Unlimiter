        enum { CLASSID = 0x07028000 };

        static CControlListMap* CreateInstance ();

        class CPlugBitmap*      GetBitmap                               () const;
        void                    SetBitmap                               ( class CPlugBitmap* value );

        Vec2D                   GetMapRectMax                           () const;
        void                    SetMapRectMax                           ( Vec2D value );

        Vec2D                   GetMapRectMin                           () const;
        void                    SetMapRectMin                           ( Vec2D value );

        StringA                 GetStackTextOriginCoord                 () const;
        void                    SetStackTextOriginCoord                 ( StringA value );

        StringA                 GetStackTextTargetCoord                 () const;
        void                    SetStackTextTargetCoord                 ( StringA value );

