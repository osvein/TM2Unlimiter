        enum { CLASSID = 0x03003000 };

        static CGameTerminal*   CreateInstance ();

        enum eSpectatorCameraTarget
        {
            SPECTATORCAMERATARGET_SPECTATORCAM_MANUAL,
            SPECTATORCAMERATARGET_SPECTATORCAM_AUTO
        };
        static std::wstring     SpectatorCameraTargetToString           ( eSpectatorCameraTarget value );
        static eSpectatorCameraTarget ParseSpectatorCameraTarget              ( const std::wstring& wstrName );

        enum eSpectatorCameraType
        {
            SPECTATORCAMERATYPE_SPECTATORCAM_REPLAY,
            SPECTATORCAMERATYPE_SPECTATORCAM_FOLLOW,
            SPECTATORCAMERATYPE_SPECTATORCAM_FREE
        };
        static std::wstring     SpectatorCameraTypeToString             ( eSpectatorCameraType value );
        static eSpectatorCameraType ParseSpectatorCameraType                ( const std::wstring& wstrName );

        class CGamePlayerCameraSet* GetCameraSet                            () const;
        void                    SetCameraSet                            ( class CGamePlayerCameraSet* value );

        class CGamePlayer*      GetControlledPlayer                     () const;
        void                    SetControlledPlayer                     ( class CGamePlayer* value );

        class CGameCtnMediaClipPlayer* GetMediaClipPlayer                      () const;
        void                    SetMediaClipPlayer                      ( class CGameCtnMediaClipPlayer* value );

        eSpectatorCameraTarget  GetSpectatorCameraTarget                () const;
        void                    SetSpectatorCameraTarget                ( eSpectatorCameraTarget value );

        eSpectatorCameraType    GetSpectatorCameraType                  () const;
        void                    SetSpectatorCameraType                  ( eSpectatorCameraType value );

        void                    GetNextWantedCameraTarget               ();
        void                    GetNextWantedCameraType                 ();
