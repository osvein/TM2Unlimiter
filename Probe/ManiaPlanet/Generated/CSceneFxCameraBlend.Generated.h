        enum { CLASSID = 0x0A079000 };

        static CSceneFxCameraBlend* CreateInstance ();

        bool                    GetCaptureEnable                        () const;
        void                    SetCaptureEnable                        ( bool value );

        float                   GetCaptureWeight                        () const;
        void                    SetCaptureWeight                        ( float value );

