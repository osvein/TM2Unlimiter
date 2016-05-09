        enum { CLASSID = 0x05036000 };

        static CFuncEnvelope*   CreateInstance ();

        enum eModFunc
        {
            MODFUNC_COS,
            MODFUNC_SIN
        };
        static std::wstring     ModFuncToString                         ( eModFunc value );
        static eModFunc         ParseModFunc                            ( const std::wstring& wstrName );

        float                   GetAmplitude                            () const;
        void                    SetAmplitude                            ( float value );

        float                   GetFrequency                            () const;
        void                    SetFrequency                            ( float value );

        float                   GetKeyFramePos1                         () const;
        void                    SetKeyFramePos1                         ( float value );

        float                   GetKeyFramePos2                         () const;
        void                    SetKeyFramePos2                         ( float value );

        float                   GetKeyFrameValue0                       () const;
        void                    SetKeyFrameValue0                       ( float value );

        float                   GetKeyFrameValue1                       () const;
        void                    SetKeyFrameValue1                       ( float value );

        float                   GetKeyFrameValue2                       () const;
        void                    SetKeyFrameValue2                       ( float value );

        float                   GetKeyFrameValue3                       () const;
        void                    SetKeyFrameValue3                       ( float value );

        eModFunc                GetModFunc                              () const;
        void                    SetModFunc                              ( eModFunc value );

