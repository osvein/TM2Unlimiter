        enum { CLASSID = 0x0A07D000 };

        static CSceneFxEdgeBlender* CreateInstance ();

        float                   GetEdgeDepthMax                         () const;
        void                    SetEdgeDepthMax                         ( float value );

        float                   GetEdgeDotMax                           () const;
        void                    SetEdgeDotMax                           ( float value );

        uint                    GetGutterPassCount                      () const;
        void                    SetGutterPassCount                      ( uint value );

        float                   GetGutterWeight                         () const;
        void                    SetGutterWeight                         ( float value );

        class CPlugShaderApply* GetShaderEdgeDetect                     () const;
        void                    SetShaderEdgeDetect                     ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderEdgeGutter                     () const;
        void                    SetShaderEdgeGutter                     ( class CPlugShaderApply* value );

