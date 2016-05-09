        enum { CLASSID = 0x0700C000 };

        static CControlLayout*  CreateInstance ();

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

        float                   GetPaddingHorizontal                    () const;
        void                    SetPaddingHorizontal                    ( float value );

        float                   GetPaddingVertical                      () const;
        void                    SetPaddingVertical                      ( float value );

        float                   GetRatioHorizontal                      () const;
        void                    SetRatioHorizontal                      ( float value );

        float                   GetRatioVertical                        () const;
        void                    SetRatioVertical                        ( float value );

