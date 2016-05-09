        enum { CLASSID = 0x0A048000 };

        static CSceneMgrAnim*   CreateInstance ();

        bool                    GetActive                               () const;
        void                    SetActive                               ( bool value );

        float                   GetEdClingOffsetDist                    () const;
        void                    SetEdClingOffsetDist                    ( float value );

        bool                    GetEdForceNullInputSpeed                () const;
        void                    SetEdForceNullInputSpeed                ( bool value );

        uint                    GetEdVelFilterDelay                     () const;
        void                    SetEdVelFilterDelay                     ( uint value );

        bool                    GetEdVelFromPos                         () const;
        void                    SetEdVelFromPos                         ( bool value );

        float                   GetEdWaterOffset                        () const;
        void                    SetEdWaterOffset                        ( float value );

        bool                    GetFootIKEnabled                        () const;
        void                    SetFootIKEnabled                        ( bool value );

        void                    Debug                                   ();
