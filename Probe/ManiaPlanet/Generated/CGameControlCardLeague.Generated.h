        enum { CLASSID = 0x030BE000 };

        static CGameControlCardLeague* CreateInstance ();

        class CPlugBitmap*      GetLogo                                 () const;
        void                    SetLogo                                 ( class CPlugBitmap* value );

        uint                    GetMaxLevel                             () const;
        void                    SetMaxLevel                             ( uint value );

        StringW                 GetStrDescription                       () const;
        void                    SetStrDescription                       ( StringW value );

        StringA                 GetStrLogoUrl                           () const;
        void                    SetStrLogoUrl                           ( StringA value );

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

        StringA                 GetStrOnlineHostsCount                  () const;
        void                    SetStrOnlineHostsCount                  ( StringA value );

        StringA                 GetStrOnlinePlayersCount                () const;
        void                    SetStrOnlinePlayersCount                ( StringA value );

        StringW                 GetStrPath                              () const;
        void                    SetStrPath                              ( StringW value );

