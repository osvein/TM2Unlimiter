        enum { CLASSID = 0x0901A000 };

        static CPlugSound*      CreateInstance ();

        enum eBalanceGroup
        {
            BALANCEGROUP_AUTO,
            BALANCEGROUP_MUSIC,
            BALANCEGROUP_MENUS,
            BALANCEGROUP_AMBIANCE,
            BALANCEGROUP_PLAYER,
            BALANCEGROUP_BENGS,
            BALANCEGROUP_GUNS,
            BALANCEGROUP_BACKINGDIRECT,
            BALANCEGROUP_BACKINGINDIRECT,
            BALANCEGROUP_GAMEUI,
            BALANCEGROUP_CUSTOM1,
            BALANCEGROUP_CUSTOM2,
            BALANCEGROUP_OTHERPLAYERS,
            BALANCEGROUP_IMPACTWARNING
        };
        static std::wstring     BalanceGroupToString                    ( eBalanceGroup value );
        static eBalanceGroup    ParseBalanceGroup                       ( const std::wstring& wstrName );

        enum eMode
        {
            MODE_STATIC2D,
            MODE_DYNAMIC2D,
            MODE_3D,
            MODE_3DOMNI,
            MODE_INTERNALFORCEHARD3D
        };
        static std::wstring     ModeToString                            ( eMode value );
        static eMode            ParseMode                               ( const std::wstring& wstrName );

        enum eRoomFxSend
        {
            ROOMFXSEND_NONE,
            ROOMFXSEND_LOW,
            ROOMFXSEND_MID,
            ROOMFXSEND_HIGH,
            ROOMFXSEND_FULL
        };
        static std::wstring     RoomFxSendToString                      ( eRoomFxSend value );
        static eRoomFxSend      ParseRoomFxSend                         ( const std::wstring& wstrName );

        enum eSoundKind
        {
            SOUNDKIND_POINT,
            SOUNDKIND_DIRECTIONAL
        };
        static std::wstring     SoundKindToString                       ( eSoundKind value );
        static eSoundKind       ParseSoundKind                          ( const std::wstring& wstrName );

        float                   GetAirAbsorptionFactor                  () const;
        void                    SetAirAbsorptionFactor                  ( float value );

        class CPlugSound*       GetBackingSound                         () const;
        void                    SetBackingSound                         ( class CPlugSound* value );

        eBalanceGroup           GetBalanceGroup                         () const;
        void                    SetBalanceGroup                         ( eBalanceGroup value );

        float                   GetConeOutsideAttenuation               () const;
        void                    SetConeOutsideAttenuation               ( float value );

        float                   GetDopplerFactor                        () const;
        void                    SetDopplerFactor                        ( float value );

        int                     GetDuplicatesIntervalMin                () const;
        void                    SetDuplicatesIntervalMin                ( int value );

        bool                    GetEnableDoppler                        () const;
        void                    SetEnableDoppler                        ( bool value );

        float                   GetFadeStopDuration                     () const;
        void                    SetFadeStopDuration                     ( float value );

        uint                    GetInsideConeAngle                      () const;
        void                    SetInsideConeAngle                      ( uint value );

        bool                    GetIsContinuous                         () const;
        void                    SetIsContinuous                         ( bool value );

        bool                    GetIsLooping                            () const;
        void                    SetIsLooping                            ( bool value );

        float                   GetMaxDistanceOmni                      () const;
        void                    SetMaxDistanceOmni                      ( float value );

        int                     GetMaxDuplicates                        () const;
        void                    SetMaxDuplicates                        ( int value );

        eMode                   GetMode                                 () const;
        void                    SetMode                                 ( eMode value );

        uint                    GetOutsideConeAngle                     () const;
        void                    SetOutsideConeAngle                     ( uint value );

        float                   GetPitch                                () const;
        void                    SetPitch                                ( float value );

        class CPlugFileSnd*     GetPlugFile                             () const;
        void                    SetPlugFile                             ( class CPlugFileSnd* value );

        float                   GetPriority                             () const;
        void                    SetPriority                             ( float value );

        float                   GetRefDistance                          () const;
        void                    SetRefDistance                          ( float value );

        Vec3D                   GetRelativeDir                          () const;
        void                    SetRelativeDir                          ( Vec3D value );

        Vec3D                   GetRelativePos                          () const;
        void                    SetRelativePos                          ( Vec3D value );

        float                   GetRolloffFactor                        () const;
        void                    SetRolloffFactor                        ( float value );

        eRoomFxSend             GetRoomFxSend                           () const;
        void                    SetRoomFxSend                           ( eRoomFxSend value );

        float                   GetRoomRolloffFactor                    () const;
        void                    SetRoomRolloffFactor                    ( float value );

        eSoundKind              GetSoundKind                            () const;
        void                    SetSoundKind                            ( eSoundKind value );

        List < nodptr<class CPlugSound> >& GetSubSources                           () const;
        void                    SetSubSources                           ( List < nodptr<class CPlugSound> >& value );

        bool                    GetUseLowPassFilter                     () const;
        void                    SetUseLowPassFilter                     ( bool value );

        class CFuncKeysReal*    GetVolumeFromDistance                   () const;
        void                    SetVolumeFromDistance                   ( class CFuncKeysReal* value );

        float                   GetVolumedB                             () const;
        void                    SetVolumedB                             ( float value );

        void                    FillInSubSources                        ();
        void                    SetDirty                                ();
