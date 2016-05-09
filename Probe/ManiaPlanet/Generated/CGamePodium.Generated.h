        enum { CLASSID = 0x0313A000 };

        static CGamePodium*     CreateInstance ();

        class CSceneCamera*     GetPodiumCamera                         () const;
        void                    SetPodiumCamera                         ( class CSceneCamera* value );

