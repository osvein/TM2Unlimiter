        enum { CLASSID = 0x03053000 };

        static CGameCtnBlockInfoClip* CreateInstance ();

        enum eClipType
        {
            CLIPTYPE_CLASSICCLIP,
            CLIPTYPE_FREECLIPSIDE,
            CLIPTYPE_FREECLIPTOP,
            CLIPTYPE_FREECLIPBOTTOM
        };
        static std::wstring     ClipTypeToString                        ( eClipType value );
        static eClipType        ParseClipType                           ( const std::wstring& wstrName );

        Id                      GetASymmetricalClipId                   () const;
        void                    SetASymmetricalClipId                   ( Id value );

        bool                    GetCanBeDeletedByFullFreeClip           () const;
        void                    SetCanBeDeletedByFullFreeClip           ( bool value );

        eClipType               GetClipType                             () const;
        void                    SetClipType                             ( eClipType value );

        bool                    GetHasPassingPoint                      () const;
        void                    SetHasPassingPoint                      ( bool value );

        bool                    GetIsExclusiveFreeClip                  () const;
        void                    SetIsExclusiveFreeClip                  ( bool value );

        bool                    GetIsFullFreeClip                       () const;
        void                    SetIsFullFreeClip                       ( bool value );

        float                   GetPassingPointPitch                    () const;
        void                    SetPassingPointPitch                    ( float value );

        float                   GetPassingPointPosX                     () const;
        void                    SetPassingPointPosX                     ( float value );

        float                   GetPassingPointPosY                     () const;
        void                    SetPassingPointPosY                     ( float value );

        float                   GetPassingPointRoll                     () const;
        void                    SetPassingPointRoll                     ( float value );

