        enum { CLASSID = 0x09008000 };

        static CPlugBitmapHighLevel* CreateInstance ();

        enum eMode
        {
            MODE_RENDERPLANEREFLECT,
            MODE_RENDERCAMERADEPTH,
            MODE_RENDERWATERREFLECT
        };
        static std::wstring     ModeToString                            ( eMode value );
        static eMode            ParseMode                               ( const std::wstring& wstrName );

        uint                    GetBlurTexelCount                       () const;
        void                    SetBlurTexelCount                       ( uint value );

        float                   GetCameraFarZ                           () const;
        void                    SetCameraFarZ                           ( float value );

        float                   GetCameraFovY                           () const;
        void                    SetCameraFovY                           ( float value );

        float                   GetCameraNearZ                          () const;
        void                    SetCameraNearZ                          ( float value );

        float                   GetCameraRatioXY                        () const;
        void                    SetCameraRatioXY                        ( float value );

        Matrix43                GetCameraToWorld                        () const;
        void                    SetCameraToWorld                        ( Matrix43 value );

        uint                    GetHeight                               () const;
        void                    SetHeight                               ( uint value );

        eMode                   GetMode                                 () const;
        void                    SetMode                                 ( eMode value );

        uint                    GetWidth                                () const;
        void                    SetWidth                                ( uint value );

