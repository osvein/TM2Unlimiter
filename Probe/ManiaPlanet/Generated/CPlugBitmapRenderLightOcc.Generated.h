        enum { CLASSID = 0x0909F000 };

        static CPlugBitmapRenderLightOcc* CreateInstance ();

        class CPlugBitmap*      GetBitmapToModulate                     () const;
        void                    SetBitmapToModulate                     ( class CPlugBitmap* value );

        float                   GetFlareThreshold                       () const;
        void                    SetFlareThreshold                       ( float value );

        float                   GetFovY                                 () const;
        void                    SetFovY                                 ( float value );

        float                   GetOpacityLensFlare                     () const;
        void                    SetOpacityLensFlare                     ( float value );

        float                   GetOpacityLightThrough                  () const;
        void                    SetOpacityLightThrough                  ( float value );

