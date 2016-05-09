        enum { CLASSID = 0x0302A000 };

        static CGameRemoteBuffer* CreateInstance ();

        enum eMode
        {
            MODE_NONE,
            MODE_GET,
            MODE_SET,
            MODE_GET_SET
        };
        static std::wstring     ModeToString                            ( eMode value );
        static eMode            ParseMode                               ( const std::wstring& wstrName );

        uint                    GetCacheDuration                        () const;
        void                    SetCacheDuration                        ( uint value );

        List < nodptr<class CMwNod> >& GetDatas                                () const;
        void                    SetDatas                                ( List < nodptr<class CMwNod> >& value );

        StringA                 GetLastServerUpdate                     () const;
        void                    SetLastServerUpdate                     ( StringA value );

        class CMwNod*           GetLocalData                            () const;
        void                    SetLocalData                            ( class CMwNod* value );

        eMode                   GetMode                                 () const;
        void                    SetMode                                 ( eMode value );

        uint                    GetPerPageCount                         () const;
        void                    SetPerPageCount                         ( uint value );

        uint                    GetRegisteredUsersCount                 () const;
        void                    SetRegisteredUsersCount                 ( uint value );

        uint                    GetSpecificCount                        () const;
        void                    SetSpecificCount                        ( uint value );

        uint                    GetTotalCount                           () const;
        void                    SetTotalCount                           ( uint value );

        bool                    GetUseRefs                              () const;
        void                    SetUseRefs                              ( bool value );

