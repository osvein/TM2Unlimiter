        enum { CLASSID = 0x09057000 };

        static CPlugIndexBuffer* CreateInstance ();

        enum eIndexType
        {
            INDEXTYPE_16B,
            INDEXTYPE_32B
        };
        static std::wstring     IndexTypeToString                       ( eIndexType value );
        static eIndexType       ParseIndexType                          ( const std::wstring& wstrName );

        uint                    GetIndexCount                           () const;
        void                    SetIndexCount                           ( uint value );

        eIndexType              GetIndexType                            () const;
        void                    SetIndexType                            ( eIndexType value );

        bool                    GetIsStatic                             () const;
        void                    SetIsStatic                             ( bool value );

