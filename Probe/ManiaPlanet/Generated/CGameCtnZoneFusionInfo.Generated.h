        enum { CLASSID = 0x03151000 };

        static CGameCtnZoneFusionInfo* CreateInstance ();

        enum eFusionType
        {
            FUSIONTYPE_INCLUDED,
            FUSIONTYPE_OVERLAP
        };
        static std::wstring     FusionTypeToString                      ( eFusionType value );
        static eFusionType      ParseFusionType                         ( const std::wstring& wstrName );

        Id                      GetCompatibleZoneId                     () const;
        void                    SetCompatibleZoneId                     ( Id value );

        eFusionType             GetFusionType                           () const;
        void                    SetFusionType                           ( eFusionType value );

