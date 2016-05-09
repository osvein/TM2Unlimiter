        enum { CLASSID = 0x03153000 };

        static CGameBuddy*      CreateInstance ();

        class CGameAvatar*      GetAvatar                               () const;
        void                    SetAvatar                               ( class CGameAvatar* value );

        bool                    GetCanReceiveMessages                   () const;
        void                    SetCanReceiveMessages                   ( bool value );

        bool                    GetInvited                              () const;
        void                    SetInvited                              ( bool value );

        bool                    GetIsOnline                             () const;
        void                    SetIsOnline                             ( bool value );

        bool                    GetIsUsed                               () const;
        void                    SetIsUsed                               ( bool value );

        uint                    GetLadderPoints                         () const;
        void                    SetLadderPoints                         ( uint value );

        uint                    GetLadderRank                           () const;
        void                    SetLadderRank                           ( uint value );

        class CGameLeague*      GetLeague                               () const;
        void                    SetLeague                               ( class CGameLeague* value );

        StringA                 GetLogin                                () const;
        void                    SetLogin                                ( StringA value );

        StringW                 GetNickName                             () const;
        void                    SetNickName                             ( StringW value );

        StringW                 GetPath                                 () const;
        void                    SetPath                                 ( StringW value );

        class CGameNetServerInfo* GetServer                               () const;
        void                    SetServer                               ( class CGameNetServerInfo* value );

        uint                    GetSkillsPoints                         () const;
        void                    SetSkillsPoints                         ( uint value );

        uint                    GetSkillsRank                           () const;
        void                    SetSkillsRank                           ( uint value );

        bool                    GetWaitingConfirmation                  () const;
        void                    SetWaitingConfirmation                  ( bool value );

