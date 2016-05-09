        enum { CLASSID = 0x03156000 };

        static CGameCtnMacroBlockJunction* CreateInstance ();

        enum eDir
        {
            DIR_NORTH,
            DIR_EAST,
            DIR_SOUTH,
            DIR_WEST
        };
        static std::wstring     DirToString                             ( eDir value );
        static eDir             ParseDir                                ( const std::wstring& wstrName );

        bool                    GetCanBeEntry                           () const;
        void                    SetCanBeEntry                           ( bool value );

        bool                    GetCanBeExit                            () const;
        void                    SetCanBeExit                            ( bool value );

        eDir                    GetDir                                  () const;
        void                    SetDir                                  ( eDir value );

        int                     GetOffsetX                              () const;
        void                    SetOffsetX                              ( int value );

        int                     GetOffsetY                              () const;
        void                    SetOffsetY                              ( int value );

        int                     GetOffsetZ                              () const;
        void                    SetOffsetZ                              ( int value );

