        enum { CLASSID = 0x09035000 };

        static CPlugFileFidContainer* CreateInstance ();

        class CSystemFids*      GetLocation                             () const;
        void                    SetLocation                             ( class CSystemFids* value );

        uint                    GetNbFiles                              () const;
        void                    SetNbFiles                              ( uint value );

        uint                    GetNbFolders                            () const;
        void                    SetNbFolders                            ( uint value );

        void                    DumpContents                            ();
        void                    EdDumpStatistics                        ();
        void                    UiInstallFids                           ();
        void                    UiInstallFidsInSubFolder                ();
        void                    UninstallAndDeleteFids                  ();
