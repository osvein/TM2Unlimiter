        enum { CLASSID = 0x06006000 };

        static CHmsPortal*      CreateInstance ();

        bool                    GetCanPassThrough                       () const;
        void                    SetCanPassThrough                       ( bool value );

        bool                    GetCanSeeThrough                        () const;
        void                    SetCanSeeThrough                        ( bool value );

        int                     GetDirectOcclusion                      () const;
        void                    SetDirectOcclusion                      ( int value );

        float                   GetDirectOcclusionRatio                 () const;
        void                    SetDirectOcclusionRatio                 ( float value );

        float                   GetDirectOcclusionSpectralRatio         () const;
        void                    SetDirectOcclusionSpectralRatio         ( float value );

        int                     GetIndirectObstruction                  () const;
        void                    SetIndirectObstruction                  ( int value );

        float                   GetIndirectObstructionSpectralRatio     () const;
        void                    SetIndirectObstructionSpectralRatio     ( float value );

        int                     GetIndirectOcclusion                    () const;
        void                    SetIndirectOcclusion                    ( int value );

        float                   GetIndirectOcclusionRatio               () const;
        void                    SetIndirectOcclusionRatio               ( float value );

        float                   GetIndirectOcclusionSpectralRatio       () const;
        void                    SetIndirectOcclusionSpectralRatio       ( float value );

        bool                    GetIsActive                             () const;
        void                    SetIsActive                             ( bool value );

        bool                    GetIsDirectPathSet                      () const;
        void                    SetIsDirectPathSet                      ( bool value );

        bool                    GetIsPickingPossible                    () const;
        void                    SetIsPickingPossible                    ( bool value );

        bool                    GetIsVisualVisible                      () const;
        void                    SetIsVisualVisible                      ( bool value );

        bool                    GetNeedClipping2D                       () const;
        void                    SetNeedClipping2D                       ( bool value );

        bool                    GetNeedClipping3D                       () const;
        void                    SetNeedClipping3D                       ( bool value );

        float                   GetSeeThroughOpacity                    () const;
        void                    SetSeeThroughOpacity                    ( float value );

        bool                    GetSoundCanPassThrough                  () const;
        void                    SetSoundCanPassThrough                  ( bool value );

