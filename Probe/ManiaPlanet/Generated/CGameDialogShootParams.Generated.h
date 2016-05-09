        enum { CLASSID = 0x030E7000 };

        static CGameDialogShootParams* CreateInstance ();

        enum eDofSampleCount
        {
            DOFSAMPLECOUNT_1X,
            DOFSAMPLECOUNT_4X,
            DOFSAMPLECOUNT_9X,
            DOFSAMPLECOUNT_25X,
            DOFSAMPLECOUNT_49X,
            DOFSAMPLECOUNT_100X,
            DOFSAMPLECOUNT_196X
        };
        static std::wstring     DofSampleCountToString                  ( eDofSampleCount value );
        static eDofSampleCount  ParseDofSampleCount                     ( const std::wstring& wstrName );

        enum eFileFormat
        {
            FILEFORMAT_BMP,
            FILEFORMAT_PNG,
            FILEFORMAT_JPG,
            FILEFORMAT_EXR
        };
        static std::wstring     FileFormatToString                      ( eFileFormat value );
        static eFileFormat      ParseFileFormat                         ( const std::wstring& wstrName );

        enum eVideoHqSampleCount
        {
            VIDEOHQSAMPLECOUNT_1X,
            VIDEOHQSAMPLECOUNT_4X,
            VIDEOHQSAMPLECOUNT_9X,
            VIDEOHQSAMPLECOUNT_25X,
            VIDEOHQSAMPLECOUNT_49X,
            VIDEOHQSAMPLECOUNT_100X,
            VIDEOHQSAMPLECOUNT_196X
        };
        static std::wstring     VideoHqSampleCountToString              ( eVideoHqSampleCount value );
        static eVideoHqSampleCount ParseVideoHqSampleCount                 ( const std::wstring& wstrName );

        enum eVideoStereo3d
        {
            VIDEOSTEREO3D_NONE,
            VIDEOSTEREO3D_RED_CYAN,
            VIDEOSTEREO3D_LEFT_RIGHT
        };
        static std::wstring     VideoStereo3dToString                   ( eVideoStereo3d value );
        static eVideoStereo3d   ParseVideoStereo3d                      ( const std::wstring& wstrName );

        eDofSampleCount         GetDofSampleCount                       () const;
        void                    SetDofSampleCount                       ( eDofSampleCount value );

        float                   GetDuration                             () const;
        void                    SetDuration                             ( float value );

        StringA                 GetEstimatedTime                        () const;
        void                    SetEstimatedTime                        ( StringA value );

        eFileFormat             GetFileFormat                           () const;
        void                    SetFileFormat                           ( eFileFormat value );

        uint                    GetHeight                               () const;
        void                    SetHeight                               ( uint value );

        bool                    GetIsAudioStream                        () const;
        void                    SetIsAudioStream                        ( bool value );

        bool                    GetSharpen                              () const;
        void                    SetSharpen                              ( bool value );

        uint                    GetTileCountX                           () const;
        void                    SetTileCountX                           ( uint value );

        uint                    GetTileCountY                           () const;
        void                    SetTileCountY                           ( uint value );

        bool                    GetTileSplit                            () const;
        void                    SetTileSplit                            ( bool value );

        uint                    GetVideoFps                             () const;
        void                    SetVideoFps                             ( uint value );

        bool                    GetVideoHq                              () const;
        void                    SetVideoHq                              ( bool value );

        bool                    GetVideoHqCarReflects                   () const;
        void                    SetVideoHqCarReflects                   ( bool value );

        bool                    GetVideoHqDOF                           () const;
        void                    SetVideoHqDOF                           ( bool value );

        bool                    GetVideoHqMB                            () const;
        void                    SetVideoHqMB                            ( bool value );

        eVideoHqSampleCount     GetVideoHqSampleCount                   () const;
        void                    SetVideoHqSampleCount                   ( eVideoHqSampleCount value );

        bool                    GetVideoReflectRayCast                  () const;
        void                    SetVideoReflectRayCast                  ( bool value );

        bool                    GetVideoReflectSubSample                () const;
        void                    SetVideoReflectSubSample                ( bool value );

        eVideoStereo3d          GetVideoStereo3d                        () const;
        void                    SetVideoStereo3d                        ( eVideoStereo3d value );

        uint                    GetWidth                                () const;
        void                    SetWidth                                ( uint value );

        void                    OnCancel                                ();
        void                    OnOk                                    ();
