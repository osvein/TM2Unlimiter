        enum { CLASSID = 0x030CE000 };

        static CGameRemoteBufferDataInfoSearchs* CreateInstance ();

        uint                    GetLeaguesPerPageCount                  () const;
        void                    SetLeaguesPerPageCount                  ( uint value );

        uint                    GetPlayersPerPageCount                  () const;
        void                    SetPlayersPerPageCount                  ( uint value );

        uint                    GetRefreshLeaguesDuration               () const;
        void                    SetRefreshLeaguesDuration               ( uint value );

        uint                    GetRefreshPlayersDuration               () const;
        void                    SetRefreshPlayersDuration               ( uint value );

        uint                    GetRefreshServersDuration               () const;
        void                    SetRefreshServersDuration               ( uint value );

        uint                    GetRefreshServersFavouritesDuration     () const;
        void                    SetRefreshServersFavouritesDuration     ( uint value );

        uint                    GetRefreshServersSuggestedDuration      () const;
        void                    SetRefreshServersSuggestedDuration      ( uint value );

        uint                    GetServersFavouritesPerPageCount        () const;
        void                    SetServersFavouritesPerPageCount        ( uint value );

        uint                    GetServersPerPageCount                  () const;
        void                    SetServersPerPageCount                  ( uint value );

        uint                    GetServersSuggestedPerPageCount         () const;
        void                    SetServersSuggestedPerPageCount         ( uint value );

