        enum { CLASSID = 0x0308E000 };

        static CGameLeague*     CreateInstance ();

        enum eMaxServerLevel
        {
            MAXSERVERLEVEL_GREEN,
            MAXSERVERLEVEL_YELLOW,
            MAXSERVERLEVEL_RED
        };
        static std::wstring     MaxServerLevelToString                  ( eMaxServerLevel value );
        static eMaxServerLevel  ParseMaxServerLevel                     ( const std::wstring& wstrName );

        StringW                 GetDescription                          () const;
        void                    SetDescription                          ( StringW value );

        bool                    GetIsGroup                              () const;
        void                    SetIsGroup                              ( bool value );

        StringA                 GetLogin                                () const;
        void                    SetLogin                                ( StringA value );

        class CSystemData*      GetLogo                                 () const;
        void                    SetLogo                                 ( class CSystemData* value );

        eMaxServerLevel         GetMaxServerLevel                       () const;
        void                    SetMaxServerLevel                       ( eMaxServerLevel value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        uint                    GetOnlineHostsCount                     () const;
        void                    SetOnlineHostsCount                     ( uint value );

        uint                    GetOnlinePlayersCount                   () const;
        void                    SetOnlinePlayersCount                   ( uint value );

        StringW                 GetPath                                 () const;
        void                    SetPath                                 ( StringW value );

