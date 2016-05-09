        enum { CLASSID = 0x09051000 };

        static CPlugTreeGenerator* CreateInstance ();

        bool                    GetIsSaveGenerated                      () const;
        void                    SetIsSaveGenerated                      ( bool value );

        bool                    GetIsToKeepInSaveAsRelease              () const;
        void                    SetIsToKeepInSaveAsRelease              ( bool value );

