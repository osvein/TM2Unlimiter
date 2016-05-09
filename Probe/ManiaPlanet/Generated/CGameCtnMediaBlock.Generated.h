        enum { CLASSID = 0x03077000 };

        static CGameCtnMediaBlock* CreateInstance ();

        float                   GetEnd                                  () const;
        void                    SetEnd                                  ( float value );

        bool                    GetIsActive                             () const;
        void                    SetIsActive                             ( bool value );

        bool                    GetIsInstalled                          () const;
        void                    SetIsInstalled                          ( bool value );

        float                   GetStart                                () const;
        void                    SetStart                                ( float value );

        void                    SwitchOff                               ();
        void                    SwitchOn                                ();
