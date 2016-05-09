        enum { CLASSID = 0x0304A000 };

        static CGameCtnMediaBlockEditorTriangles* CreateInstance ();

        class CControlFrame*    GetFrame                                () const;
        void                    SetFrame                                ( class CControlFrame* value );

        float                   GetVertAlpha                            () const;
        void                    SetVertAlpha                            ( float value );

        Vec3D                   GetVertPos                              () const;
        void                    SetVertPos                              ( Vec3D value );

        color                   GetVertRGB                              () const;
        void                    SetVertRGB                              ( color value );

        void                    ModeCreateTriangles                     ();
        void                    ModeDeleteVertexs                       ();
        void                    ModeMoveVertexs                         ();
