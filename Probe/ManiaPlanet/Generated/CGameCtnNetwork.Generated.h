        enum { CLASSID = 0x030D2000 };

        static CGameCtnNetwork* CreateInstance ();

        enum eValidationMode
        {
            VALIDATIONMODE_REFEREEMODE_TOP3,
            VALIDATIONMODE_REFEREEMODE_ALL
        };
        static std::wstring     ValidationModeToString                  ( eValidationMode value );
        static eValidationMode  ParseValidationMode                     ( const std::wstring& wstrName );

        bool                    GetInGetReplaysMode                     () const;
        void                    SetInGetReplaysMode                     ( bool value );

        bool                    GetIsInRefereeMode                      () const;
        void                    SetIsInRefereeMode                      ( bool value );

        uint                    GetNextChallengeIndex                   () const;
        void                    SetNextChallengeIndex                   ( uint value );

        bool                    GetSpectator                            () const;
        void                    SetSpectator                            ( bool value );

        eValidationMode         GetValidationMode                       () const;
        void                    SetValidationMode                       ( eValidationMode value );

        void                    GetFilesToSubmit                        ();
        void                    GetManiaNetResource_OnCancel            ();
