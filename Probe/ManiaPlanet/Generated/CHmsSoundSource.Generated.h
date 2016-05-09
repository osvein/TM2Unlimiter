        enum { CLASSID = 0x0600D000 };

        static CHmsSoundSource* CreateInstance ();

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

        float                   GetAccel                                () const;
        void                    SetAccel                                ( float value );

        float                   GetAlpha                                () const;
        void                    SetAlpha                                ( float value );

        uint                    GetAudioGroupId                         () const;
        void                    SetAudioGroupId                         ( uint value );

        class CMwNod*           GetAudioSoundBacking                    () const;
        void                    SetAudioSoundBacking                    ( class CMwNod* value );

        class CMwNod*           GetAudioSoundMain                       () const;
        void                    SetAudioSoundMain                       ( class CMwNod* value );

        eBalanceGroup           GetBalanceGroup                         () const;
        void                    SetBalanceGroup                         ( eBalanceGroup value );

        uint                    GetImpact                               () const;
        void                    SetImpact                               ( uint value );

        float                   GetPitch                                () const;
        void                    SetPitch                                ( float value );

        bool                    GetPlay                                 () const;
        void                    SetPlay                                 ( bool value );

        class CPlugSound*       GetPlugSound                            () const;
        void                    SetPlugSound                            ( class CPlugSound* value );

        float                   GetPriorityAdjustement                  () const;
        void                    SetPriorityAdjustement                  ( float value );

        float                   GetRpmOrSpeed                           () const;
        void                    SetRpmOrSpeed                           ( float value );

        float                   GetSkidIntensity                        () const;
        void                    SetSkidIntensity                        ( float value );

        bool                    GetStop                                 () const;
        void                    SetStop                                 ( bool value );

        uint                    GetSurfaceId                            () const;
        void                    SetSurfaceId                            ( uint value );

        bool                    GetUseLowQuality                        () const;
        void                    SetUseLowQuality                        ( bool value );

        uint                    GetVariant                              () const;
        void                    SetVariant                              ( uint value );

        float                   GetVolume                               () const;
        void                    SetVolume                               ( float value );

        Vec3D                   GetVolumicSize                          () const;
        void                    SetVolumicSize                          ( Vec3D value );

