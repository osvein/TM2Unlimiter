        enum { CLASSID = 0x08041000 };

        static CMotionTrackMobilPitchin* CreateInstance ();

        enum ePitchinMode
        {
            PITCHINMODE_NORMAL,
            PITCHINMODE_SIMPLE
        };
        static std::wstring     PitchinModeToString                     ( ePitchinMode value );
        static ePitchinMode     ParsePitchinMode                        ( const std::wstring& wstrName );

        float                   GetFlottaison                           () const;
        void                    SetFlottaison                           ( float value );

        float                   GetMaxAngle                             () const;
        void                    SetMaxAngle                             ( float value );

        float                   GetOffsetHauteur                        () const;
        void                    SetOffsetHauteur                        ( float value );

        float                   GetPeriodDelta                          () const;
        void                    SetPeriodDelta                          ( float value );

        ePitchinMode            GetPitchinMode                          () const;
        void                    SetPitchinMode                          ( ePitchinMode value );

        float                   GetRoulis                               () const;
        void                    SetRoulis                               ( float value );

        class CSceneToySea*     GetSea                                  () const;
        void                    SetSea                                  ( class CSceneToySea* value );

        float                   GetTangage                              () const;
        void                    SetTangage                              ( float value );

