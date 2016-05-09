        enum { CLASSID = 0x03094000 };

        static CGameCtnReplayRecordInfo* CreateInstance ();

        uint                    GetBestTime                             () const;
        void                    SetBestTime                             ( uint value );

        Id                      GetChallengeId                          () const;
        void                    SetChallengeId                          ( Id value );

        Id                      GetCollectionId                         () const;
        void                    SetCollectionId                         ( Id value );

        StringA                 GetPlayerLogin                          () const;
        void                    SetPlayerLogin                          ( StringA value );

        StringW                 GetPlayerNickname                       () const;
        void                    SetPlayerNickname                       ( StringW value );

