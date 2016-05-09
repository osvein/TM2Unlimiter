        enum { CLASSID = 0x0A078000 };

        static CSceneFxMotionBlur* CreateInstance ();

        enum eTechnique
        {
            TECHNIQUE_TECH2,
            TECHNIQUE_TECH3
        };
        static std::wstring     TechniqueToString                       ( eTechnique value );
        static eTechnique       ParseTechnique                          ( const std::wstring& wstrName );

        bool                    GetT2_DelayShadows                      () const;
        void                    SetT2_DelayShadows                      ( bool value );

        class CPlugFilePHlsl*   GetT2_Fid_PHlsl_MotionLenCmp            () const;
        void                    SetT2_Fid_PHlsl_MotionLenCmp            ( class CPlugFilePHlsl* value );

        float                   GetT2_MotionMaxLen                      () const;
        void                    SetT2_MotionMaxLen                      ( float value );

        float                   GetT2_MotionScale                       () const;
        void                    SetT2_MotionScale                       ( float value );

        class CPlugBitmap*      GetT3_BitmapDepth                       () const;
        void                    SetT3_BitmapDepth                       ( class CPlugBitmap* value );

        class CPlugFilePHlsl*   GetT3_PHlsl_MotionBlur                  () const;
        void                    SetT3_PHlsl_MotionBlur                  ( class CPlugFilePHlsl* value );

        eTechnique              GetTechnique                            () const;
        void                    SetTechnique                            ( eTechnique value );

