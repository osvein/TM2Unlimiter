        enum { CLASSID = 0x10003000 };

        static CAudioSound*     CreateInstance ();

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

        uint                    GetAudioGroupId                         () const;
        void                    SetAudioGroupId                         ( uint value );

        eBalanceGroup           GetBalanceGroup                         () const;
        void                    SetBalanceGroup                         ( eBalanceGroup value );

        Vec3D                   GetDirection                            () const;
        void                    SetDirection                            ( Vec3D value );

        bool                    GetIsActuallyPlaying                    () const;
        void                    SetIsActuallyPlaying                    ( bool value );

        bool                    GetIsPlaying                            () const;
        void                    SetIsPlaying                            ( bool value );

        float                   GetPan                                  () const;
        void                    SetPan                                  ( float value );

        float                   GetPitch                                () const;
        void                    SetPitch                                ( float value );

        float                   GetPlayCursor                           () const;
        void                    SetPlayCursor                           ( float value );

        float                   GetPlayCursorUi                         () const;
        void                    SetPlayCursorUi                         ( float value );

        class CPlugSound*       GetPlugSound                            () const;
        void                    SetPlugSound                            ( class CPlugSound* value );

        Vec3D                   GetPosition                             () const;
        void                    SetPosition                             ( Vec3D value );

        float                   GetPriorityAdjustement                  () const;
        void                    SetPriorityAdjustement                  ( float value );

        bool                    GetUseLowQuality                        () const;
        void                    SetUseLowQuality                        ( bool value );

        Vec3D                   GetVelocity                             () const;
        void                    SetVelocity                             ( Vec3D value );

        float                   GetVolumedB                             () const;
        void                    SetVolumedB                             ( float value );

        void                    Play                                    ();
        void                    RefreshStaticProperties                 ();
        void                    Stop                                    ();
