        enum { CLASSID = 0x0305D000 };

        static CGameCtnZoneFlat* CreateInstance ();

        class CGameCtnBlockInfoClip* GetBlockInfoClip                        () const;
        void                    SetBlockInfoClip                        ( class CGameCtnBlockInfoClip* value );

        class CGameCtnBlockInfoFlat* GetBlockInfoFlat                        () const;
        void                    SetBlockInfoFlat                        ( class CGameCtnBlockInfoFlat* value );

        class CGameCtnBlockInfoPylon* GetBlockInfoPylon                       () const;
        void                    SetBlockInfoPylon                       ( class CGameCtnBlockInfoPylon* value );

        class CGameCtnBlockInfoRoad* GetBlockInfoRoad                        () const;
        void                    SetBlockInfoRoad                        ( class CGameCtnBlockInfoRoad* value );

        bool                    GetGroundOnly                           () const;
        void                    SetGroundOnly                           ( bool value );

