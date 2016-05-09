        enum { CLASSID = 0x05038000 };

        static CFuncColorGradient* CreateInstance ();

        enum eColorSpace
        {
            COLORSPACE_LINEAR,
            COLORSPACE_SRGB
        };
        static std::wstring     ColorSpaceToString                      ( eColorSpace value );
        static eColorSpace      ParseColorSpace                         ( const std::wstring& wstrName );

        eColorSpace             GetColorSpace                           () const;
        void                    SetColorSpace                           ( eColorSpace value );

        float                   GetKeyFramePos1                         () const;
        void                    SetKeyFramePos1                         ( float value );

        float                   GetKeyFramePos2                         () const;
        void                    SetKeyFramePos2                         ( float value );

        color                   GetKeyFrameValue0                       () const;
        void                    SetKeyFrameValue0                       ( color value );

        color                   GetKeyFrameValue1                       () const;
        void                    SetKeyFrameValue1                       ( color value );

        color                   GetKeyFrameValue2                       () const;
        void                    SetKeyFrameValue2                       ( color value );

        color                   GetKeyFrameValue3                       () const;
        void                    SetKeyFrameValue3                       ( color value );

