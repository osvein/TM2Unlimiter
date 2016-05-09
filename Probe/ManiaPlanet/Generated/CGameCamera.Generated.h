        enum { CLASSID = 0x03023000 };

        static CGameCamera*     CreateInstance ();

        class CSceneCamera*     GetSceneCamera                          () const;
        void                    SetSceneCamera                          ( class CSceneCamera* value );

