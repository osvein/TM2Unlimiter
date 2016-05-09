        enum { CLASSID = 0x03154000 };

        static CGameCtnEditorMapTypeScriptHandler* CreateInstance ();

        enum eValidationStatus
        {
            VALIDATIONSTATUS_NOTVALIDABLE,
            VALIDATIONSTATUS_VALIDABLE,
            VALIDATIONSTATUS_VALIDATED
        };
        static std::wstring     ValidationStatusToString                ( eValidationStatus value );
        static eValidationStatus ParseValidationStatus                   ( const std::wstring& wstrName );

        bool                    GetCustomEditAnchorData                 () const;
        void                    SetCustomEditAnchorData                 ( bool value );

        bool                    GetIsSwitchedToPlayground               () const;
        void                    SetIsSwitchedToPlayground               ( bool value );

        StringW                 GetValidabilityRequirementsMessage      () const;
        void                    SetValidabilityRequirementsMessage      ( StringW value );

        bool                    GetValidationEndRequested               () const;
        void                    SetValidationEndRequested               ( bool value );

        eValidationStatus       GetValidationStatus                     () const;
        void                    SetValidationStatus                     ( eValidationStatus value );

        void                    ClearMapMetadata                        ();
        void                    RequestEnterPlayground                  ();
        void                    RequestLeavePlayground                  ();
