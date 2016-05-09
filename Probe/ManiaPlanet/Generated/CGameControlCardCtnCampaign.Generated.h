        enum { CLASSID = 0x030D6000 };

        static CGameControlCardCtnCampaign* CreateInstance ();

        Id                      GetIconId                               () const;
        void                    SetIconId                               ( Id value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        uint                    GetNbMedals                             () const;
        void                    SetNbMedals                             ( uint value );

        StringW                 GetStrEnvironment                       () const;
        void                    SetStrEnvironment                       ( StringW value );

        StringW                 GetStrLeagueName                        () const;
        void                    SetStrLeagueName                        ( StringW value );

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

        StringW                 GetStrRaceType                          () const;
        void                    SetStrRaceType                          ( StringW value );

        StringW                 GetStrSkillRank                         () const;
        void                    SetStrSkillRank                         ( StringW value );

        StringW                 GetStrSkillScore                        () const;
        void                    SetStrSkillScore                        ( StringW value );

