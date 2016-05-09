        enum { CLASSID = 0x0307E000 };

        static CGameCtnMediaBlockFx* CreateInstance ();

        float                   GetFadeDuration                         () const;
        void                    SetFadeDuration                         ( float value );

        class CScene3d*         GetScene3d                              () const;
        void                    SetScene3d                              ( class CScene3d* value );

        class CSceneFx*         GetSceneFx                              () const;
        void                    SetSceneFx                              ( class CSceneFx* value );

