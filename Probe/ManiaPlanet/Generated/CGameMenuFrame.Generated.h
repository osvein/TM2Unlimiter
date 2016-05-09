        enum { CLASSID = 0x0300B000 };

        static CGameMenuFrame*  CreateInstance ();

        bool                    GetAllowBgCamera                        () const;
        void                    SetAllowBgCamera                        ( bool value );

        Id                      GetAutoBackButtonId                     () const;
        void                    SetAutoBackButtonId                     ( Id value );

        class CScene3d*         GetFrameScene                           () const;
        void                    SetFrameScene                           ( class CScene3d* value );

        class CGameMenu*        GetMenu                                 () const;
        void                    SetMenu                                 ( class CGameMenu* value );

        class CMwCmdBlockMain*  GetOnBeforeShowScript                   () const;
        void                    SetOnBeforeShowScript                   ( class CMwCmdBlockMain* value );

        class CMwCmdBlockMain*  GetOnHideScript                         () const;
        void                    SetOnHideScript                         ( class CMwCmdBlockMain* value );

        class CMwCmdBlockMain*  GetOnShowScript                         () const;
        void                    SetOnShowScript                         ( class CMwCmdBlockMain* value );

        class CPlugSound*       GetShowSound                            () const;
        void                    SetShowSound                            ( class CPlugSound* value );

        class CPlugSound*       GetUpDownSound                          () const;
        void                    SetUpDownSound                          ( class CPlugSound* value );

        void                    RunOnShowScripts                        ();
