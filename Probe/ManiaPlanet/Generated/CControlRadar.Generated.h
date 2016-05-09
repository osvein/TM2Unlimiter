        enum { CLASSID = 0x0702D000 };

        static CControlRadar*   CreateInstance ();

        bool                    GetFollowOnlyPosition                   () const;
        void                    SetFollowOnlyPosition                   ( bool value );

        class CScene2d*         GetOverlay                              () const;
        void                    SetOverlay                              ( class CScene2d* value );

        class CMwRefBuffer*     GetResources                            () const;
        void                    SetResources                            ( class CMwRefBuffer* value );

        float                   GetScale                                () const;
        void                    SetScale                                ( float value );

        class CSceneMobil*      GetScreen                               () const;
        void                    SetScreen                               ( class CSceneMobil* value );

        void                    AddDummyMobil                           ();
