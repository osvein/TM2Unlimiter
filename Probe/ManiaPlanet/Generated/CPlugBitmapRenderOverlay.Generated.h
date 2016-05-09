        enum { CLASSID = 0x0909E000 };

        static CPlugBitmapRenderOverlay* CreateInstance ();

        bool                    GetCanRenderInSubRect                   () const;
        void                    SetCanRenderInSubRect                   ( bool value );

        bool                    GetIsOverlaySelfBlur                    () const;
        void                    SetIsOverlaySelfBlur                    ( bool value );

        float                   GetTexelByPixel                         () const;
        void                    SetTexelByPixel                         ( float value );

