        enum { CLASSID = 0x08040000 };

        static CMotionTrackVisual* CreateInstance ();

        class CFuncVisual*      GetFuncVisual                           () const;
        void                    SetFuncVisual                           ( class CFuncVisual* value );

        class CPlugVisual*      GetVisual                               () const;
        void                    SetVisual                               ( class CPlugVisual* value );

