        enum { CLASSID = 0x0601B000 };

        static CHmsViewportStat* CreateInstance ();

        class CMwNod*           GetBitmapRT                             () const;
        void                    SetBitmapRT                             ( class CMwNod* value );

        class CHmsCamera*       GetCamera                               () const;
        void                    SetCamera                               ( class CHmsCamera* value );

        uint                    GetCaptureIndex                         () const;
        void                    SetCaptureIndex                         ( uint value );

        bool                    GetCaptureState                         () const;
        void                    SetCaptureState                         ( bool value );

        float                   GetElapsedMs                            () const;
        void                    SetElapsedMs                            ( float value );

        float                   GetElapsedPercent                       () const;
        void                    SetElapsedPercent                       ( float value );

        float                   GetFlareOcclusionFrameCount             () const;
        void                    SetFlareOcclusionFrameCount             ( float value );

        float                   GetIndexPerVertex                       () const;
        void                    SetIndexPerVertex                       ( float value );

        List < uint >&          GetLoadIdUsagePixels                    () const;
        void                    SetLoadIdUsagePixels                    ( List < uint >& value );

        List < uint >&          GetLoadIdUsageVertexs                   () const;
        void                    SetLoadIdUsageVertexs                   ( List < uint >& value );

        float                   GetMsSpriteExpand                       () const;
        void                    SetMsSpriteExpand                       ( float value );

        float                   GetMsSpriteGetDists                     () const;
        void                    SetMsSpriteGetDists                     ( float value );

        float                   GetMsSpriteIndexCopy                    () const;
        void                    SetMsSpriteIndexCopy                    ( float value );

        float                   GetMsSpriteIndexLock                    () const;
        void                    SetMsSpriteIndexLock                    ( float value );

        float                   GetMsSpriteSortB2F                      () const;
        void                    SetMsSpriteSortB2F                      ( float value );

        float                   GetNotInChildPercent                    () const;
        void                    SetNotInChildPercent                    ( float value );

        class CHmsZoneOverlay*  GetOverlay                              () const;
        void                    SetOverlay                              ( class CHmsZoneOverlay* value );

        float                   GetPerFrameDefFill                      () const;
        void                    SetPerFrameDefFill                      ( float value );

        float                   GetPerFrameDefFillDecal                 () const;
        void                    SetPerFrameDefFillDecal                 ( float value );

        float                   GetPerFrameDefFillLight                 () const;
        void                    SetPerFrameDefFillLight                 ( float value );

        uint                    GetPerFrameNbCamera                     () const;
        void                    SetPerFrameNbCamera                     ( uint value );

        uint                    GetPerFrameNbClear                      () const;
        void                    SetPerFrameNbClear                      ( uint value );

        uint                    GetPerFrameNbCloserLight                () const;
        void                    SetPerFrameNbCloserLight                ( uint value );

        uint                    GetPerFrameNbConstP                     () const;
        void                    SetPerFrameNbConstP                     ( uint value );

        uint                    GetPerFrameNbConstPCall                 () const;
        void                    SetPerFrameNbConstPCall                 ( uint value );

        uint                    GetPerFrameNbConstPCallSkip             () const;
        void                    SetPerFrameNbConstPCallSkip             ( uint value );

        uint                    GetPerFrameNbConstPSkip                 () const;
        void                    SetPerFrameNbConstPSkip                 ( uint value );

        uint                    GetPerFrameNbConstV                     () const;
        void                    SetPerFrameNbConstV                     ( uint value );

        uint                    GetPerFrameNbConstVCall                 () const;
        void                    SetPerFrameNbConstVCall                 ( uint value );

        uint                    GetPerFrameNbConstVCallSkip             () const;
        void                    SetPerFrameNbConstVCallSkip             ( uint value );

        uint                    GetPerFrameNbConstVSkip                 () const;
        void                    SetPerFrameNbConstVSkip                 ( uint value );

        uint                    GetPerFrameNbCorpus                     () const;
        void                    SetPerFrameNbCorpus                     ( uint value );

        uint                    GetPerFrameNbDipAlpha01                 () const;
        void                    SetPerFrameNbDipAlpha01                 ( uint value );

        uint                    GetPerFrameNbDipAlphaBd                 () const;
        void                    SetPerFrameNbDipAlphaBd                 ( uint value );

        uint                    GetPerFrameNbDipCustoms                 () const;
        void                    SetPerFrameNbDipCustoms                 ( uint value );

        uint                    GetPerFrameNbDipDiscardShader           () const;
        void                    SetPerFrameNbDipDiscardShader           ( uint value );

        uint                    GetPerFrameNbDipFilterItem              () const;
        void                    SetPerFrameNbDipFilterItem              ( uint value );

        uint                    GetPerFrameNbDipFilterRtRecur           () const;
        void                    SetPerFrameNbDipFilterRtRecur           ( uint value );

        uint                    GetPerFrameNbDipFilterShader            () const;
        void                    SetPerFrameNbDipFilterShader            ( uint value );

        uint                    GetPerFrameNbDipOpaque                  () const;
        void                    SetPerFrameNbDipOpaque                  ( uint value );

        uint                    GetPerFrameNbDipPacked                  () const;
        void                    SetPerFrameNbDipPacked                  ( uint value );

        uint                    GetPerFrameNbDipZCullBefore             () const;
        void                    SetPerFrameNbDipZCullBefore             ( uint value );

        uint                    GetPerFrameNbDirtyBitmap                () const;
        void                    SetPerFrameNbDirtyBitmap                ( uint value );

        uint                    GetPerFrameNbDirtyGeom                  () const;
        void                    SetPerFrameNbDirtyGeom                  ( uint value );

        uint                    GetPerFrameNbDirtyIndex                 () const;
        void                    SetPerFrameNbDirtyIndex                 ( uint value );

        uint                    GetPerFrameNbDirtyShader                () const;
        void                    SetPerFrameNbDirtyShader                ( uint value );

        uint                    GetPerFrameNbDrawPrim                   () const;
        void                    SetPerFrameNbDrawPrim                   ( uint value );

        uint                    GetPerFrameNbFlareOcclusion             () const;
        void                    SetPerFrameNbFlareOcclusion             ( uint value );

        uint                    GetPerFrameNbIndex                      () const;
        void                    SetPerFrameNbIndex                      ( uint value );

        uint                    GetPerFrameNbOverlay                    () const;
        void                    SetPerFrameNbOverlay                    ( uint value );

        uint                    GetPerFrameNbPickTest                   () const;
        void                    SetPerFrameNbPickTest                   ( uint value );

        uint                    GetPerFrameNbPickVertex                 () const;
        void                    SetPerFrameNbPickVertex                 ( uint value );

        uint                    GetPerFrameNbProjectors                 () const;
        void                    SetPerFrameNbProjectors                 ( uint value );

        uint                    GetPerFrameNbSetRendTgt                 () const;
        void                    SetPerFrameNbSetRendTgt                 ( uint value );

        uint                    GetPerFrameNbShader                     () const;
        void                    SetPerFrameNbShader                     ( uint value );

        uint                    GetPerFrameNbShadowRender               () const;
        void                    SetPerFrameNbShadowRender               ( uint value );

        uint                    GetPerFrameNbSpriteCpu                  () const;
        void                    SetPerFrameNbSpriteCpu                  ( uint value );

        uint                    GetPerFrameNbSpriteGpu                  () const;
        void                    SetPerFrameNbSpriteGpu                  ( uint value );

        uint                    GetPerFrameNbTriangle                   () const;
        void                    SetPerFrameNbTriangle                   ( uint value );

        uint                    GetPerFrameNbUnderlay                   () const;
        void                    SetPerFrameNbUnderlay                   ( uint value );

        uint                    GetPerFrameNbVertex                     () const;
        void                    SetPerFrameNbVertex                     ( uint value );

        uint                    GetPerFrameNbVertexBuffer               () const;
        void                    SetPerFrameNbVertexBuffer               ( uint value );

        uint                    GetPerFrameNbVertexCpu                  () const;
        void                    SetPerFrameNbVertexCpu                  ( uint value );

        uint                    GetPerFrameNbVisual                     () const;
        void                    SetPerFrameNbVisual                     ( uint value );

        float                   GetPerSecondKiloDips                    () const;
        void                    SetPerSecondKiloDips                    ( float value );

        uint                    GetPerSecondNbFace                      () const;
        void                    SetPerSecondNbFace                      ( uint value );

        uint                    GetPerSecondNbVertex                    () const;
        void                    SetPerSecondNbVertex                    ( uint value );

        float                   GetPerSecondUploadMo                    () const;
        void                    SetPerSecondUploadMo                    ( float value );

        uint                    GetPercentNbConstPCallSkip              () const;
        void                    SetPercentNbConstPCallSkip              ( uint value );

        uint                    GetPercentNbConstPSkip                  () const;
        void                    SetPercentNbConstPSkip                  ( uint value );

        uint                    GetPercentNbConstVCallSkip              () const;
        void                    SetPercentNbConstVCallSkip              ( uint value );

        uint                    GetPercentNbConstVSkip                  () const;
        void                    SetPercentNbConstVSkip                  ( uint value );

        uint                    GetPercentNbVertexHard                  () const;
        void                    SetPercentNbVertexHard                  ( uint value );

        uint                    GetPercentNbVertexStatic                () const;
        void                    SetPercentNbVertexStatic                ( uint value );

        bool                    GetPercentToParentElseGlobal            () const;
        void                    SetPercentToParentElseGlobal            ( bool value );

        bool                    GetSortLoadIdByUsage                    () const;
        void                    SetSortLoadIdByUsage                    ( bool value );

        List < nodptr<class CHmsViewportStat> >& GetSubStatistics                        () const;
        void                    SetSubStatistics                        ( List < nodptr<class CHmsViewportStat> >& value );

