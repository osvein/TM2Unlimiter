        enum { CLASSID = 0x0A084000 };

        static CSceneFxCellEdge* CreateInstance ();

        float                   GetBlurCenterOverEdges                  () const;
        void                    SetBlurCenterOverEdges                  ( float value );

        uint                    GetBlurTexelCount                       () const;
        void                    SetBlurTexelCount                       ( uint value );

        class CPlugShaderApply* GetShaderEdgeDetect                     () const;
        void                    SetShaderEdgeDetect                     ( class CPlugShaderApply* value );

