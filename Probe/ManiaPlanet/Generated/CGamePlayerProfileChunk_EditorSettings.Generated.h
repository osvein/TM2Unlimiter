        enum { CLASSID = 0x03163000 };

        static CGamePlayerProfileChunk_EditorSettings* CreateInstance ();

        StringW                 GetEditorSettingsName                   () const;
        void                    SetEditorSettingsName                   ( StringW value );

