        enum { CLASSID = 0x06011000 };

        static CHmsPrecalcRender* CreateInstance ();

        enum eBitmapDepthMode
        {
            BITMAPDEPTHMODE_LINEAR,
            BITMAPDEPTHMODE_ZBUFFER
        };
        static std::wstring     BitmapDepthModeToString                 ( eBitmapDepthMode value );
        static eBitmapDepthMode ParseBitmapDepthMode                    ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBitmapDepth                          () const;
        void                    SetBitmapDepth                          ( class CPlugBitmap* value );

        eBitmapDepthMode        GetBitmapDepthMode                      () const;
        void                    SetBitmapDepthMode                      ( eBitmapDepthMode value );

        class CPlugBitmap*      GetBitmapRGB                            () const;
        void                    SetBitmapRGB                            ( class CPlugBitmap* value );

        bool                    GetIsTreeDepthGenFound                  () const;
        void                    SetIsTreeDepthGenFound                  ( bool value );

        float                   GetScrollPosX                           () const;
        void                    SetScrollPosX                           ( float value );

        float                   GetScrollPosY                           () const;
        void                    SetScrollPosY                           ( float value );

        StringA                 GetTreeIdDepthGen                       () const;
        void                    SetTreeIdDepthGen                       ( StringA value );

        float                   GetZoomFactor                           () const;
        void                    SetZoomFactor                           ( float value );

