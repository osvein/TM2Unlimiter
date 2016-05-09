        enum { CLASSID = 0x03119000 };

        static CGameCtnEditChallengePrecalcParticles* CreateInstance ();

        bool                    GetShowHelpers                          () const;
        void                    SetShowHelpers                          ( bool value );

        bool                    GetStepByStep                           () const;
        void                    SetStepByStep                           ( bool value );

        void                    GenerateDecalsFromCurState              ();
        void                    GenerateDecalsFromScratch               ();
        void                    ResetSimulation                         ();
        void                    Simulate                                ();
