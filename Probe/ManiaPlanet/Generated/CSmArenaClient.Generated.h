        enum { CLASSID = 0x2D004000 };

        static CSmArenaClient*  CreateInstance ();

        class CSmArena*         GetArena                                () const;
        void                    SetArena                                ( class CSmArena* value );

        class CSmArenaInterface* GetArenaInterface                       () const;
        void                    SetArenaInterface                       ( class CSmArenaInterface* value );

        uint                    GetDbgDelaySendInputs                   () const;
        void                    SetDbgDelaySendInputs                   ( uint value );

        float                   GetLocalSmooth                          () const;
        void                    SetLocalSmooth                          ( float value );

        float                   GetLocalSmoothCoef                      () const;
        void                    SetLocalSmoothCoef                      ( float value );

        uint                    GetLocalSmoothCoefConvergenceDelay      () const;
        void                    SetLocalSmoothCoefConvergenceDelay      ( uint value );

        float                   GetLocalSmoothCoefConvergenceSpeed      () const;
        void                    SetLocalSmoothCoefConvergenceSpeed      ( float value );

        float                   GetLocalSmoothConvergenceSpeed          () const;
        void                    SetLocalSmoothConvergenceSpeed          ( float value );

        float                   GetLocalSmoothMax                       () const;
        void                    SetLocalSmoothMax                       ( float value );

        uint                    GetLocalSmoothMaxInputLag               () const;
        void                    SetLocalSmoothMaxInputLag               ( uint value );

        float                   GetLocalSmoothMin                       () const;
        void                    SetLocalSmoothMin                       ( float value );

        uint                    GetLocalSmoothMinInputLag               () const;
        void                    SetLocalSmoothMinInputLag               ( uint value );

        class CGameCtnChallenge* GetMap                                  () const;
        void                    SetMap                                  ( class CGameCtnChallenge* value );

        uint                    GetPredictionSimDurationMax             () const;
        void                    SetPredictionSimDurationMax             ( uint value );

        float                   GetPredictionSmooth                     () const;
        void                    SetPredictionSmooth                     ( float value );

        float                   GetPredictionSmoothConvergenceSpeed     () const;
        void                    SetPredictionSmoothConvergenceSpeed     ( float value );

        class CFuncKeysReal*    GetPredictionSmoothFromExtrapolationDuration() const;
        void                    SetPredictionSmoothFromExtrapolationDuration( class CFuncKeysReal* value );

