        enum { CLASSID = 0x03177000 };

        static CGameCtnEditorBody* CreateInstance ();

        uint                    GetGhostSamplingPeriod                  () const;
        void                    SetGhostSamplingPeriod                  ( uint value );

        float                   GetShootmanSpeed                        () const;
        void                    SetShootmanSpeed                        ( float value );

        void                    StartBodiesPreview                      ();
        void                    StopBodiesPreview                       ();
        void                    SwitchMarkersVisible                    ();
        void                    SwitchToGhostPathMode                   ();
        void                    SwitchToPathSpotsMode                   ();
        void                    SwitchToRemoveMode                      ();
        void                    SwitchToStraightPathMode                ();
