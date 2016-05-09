        enum { CLASSID = 0x0305C000 };

        static CGameCtnZone*    CreateInstance ();

        enum eWaterType
        {
            WATERTYPE_NONE,
            WATERTYPE_DEEP,
            WATERTYPE_SHALLOW
        };
        static std::wstring     WaterTypeToString                       ( eWaterType value );
        static eWaterType       ParseWaterType                          ( const std::wstring& wstrName );

        class CPlugFogVolumeBox* GetFogVolumeBox                         () const;
        void                    SetFogVolumeBox                         ( class CPlugFogVolumeBox* value );

        uint                    GetHeight                               () const;
        void                    SetHeight                               ( uint value );

        bool                    GetIsLargeZone                          () const;
        void                    SetIsLargeZone                          ( bool value );

        Id                      GetSurfaceId                            () const;
        void                    SetSurfaceId                            ( Id value );

        float                   GetVisualTopGroundHeight                () const;
        void                    SetVisualTopGroundHeight                ( float value );

        eWaterType              GetWaterType                            () const;
        void                    SetWaterType                            ( eWaterType value );

        Id                      GetZoneId                               () const;
        void                    SetZoneId                               ( Id value );

