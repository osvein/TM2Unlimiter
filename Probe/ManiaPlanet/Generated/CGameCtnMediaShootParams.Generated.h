        enum { CLASSID = 0x03060000 };

        static CGameCtnMediaShootParams* CreateInstance ();

        enum eStereo3d
        {
            STEREO3D_NONE,
            STEREO3D_RED_CYAN,
            STEREO3D_LEFT_RIGHT
        };
        static std::wstring     Stereo3dToString                        ( eStereo3d value );
        static eStereo3d        ParseStereo3d                           ( const std::wstring& wstrName );

        float                   GetDuration                             () const;
        void                    SetDuration                             ( float value );

        bool                    GetHq                                   () const;
        void                    SetHq                                   ( bool value );

        bool                    GetHqAmbientOcc                         () const;
        void                    SetHqAmbientOcc                         ( bool value );

        bool                    GetHqMB                                 () const;
        void                    SetHqMB                                 ( bool value );

        uint                    GetHqSampleCountPerAxe                  () const;
        void                    SetHqSampleCountPerAxe                  ( uint value );

        bool                    GetHqSoftShadows                        () const;
        void                    SetHqSoftShadows                        ( bool value );

        bool                    GetIsAudioStream                        () const;
        void                    SetIsAudioStream                        ( bool value );

        uint                    GetSizeX                                () const;
        void                    SetSizeX                                ( uint value );

        uint                    GetSizeY                                () const;
        void                    SetSizeY                                ( uint value );

        eStereo3d               GetStereo3d                             () const;
        void                    SetStereo3d                             ( eStereo3d value );

        uint                    GetVideoFps                             () const;
        void                    SetVideoFps                             ( uint value );

