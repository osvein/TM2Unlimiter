        enum { CLASSID = 0x03123000 };

        static CGameCtnEditorBlockSolid* CreateInstance ();

        class CPlugSolid*       GetBlockSolid                           () const;
        void                    SetBlockSolid                           ( class CPlugSolid* value );

        class CGameCtnEditorBlockSolidInterface* GetEditorBlockSolidInterface            () const;
        void                    SetEditorBlockSolidInterface            ( class CGameCtnEditorBlockSolidInterface* value );

        class CGameEditorModel* GetEditorModel                          () const;
        void                    SetEditorModel                          ( class CGameEditorModel* value );

        void                    ButtonBackOnClick                       ();
        void                    ButtonFaceMode_OnClick                  ();
        void                    ButtonPreviewMode_OnClick               ();
        void                    ButtonSaveOnClick                       ();
        void                    ButtonVertexAndEdgeMode_OnClick         ();
        void                    SaveAndQuit_OnCancel                    ();
        void                    SaveAndQuit_OnDiscard                   ();
        void                    SaveAndQuit_OnYes                       ();
