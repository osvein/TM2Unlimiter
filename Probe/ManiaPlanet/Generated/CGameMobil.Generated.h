        enum { CLASSID = 0x03007000 };

        static CGameMobil*      CreateInstance ();

        uint                    GetGameMobilId                          () const;
        void                    SetGameMobilId                          ( uint value );

        class CSceneMobil*      GetSceneMobil                           () const;
        void                    SetSceneMobil                           ( class CSceneMobil* value );

