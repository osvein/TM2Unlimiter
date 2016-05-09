        enum { CLASSID = 0x2D01E000 };

        static CSmAnticheatEvent* CreateInstance ();

        enum eType
        {
            TYPE_ONPLAYERSHOOT,
            TYPE_ONDAMAGE
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        uint                    GetPlayerShoot_Direction                () const;
        void                    SetPlayerShoot_Direction                ( uint value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

