        enum { CLASSID = 0x0A01D000 };

        static CPlugBitmapRenderScene3d* CreateInstance ();

        Matrix43                GetLocation                             () const;
        void                    SetLocation                             ( Matrix43 value );

        class CScene3d*         GetScene3d                              () const;
        void                    SetScene3d                              ( class CScene3d* value );

        void                    CreateCamera                            ();
        void                    CreateOverlayCameraSettings             ();
