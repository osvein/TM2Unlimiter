        enum { CLASSID = 0x2C008000 };

        static CQmPlaygroundInterface* CreateInstance ();

        enum ePlayedCardAlign
        {
            PLAYEDCARDALIGN_LEFT,
            PLAYEDCARDALIGN_HCENTER,
            PLAYEDCARDALIGN_RIGHT,
            PLAYEDCARDALIGN_NONE
        };
        static std::wstring     PlayedCardAlignToString                 ( ePlayedCardAlign value );
        static ePlayedCardAlign ParsePlayedCardAlign                    ( const std::wstring& wstrName );

        List < nodptr<class CQmPlaygroundActorInterface> >& GetActorsInterfaces                     () const;
        void                    SetActorsInterfaces                     ( List < nodptr<class CQmPlaygroundActorInterface> >& value );

        List < nodptr<class CQmControlCardsStackAnimated> >& GetCardsStacks                          () const;
        void                    SetCardsStacks                          ( List < nodptr<class CQmControlCardsStackAnimated> >& value );

        List < nodptr<class CControlLabel> >& GetCounters                             () const;
        void                    SetCounters                             ( List < nodptr<class CControlLabel> >& value );

        class CSceneMobil*      GetEffectsMobil                         () const;
        void                    SetEffectsMobil                         ( class CSceneMobil* value );

        List < nodptr<class CQmControlGaugeAnimated> >& GetGauges                               () const;
        void                    SetGauges                               ( List < nodptr<class CQmControlGaugeAnimated> >& value );

        ePlayedCardAlign        GetPlayedCardAlign                      () const;
        void                    SetPlayedCardAlign                      ( ePlayedCardAlign value );

        class CSceneMobil*      GetScreenFadeMobil                      () const;
        void                    SetScreenFadeMobil                      ( class CSceneMobil* value );

        class CScene2d*         GetScreenFadeOverlay                    () const;
        void                    SetScreenFadeOverlay                    ( class CScene2d* value );

        void                    HidePlayedCard                          ();
        void                    ScreenFadeIn                            ();
        void                    ScreenFadeOut                           ();
        void                    ShowPlayedCard                          ();
