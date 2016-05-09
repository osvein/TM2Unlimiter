        enum { CLASSID = 0x030AD000 };

        static CGameCtnMediaClipViewer* CreateInstance ();

        enum eViewerStatus
        {
            VIEWERSTATUS_RUNNING,
            VIEWERSTATUS_EXIT,
            VIEWERSTATUS_NEXT
        };
        static std::wstring     ViewerStatusToString                    ( eViewerStatus value );
        static eViewerStatus    ParseViewerStatus                       ( const std::wstring& wstrName );

        class CGameCtnMediaClip* GetClip                                 () const;
        void                    SetClip                                 ( class CGameCtnMediaClip* value );

        class CGameCtnMediaClipGroup* GetClipGroup                            () const;
        void                    SetClipGroup                            ( class CGameCtnMediaClipGroup* value );

        class CGameCtnMediaClip* GetClipGroupClip                        () const;
        void                    SetClipGroupClip                        ( class CGameCtnMediaClip* value );

        uint                    GetClipGroupIndex                       () const;
        void                    SetClipGroupIndex                       ( uint value );

        class CGameCtnMediaClipPlayer* GetClipGroupPlayer                      () const;
        void                    SetClipGroupPlayer                      ( class CGameCtnMediaClipPlayer* value );

        float                   GetClipGroupStartTime                   () const;
        void                    SetClipGroupStartTime                   ( float value );

        class CGameCtnMediaClipPlayer* GetClipPlayer                           () const;
        void                    SetClipPlayer                           ( class CGameCtnMediaClipPlayer* value );

        bool                    GetDoInputs                             () const;
        void                    SetDoInputs                             ( bool value );

        float                   GetPlaySpeed                            () const;
        void                    SetPlaySpeed                            ( float value );

        eViewerStatus           GetViewerStatus                         () const;
        void                    SetViewerStatus                         ( eViewerStatus value );

