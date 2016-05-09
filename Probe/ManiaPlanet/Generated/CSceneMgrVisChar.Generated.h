        enum { CLASSID = 0x0A047000 };

        static CSceneMgrVisChar* CreateInstance ();

        class CSceneMgrAnim*    GetCinematicLibrary                     () const;
        void                    SetCinematicLibrary                     ( class CSceneMgrAnim* value );

        uint                    GetLodMaxVert                           () const;
        void                    SetLodMaxVert                           ( uint value );

        class CSceneMgrAnim*    GetMgrAnim                              () const;
        void                    SetMgrAnim                              ( class CSceneMgrAnim* value );

        float                   GetTacticalFxIntens                     () const;
        void                    SetTacticalFxIntens                     ( float value );

        float                   GetTacticalFxMaxY                       () const;
        void                    SetTacticalFxMaxY                       ( float value );

        float                   GetTacticalFxMinDotN                    () const;
        void                    SetTacticalFxMinDotN                    ( float value );

        float                   GetTacticalFxMinY                       () const;
        void                    SetTacticalFxMinY                       ( float value );

        float                   GetTacticalFxRadius                     () const;
        void                    SetTacticalFxRadius                     ( float value );

        float                   GetTacticalFxSize                       () const;
        void                    SetTacticalFxSize                       ( float value );

