        enum { CLASSID = 0x2D01C000 };

        static CSmArenaRulesEvent* CreateInstance ();

        enum eType
        {
            TYPE_UNKNOWN,
            TYPE_ONSHOOT,
            TYPE_ONHIT,
            TYPE_ONARMOREMPTY,
            TYPE_ONCAPTURE,
            TYPE_ONPLAYERREQUESTRESPAWN
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        class CSmBlockPole*     GetBlockPole                            () const;
        void                    SetBlockPole                            ( class CSmBlockPole* value );

        int                     GetDamage                               () const;
        void                    SetDamage                               ( int value );

        class CSmPlayer*        GetPlayer                               () const;
        void                    SetPlayer                               ( class CSmPlayer* value );

        class CSmPlayer*        GetShooter                              () const;
        void                    SetShooter                              ( class CSmPlayer* value );

        int                     GetShooterPoints                        () const;
        void                    SetShooterPoints                        ( int value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

        class CSmPlayer*        GetVictim                               () const;
        void                    SetVictim                               ( class CSmPlayer* value );

        uint                    GetWeaponNum                            () const;
        void                    SetWeaponNum                            ( uint value );

