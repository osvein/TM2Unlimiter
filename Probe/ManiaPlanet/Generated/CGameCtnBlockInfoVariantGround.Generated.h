        enum { CLASSID = 0x0315C000 };

        static CGameCtnBlockInfoVariantGround* CreateInstance ();

        enum eAutoTerrainPlaceType
        {
            AUTOTERRAINPLACETYPE_AUTO,
            AUTOTERRAINPLACETYPE_FORCE,
            AUTOTERRAINPLACETYPE_DONOTPLACE,
            AUTOTERRAINPLACETYPE_DONOTDESTROY
        };
        static std::wstring     AutoTerrainPlaceTypeToString            ( eAutoTerrainPlaceType value );
        static eAutoTerrainPlaceType ParseAutoTerrainPlaceType               ( const std::wstring& wstrName );

        int                     GetAutoTerrainHeightOffset              () const;
        void                    SetAutoTerrainHeightOffset              ( int value );

        eAutoTerrainPlaceType   GetAutoTerrainPlaceType                 () const;
        void                    SetAutoTerrainPlaceType                 ( eAutoTerrainPlaceType value );

        bool                    GetAutoTerrainWithFrontiers             () const;
        void                    SetAutoTerrainWithFrontiers             ( bool value );

        List < nodptr<class CGameCtnAutoTerrain> >& GetAutoTerrains                         () const;
        void                    SetAutoTerrains                         ( List < nodptr<class CGameCtnAutoTerrain> >& value );

