        enum { CLASSID = 0x0303F000 };

        static CGameGhost*      CreateInstance ();

        uint                    GetDuration                             () const;
        void                    SetDuration                             ( uint value );

        bool                    GetIsRecording                          () const;
        void                    SetIsRecording                          ( bool value );

        bool                    GetIsReplaying                          () const;
        void                    SetIsReplaying                          ( bool value );

        class CSceneMobil*      GetRecordMobil                          () const;
        void                    SetRecordMobil                          ( class CSceneMobil* value );

        class CSceneMobil*      GetReplayMobil                          () const;
        void                    SetReplayMobil                          ( class CSceneMobil* value );

        uint                    GetSavedPeriod                          () const;
        void                    SetSavedPeriod                          ( uint value );

        uint                    GetSize                                 () const;
        void                    SetSize                                 ( uint value );

