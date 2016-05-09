        enum { CLASSID = 0x0701B000 };

        static CControlQuad*    CreateInstance ();

        enum eGradientDir
        {
            GRADIENTDIR_LEFTTORIGHT,
            GRADIENTDIR_RIGHTTOLEFT,
            GRADIENTDIR_TOPTOBOTTOM,
            GRADIENTDIR_BOTTOMTOTOP
        };
        static std::wstring     GradientDirToString                     ( eGradientDir value );
        static eGradientDir     ParseGradientDir                        ( const std::wstring& wstrName );

        eGradientDir            GetGradientDir                          () const;
        void                    SetGradientDir                          ( eGradientDir value );

        Id                      GetIconId                               () const;
        void                    SetIconId                               ( Id value );

        color                   GetIconVertexColors                     () const;
        void                    SetIconVertexColors                     ( color value );

        bool                    GetIsFill                               () const;
        void                    SetIsFill                               ( bool value );

        bool                    GetIsLines                              () const;
        void                    SetIsLines                              ( bool value );

