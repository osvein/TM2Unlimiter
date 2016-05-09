        enum { CLASSID = 0x030E2000 };

        static CGamePlaygroundInterface* CreateInstance ();

        class CGameCtnChallenge* GetChallenge                            () const;
        void                    SetChallenge                            ( class CGameCtnChallenge* value );

        StringW                 GetChatEntry                            () const;
        void                    SetChatEntry                            ( StringW value );

        class CGameHud3d*       GetHud3d                                () const;
        void                    SetHud3d                                ( class CGameHud3d* value );

        class CControlContainer* GetInterfaceRoot                        () const;
        void                    SetInterfaceRoot                        ( class CControlContainer* value );

        class CControlFrame*    GetManialinkPage                        () const;
        void                    SetManialinkPage                        ( class CControlFrame* value );

        class CGamePodium*      GetPodium                               () const;
        void                    SetPodium                               ( class CGamePodium* value );

        List < nodptr<class CGamePlaygroundUIConfig> >& GetUIConfigs                            () const;
        void                    SetUIConfigs                            ( List < nodptr<class CGamePlaygroundUIConfig> >& value );

        void                    ChatFoldUnfold                          ();
        void                    ChatNextPage                            ();
        void                    ChatPreviousPage                        ();
