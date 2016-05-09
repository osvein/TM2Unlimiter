        enum { CLASSID = 0x0903F000 };

        static CPlugTreeGenText* CreateInstance ();

        enum eAlignHorizontal
        {
            ALIGNHORIZONTAL_LEFT,
            ALIGNHORIZONTAL_HCENTER,
            ALIGNHORIZONTAL_RIGHT,
            ALIGNHORIZONTAL_NONE
        };
        static std::wstring     AlignHorizontalToString                 ( eAlignHorizontal value );
        static eAlignHorizontal ParseAlignHorizontal                    ( const std::wstring& wstrName );

        enum eAlignVertical
        {
            ALIGNVERTICAL_TOP,
            ALIGNVERTICAL_VCENTER,
            ALIGNVERTICAL_BOTTOM,
            ALIGNVERTICAL_NONE,
            ALIGNVERTICAL_VCENTER2
        };
        static std::wstring     AlignVerticalToString                   ( eAlignVertical value );
        static eAlignVertical   ParseAlignVertical                      ( const std::wstring& wstrName );

        eAlignHorizontal        GetAlignHorizontal                      () const;
        void                    SetAlignHorizontal                      ( eAlignHorizontal value );

        eAlignVertical          GetAlignVertical                        () const;
        void                    SetAlignVertical                        ( eAlignVertical value );

        float                   GetClipLength                           () const;
        void                    SetClipLength                           ( float value );

        uint                    GetClipLineMax                          () const;
        void                    SetClipLineMax                          ( uint value );

        uint                    GetClipLineMin                          () const;
        void                    SetClipLineMin                          ( uint value );

        color                   GetColor                                () const;
        void                    SetColor                                ( color value );

        class CPlugFont*        GetFont                                 () const;
        void                    SetFont                                 ( class CPlugFont* value );

        float                   GetHeight                               () const;
        void                    SetHeight                               ( float value );

        uint                    GetMaxLine                              () const;
        void                    SetMaxLine                              ( uint value );

        float                   GetRatioXY                              () const;
        void                    SetRatioXY                              ( float value );

        StringW                 GetText                                 () const;
        void                    SetText                                 ( StringW value );

