        enum { CLASSID = 0x0306F000 };

        static CGameControlCameraEffect* CreateInstance ();

        bool                    GetIsInstalled                          () const;
        void                    SetIsInstalled                          ( bool value );

        void                    Install                                 ();
        void                    Reset                                   ();
        void                    Uninstall                               ();
