        enum { CLASSID = 0x03030000 };

        static CGameDialogs*    CreateInstance ();

        List < nodptr<class CGameFid> >& GetDialogSaveAs_Files                   () const;
        void                    SetDialogSaveAs_Files                   ( List < nodptr<class CGameFid> >& value );

        StringW                 GetDialogSaveAs_Path                    () const;
        void                    SetDialogSaveAs_Path                    ( StringW value );

        class CGameMenu*        GetDialogs                              () const;
        void                    SetDialogs                              ( class CGameMenu* value );

        float                   GetProgress                             () const;
        void                    SetProgress                             ( float value );

        StringW                 GetString                               () const;
        void                    SetString                               ( StringW value );

        void                    AskYesNo_No                             ();
        void                    AskYesNo_Yes                            ();
        void                    DialogSaveAs_HierarchyUp                ();
        void                    DialogSaveAs_OnCancel                   ();
        void                    DialogSaveAs_OnRefresh                  ();
        void                    DialogSaveAs_OnValidate                 ();
        void                    DoMessage_Ok                            ();
        void                    HideDialogs                             ();
