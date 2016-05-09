        enum { CLASSID = 0x0702F000 };

        static CControlImage*   CreateInstance ();

        enum eGradientDir
        {
            GRADIENTDIR_LEFTTORIGHT,
            GRADIENTDIR_RIGHTTOLEFT,
            GRADIENTDIR_TOPTOBOTTOM,
            GRADIENTDIR_BOTTOMTOTOP
        };
        static std::wstring     GradientDirToString                     ( eGradientDir value );
        static eGradientDir     ParseGradientDir                        ( const std::wstring& wstrName );

        enum eVisualType
        {
            VISUALTYPE_IMAGE,
            VISUALTYPE_QUAD,
            VISUALTYPE_ICON
        };
        static std::wstring     VisualTypeToString                      ( eVisualType value );
        static eVisualType      ParseVisualType                         ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBitmap                               () const;
        void                    SetBitmap                               ( class CPlugBitmap* value );

        eGradientDir            GetGradientDir                          () const;
        void                    SetGradientDir                          ( eGradientDir value );

        StringA                 GetIconId                               () const;
        void                    SetIconId                               ( StringA value );

        class CFuncEnum*        GetIcons                                () const;
        void                    SetIcons                                ( class CFuncEnum* value );

        bool                    GetIsFill                               () const;
        void                    SetIsFill                               ( bool value );

        bool                    GetIsLines                              () const;
        void                    SetIsLines                              ( bool value );

        float                   GetSizeX                                () const;
        void                    SetSizeX                                ( float value );

        float                   GetSizeY                                () const;
        void                    SetSizeY                                ( float value );

        uint                    GetSubIconIndexOff                      () const;
        void                    SetSubIconIndexOff                      ( uint value );

        uint                    GetSubIconIndexOn                       () const;
        void                    SetSubIconIndexOn                       ( uint value );

        eVisualType             GetVisualType                           () const;
        void                    SetVisualType                           ( eVisualType value );

