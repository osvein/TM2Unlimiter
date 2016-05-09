        enum { CLASSID = 0x03018000 };

        static CGameScene*      CreateInstance ();

        List < nodptr<class CPlugDecalModel> >& GetChallengeDecals_Models               () const;
        void                    SetChallengeDecals_Models               ( List < nodptr<class CPlugDecalModel> >& value );

        class CGameEnvironmentManager* GetEnvironmentManager                   () const;
        void                    SetEnvironmentManager                   ( class CGameEnvironmentManager* value );

        List < nodptr<class CGameMobil> >& GetGameMobils                           () const;
        void                    SetGameMobils                           ( List < nodptr<class CGameMobil> >& value );

        class CGameHud3d*       GetHud3d                                () const;
        void                    SetHud3d                                ( class CGameHud3d* value );

        class CSceneMobil*      GetMarksMobil                           () const;
        void                    SetMarksMobil                           ( class CSceneMobil* value );

        class CScene3d*         GetScene                                () const;
        void                    SetScene                                ( class CScene3d* value );

