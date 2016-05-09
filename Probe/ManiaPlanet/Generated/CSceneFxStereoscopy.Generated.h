        enum { CLASSID = 0x0A043000 };

        static CSceneFxStereoscopy* CreateInstance ();

        enum eAnaglyphColor
        {
            ANAGLYPHCOLOR_GRAY_FULL,
            ANAGLYPHCOLOR_GRAY_HALF,
            ANAGLYPHCOLOR_OPTIMIZED
        };
        static std::wstring     AnaglyphColorToString                   ( eAnaglyphColor value );
        static eAnaglyphColor   ParseAnaglyphColor                      ( const std::wstring& wstrName );

        enum eOutput
        {
            OUTPUT_LEFT_RIGHT,
            OUTPUT_RIGHT_LEFT,
            OUTPUT_RED_CYAN,
            OUTPUT_TOP_BOTTOM,
            OUTPUT_BOTTOM_TOP,
            OUTPUT_LINE_EVEN_ODD,
            OUTPUT_LINE_ODD_EVEN,
            OUTPUT_LEFT,
            OUTPUT_RIGHT,
            OUTPUT_DBGBLEND
        };
        static std::wstring     OutputToString                          ( eOutput value );
        static eOutput          ParseOutput                             ( const std::wstring& wstrName );

        enum eSplitRatio
        {
            SPLITRATIO_SCREEN,
            SPLITRATIO_SPLIT
        };
        static std::wstring     SplitRatioToString                      ( eSplitRatio value );
        static eSplitRatio      ParseSplitRatio                         ( const std::wstring& wstrName );

        eAnaglyphColor          GetAnaglyphColor                        () const;
        void                    SetAnaglyphColor                        ( eAnaglyphColor value );

        float                   GetAnaglyphColorFactor                  () const;
        void                    SetAnaglyphColorFactor                  ( float value );

        bool                    GetExternalControl                      () const;
        void                    SetExternalControl                      ( bool value );

        float                   GetEyeSeparation                        () const;
        void                    SetEyeSeparation                        ( float value );

        uint                    GetMarginPixelCount                     () const;
        void                    SetMarginPixelCount                     ( uint value );

        eOutput                 GetOutput                               () const;
        void                    SetOutput                               ( eOutput value );

        class CPlugFilePHlsl*   GetPHlsl_AnaglyphFullColor              () const;
        void                    SetPHlsl_AnaglyphFullColor              ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlsl_AnaglyphHalfColor              () const;
        void                    SetPHlsl_AnaglyphHalfColor              ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlsl_AnaglyphLinear                 () const;
        void                    SetPHlsl_AnaglyphLinear                 ( class CPlugFilePHlsl* value );

        float                   GetSeparationGameScale                  () const;
        void                    SetSeparationGameScale                  ( float value );

        float                   GetSeparationUserScale                  () const;
        void                    SetSeparationUserScale                  ( float value );

        eSplitRatio             GetSplitRatio                           () const;
        void                    SetSplitRatio                           ( eSplitRatio value );

