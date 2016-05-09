        enum { CLASSID = 0x2D013000 };

        static CSmAttributesItem* CreateInstance ();

        enum eType
        {
            TYPE_XXXX,
            TYPE_AMMO,
            TYPE_SPECIALMOVE,
            TYPE_CHECKPOINT,
            TYPE_ARMOR
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        int                     GetAmmo_Count                           () const;
        void                    SetAmmo_Count                           ( int value );

        Id                      GetAmmo_GunId                           () const;
        void                    SetAmmo_GunId                           ( Id value );

        int                     GetHealth_Gain                          () const;
        void                    SetHealth_Gain                          ( int value );

        bool                    GetMoveAction_AutoStart                 () const;
        void                    SetMoveAction_AutoStart                 ( bool value );

        int                     GetMoveAction_DurationMs                () const;
        void                    SetMoveAction_DurationMs                ( int value );

        int                     GetMoveAction_EventCount                () const;
        void                    SetMoveAction_EventCount                ( int value );

        Id                      GetMoveAction_Id                        () const;
        void                    SetMoveAction_Id                        ( Id value );

        uint                    GetRespawnPeriod                        () const;
        void                    SetRespawnPeriod                        ( uint value );

        class CPlugSound*       GetSoundGrab                            () const;
        void                    SetSoundGrab                            ( class CPlugSound* value );

        class CPlugSound*       GetSoundSpawn                           () const;
        void                    SetSoundSpawn                           ( class CPlugSound* value );

        class CPlugSound*       GetSoundUnspawn                         () const;
        void                    SetSoundUnspawn                         ( class CPlugSound* value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

