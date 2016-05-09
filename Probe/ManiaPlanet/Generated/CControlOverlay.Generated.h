        enum { CLASSID = 0x07013000 };

        static CControlOverlay* CreateInstance ();

        class CSceneCamera*     GetCamera                               () const;
        void                    SetCamera                               ( class CSceneCamera* value );

        class CScene3d*         GetScene                                () const;
        void                    SetScene                                ( class CScene3d* value );

