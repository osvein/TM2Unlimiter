        enum { CLASSID = 0x2C023000 };

        static CGamePlayerProfileChunk_QuestManiaSettings* CreateInstance ();

        Array < bool >&         GetAbilitiesLessonTaken                 () const;
        void                    SetAbilitiesLessonTaken                 ( Array < bool >& value );

        uint                    GetMoney                                () const;
        void                    SetMoney                                ( uint value );

        uint                    GetPotentialPhysio                      () const;
        void                    SetPotentialPhysio                      ( uint value );

        uint                    GetPotentialPsycho                      () const;
        void                    SetPotentialPsycho                      ( uint value );

        uint                    GetPotentialSenso                       () const;
        void                    SetPotentialSenso                       ( uint value );

        Array < uint >&         GetXp_Abilities                         () const;
        void                    SetXp_Abilities                         ( Array < uint >& value );

        uint                    GetXp_General                           () const;
        void                    SetXp_General                           ( uint value );

