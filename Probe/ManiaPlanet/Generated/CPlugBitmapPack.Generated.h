        enum { CLASSID = 0x09044000 };

        static CPlugBitmapPack* CreateInstance ();

        enum eFormat
        {
            FORMAT_BGRA,
            FORMAT_DXT1,
            FORMAT_DXT2,
            FORMAT_DXT3,
            FORMAT_DXT4,
            FORMAT_DXT5,
            FORMAT_RGBA16,
            FORMAT_RGBA16F,
            FORMAT_RGBA32F
        };
        static std::wstring     FormatToString                          ( eFormat value );
        static eFormat          ParseFormat                             ( const std::wstring& wstrName );

        enum eTexAdrU
        {
            TEXADRU_WRAP,
            TEXADRU_MIRROR,
            TEXADRU_CLAMP,
            TEXADRU_BORDERSM3
        };
        static std::wstring     TexAdrUToString                         ( eTexAdrU value );
        static eTexAdrU         ParseTexAdrU                            ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBitmap                               () const;
        void                    SetBitmap                               ( class CPlugBitmap* value );

        eFormat                 GetFormat                               () const;
        void                    SetFormat                               ( eFormat value );

        uint                    GetNbComp                               () const;
        void                    SetNbComp                               ( uint value );

        List < nodptr<class CPlugBitmapPackElem> >& GetPackElems                            () const;
        void                    SetPackElems                            ( List < nodptr<class CPlugBitmapPackElem> >& value );

        uint                    GetSizeX                                () const;
        void                    SetSizeX                                ( uint value );

        uint                    GetSizeY                                () const;
        void                    SetSizeY                                ( uint value );

        eTexAdrU                GetTexAdrU                              () const;
        void                    SetTexAdrU                              ( eTexAdrU value );

        void                    LoadBitmap                              ();
