        enum { CLASSID = 0x03021000 };

        static CGameCtnPlayground* CreateInstance ();

        class CGameCtnChallengeScript* GetChallengeScript                      () const;
        void                    SetChallengeScript                      ( class CGameCtnChallengeScript* value );

        class CGameScene*       GetGameScene                            () const;
        void                    SetGameScene                            ( class CGameScene* value );

        class CGameCtnGhost*    GetGuideGhost                           () const;
        void                    SetGuideGhost                           ( class CGameCtnGhost* value );

        class CGameCtnGhost*    GetPlayerBestGhost                      () const;
        void                    SetPlayerBestGhost                      ( class CGameCtnGhost* value );

        class CGameCtnGhost*    GetPlayerRecordedGhost                  () const;
        void                    SetPlayerRecordedGhost                  ( class CGameCtnGhost* value );

