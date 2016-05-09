        enum { CLASSID = 0x03013000 };

        static CGameManiaPlanet* CreateInstance ();

        class CGameCoverFlowDesc* GetCoverFlowDesc                        () const;
        void                    SetCoverFlowDesc                        ( class CGameCoverFlowDesc* value );

        class CGameManiaTitleCore* GetLoadedCore                           () const;
        void                    SetLoadedCore                           ( class CGameManiaTitleCore* value );

        class CGameManiaTitle*  GetLoadedManiaTitle                     () const;
        void                    SetLoadedManiaTitle                     ( class CGameManiaTitle* value );

        List < nodptr<class CGameManiaTitle> >& GetManiaTitles                          () const;
        void                    SetManiaTitles                          ( List < nodptr<class CGameManiaTitle> >& value );

        class CSystemFidsFolder* GetManiaTitlesFolder                    () const;
        void                    SetManiaTitlesFolder                    ( class CSystemFidsFolder* value );

        StringA                 GetStartupManiaTitle                    () const;
        void                    SetStartupManiaTitle                    ( StringA value );

        class CPlugFileImg*     GetTitleMainDefaultBgFid                () const;
        void                    SetTitleMainDefaultBgFid                ( class CPlugFileImg* value );

        class CControlStyleSheet* GetTitleMainDefaultStyleSheet           () const;
        void                    SetTitleMainDefaultStyleSheet           ( class CControlStyleSheet* value );

        void                    ManiaBar_Back                           ();
        void                    ManiaBar_Options                        ();
        void                    ScanDiskForManiaTitles                  ();
