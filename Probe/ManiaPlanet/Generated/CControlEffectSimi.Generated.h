        enum { CLASSID = 0x07010000 };

        static CControlEffectSimi* CreateInstance ();

        enum eColorBlendMode
        {
            COLORBLENDMODE_SET,
            COLORBLENDMODE_MULT
        };
        static std::wstring     ColorBlendModeToString                  ( eColorBlendMode value );
        static eColorBlendMode  ParseColorBlendMode                     ( const std::wstring& wstrName );

        bool                    GetCentered                             () const;
        void                    SetCentered                             ( bool value );

        color                   GetColor                                () const;
        void                    SetColor                                ( color value );

        float                   GetColorBlend                           () const;
        void                    SetColorBlend                           ( float value );

        eColorBlendMode         GetColorBlendMode                       () const;
        void                    SetColorBlendMode                       ( eColorBlendMode value );

        uint                    GetCurrentKey                           () const;
        void                    SetCurrentKey                           ( uint value );

        float                   GetDepth                                () const;
        void                    SetDepth                                ( float value );

        bool                    GetIsContinousEffect                    () const;
        void                    SetIsContinousEffect                    ( bool value );

        bool                    GetIsInterpolated                       () const;
        void                    SetIsInterpolated                       ( bool value );

        uint                    GetKeyCount                             () const;
        void                    SetKeyCount                             ( uint value );

        float                   GetOpacity                              () const;
        void                    SetOpacity                              ( float value );

        Vec2D                   GetPos                                  () const;
        void                    SetPos                                  ( Vec2D value );

        float                   GetRot                                  () const;
        void                    SetRot                                  ( float value );

        Vec2D                   GetScale                                () const;
        void                    SetScale                                ( Vec2D value );

        float                   GetTime                                 () const;
        void                    SetTime                                 ( float value );

        void                    InsertKey                               ();
        void                    RemoveKey                               ();
