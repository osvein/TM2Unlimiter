        enum { CLASSID = 0x0312C000 };

        static CGamePlayerProfileChunk_AccountSettings* CreateInstance ();

        bool                    GetAskForAccountConversion              () const;
        void                    SetAskForAccountConversion              ( bool value );

        bool                    GetAutoConnect                          () const;
        void                    SetAutoConnect                          ( bool value );

        StringW                 GetAvatarName                           () const;
        void                    SetAvatarName                           ( StringW value );

        StringW                 GetDescription                          () const;
        void                    SetDescription                          ( StringW value );

        uint                    GetEulaVersion                          () const;
        void                    SetEulaVersion                          ( uint value );

        bool                    GetFriendsCheat                         () const;
        void                    SetFriendsCheat                         ( bool value );

        List < nodptr<class CGameNetOnlineMessage> >& GetInboxMessages                        () const;
        void                    SetInboxMessages                        ( List < nodptr<class CGameNetOnlineMessage> >& value );

        StringA                 GetLastSessionId                        () const;
        void                    SetLastSessionId                        ( StringA value );

        StringA                 GetLastUsedMSAddress                    () const;
        void                    SetLastUsedMSAddress                    ( StringA value );

        StringA                 GetLastUsedMSPath                       () const;
        void                    SetLastUsedMSPath                       ( StringA value );

        class CGameLeague*      GetLeague                               () const;
        void                    SetLeague                               ( class CGameLeague* value );

        List < StringW >&       GetLeagueSteps                          () const;
        void                    SetLeagueSteps                          ( List < StringW >& value );

        bool                    GetLoginValidated                       () const;
        void                    SetLoginValidated                       ( bool value );

        StringW                 GetNickName                             () const;
        void                    SetNickName                             ( StringW value );

        StringA                 GetOnlineLogin                          () const;
        void                    SetOnlineLogin                          ( StringA value );

        StringA                 GetOnlinePassword                       () const;
        void                    SetOnlinePassword                       ( StringA value );

        StringW                 GetOnlinePath                           () const;
        void                    SetOnlinePath                           ( StringW value );

        uint                    GetOnlinePlanets                        () const;
        void                    SetOnlinePlanets                        ( uint value );

        uint                    GetOnlineRemainingNickNamesChangesCount () const;
        void                    SetOnlineRemainingNickNamesChangesCount ( uint value );

        StringA                 GetOnlineSupportKey                     () const;
        void                    SetOnlineSupportKey                     ( StringA value );

        StringA                 GetOnlineValidationCode                 () const;
        void                    SetOnlineValidationCode                 ( StringA value );

        List < nodptr<class CGameNetOnlineMessage> >& GetOutboxMessages                       () const;
        void                    SetOutboxMessages                       ( List < nodptr<class CGameNetOnlineMessage> >& value );

        StringA                 GetRSAPrivateKey                        () const;
        void                    SetRSAPrivateKey                        ( StringA value );

        List < nodptr<class CGameNetOnlineMessage> >& GetReadMessages                         () const;
        void                    SetReadMessages                         ( List < nodptr<class CGameNetOnlineMessage> >& value );

        bool                    GetReceiveNews                          () const;
        void                    SetReceiveNews                          ( bool value );

        bool                    GetRememberOnlinePassword               () const;
        void                    SetRememberOnlinePassword               ( bool value );

        bool                    GetUnlockAllCheat                       () const;
        void                    SetUnlockAllCheat                       ( bool value );

