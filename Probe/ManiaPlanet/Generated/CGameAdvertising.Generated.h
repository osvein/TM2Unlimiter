        enum { CLASSID = 0x0303D000 };

        static CGameAdvertising* CreateInstance ();

        enum eMode
        {
            MODE_ENVIRONEMENT,
            MODE_VEHICLE
        };
        static std::wstring     ModeToString                            ( eMode value );
        static eMode            ParseMode                               ( const std::wstring& wstrName );

        StringA                 GetDefaultAdvertisingSuffix             () const;
        void                    SetDefaultAdvertisingSuffix             ( StringA value );

        bool                    GetDisableOcclusion                     () const;
        void                    SetDisableOcclusion                     ( bool value );

        bool                    GetEditionDummies                       () const;
        void                    SetEditionDummies                       ( bool value );

        class CPlugFileImg*     GetEditonDummyImage                     () const;
        void                    SetEditonDummyImage                     ( class CPlugFileImg* value );

        List < nodptr<class CMwNod> >& GetFiles                                () const;
        void                    SetFiles                                ( List < nodptr<class CMwNod> >& value );

        StringA                 GetIdentifier                           () const;
        void                    SetIdentifier                           ( StringA value );

        bool                    GetImpressionHelpers_Enable             () const;
        void                    SetImpressionHelpers_Enable             ( bool value );

        class CSceneMobil*      GetImpressionHelpers_Mobil              () const;
        void                    SetImpressionHelpers_Mobil              ( class CSceneMobil* value );

        float                   GetImpression_CosAngle                  () const;
        void                    SetImpression_CosAngle                  ( float value );

        float                   GetImpression_Size                      () const;
        void                    SetImpression_Size                      ( float value );

        uint                    GetImpression_Time                      () const;
        void                    SetImpression_Time                      ( uint value );

        StringA                 GetLogin                                () const;
        void                    SetLogin                                ( StringA value );

        eMode                   GetMode                                 () const;
        void                    SetMode                                 ( eMode value );

        StringA                 GetNation                               () const;
        void                    SetNation                               ( StringA value );

        StringA                 GetPublicKey                            () const;
        void                    SetPublicKey                            ( StringA value );

        StringA                 GetRadial_Config                        () const;
        void                    SetRadial_Config                        ( StringA value );

        StringA                 GetZoneAuthor                           () const;
        void                    SetZoneAuthor                           ( StringA value );

        List < nodptr<class CGameAdvertisingElement> >& GetZoneElements                         () const;
        void                    SetZoneElements                         ( List < nodptr<class CGameAdvertisingElement> >& value );

        StringA                 GetZoneHost                             () const;
        void                    SetZoneHost                             ( StringA value );

        StringA                 GetZoneName                             () const;
        void                    SetZoneName                             ( StringA value );

        void                    Destroy                                 ();
        void                    Flush                                   ();
        void                    ImpressionHelpers_Update                ();
        void                    Init                                    ();
