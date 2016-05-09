        enum { CLASSID = 0x03002000 };

        static CGamePlayer*     CreateInstance ();

        StringA                 GetLogin                                () const;
        void                    SetLogin                                ( StringA value );

        class CGameMobil*       GetMobil                                () const;
        void                    SetMobil                                ( class CGameMobil* value );

        class CGamePlayerInfo*  GetUser                                 () const;
        void                    SetUser                                 ( class CGamePlayerInfo* value );

