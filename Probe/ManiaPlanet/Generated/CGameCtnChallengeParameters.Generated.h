        enum { CLASSID = 0x0305B000 };

        static CGameCtnChallengeParameters* CreateInstance ();

        uint                    GetAuthorScore                          () const;
        void                    SetAuthorScore                          ( uint value );

        uint                    GetAuthorTime                           () const;
        void                    SetAuthorTime                           ( uint value );

        uint                    GetBronzeTime                           () const;
        void                    SetBronzeTime                           ( uint value );

        uint                    GetGoldTime                             () const;
        void                    SetGoldTime                             ( uint value );

        bool                    GetIsValidatedForScriptModes            () const;
        void                    SetIsValidatedForScriptModes            ( bool value );

        StringW                 GetMapStyle                             () const;
        void                    SetMapStyle                             ( StringW value );

        StringW                 GetMapType                              () const;
        void                    SetMapType                              ( StringW value );

        class CGameCtnGhost*    GetRaceValidateGhost                    () const;
        void                    SetRaceValidateGhost                    ( class CGameCtnGhost* value );

        uint                    GetSilverTime                           () const;
        void                    SetSilverTime                           ( uint value );

        StringW                 GetStyle                                () const;
        void                    SetStyle                                ( StringW value );

        StringA                 GetTip                                  () const;
        void                    SetTip                                  ( StringA value );

        StringW                 GetType                                 () const;
        void                    SetType                                 ( StringW value );

        void                    ResetGoldSilverBronzeStunts             ();
