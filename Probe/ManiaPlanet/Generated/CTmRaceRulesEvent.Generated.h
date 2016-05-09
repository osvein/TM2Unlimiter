        enum { CLASSID = 0x2404C000 };

        static CTmRaceRulesEvent* CreateInstance ();

        enum eStuntFigure
        {
            STUNTFIGURE_NONE,
            STUNTFIGURE_STRAIGHTJUMP,
            STUNTFIGURE_FLIP,
            STUNTFIGURE_BACKFLIP,
            STUNTFIGURE_SPIN,
            STUNTFIGURE_AERIAL,
            STUNTFIGURE_ALLEYOOP,
            STUNTFIGURE_ROLL,
            STUNTFIGURE_CORKSCREW,
            STUNTFIGURE_SPINOFF,
            STUNTFIGURE_RODEO,
            STUNTFIGURE_FLIPFLAP,
            STUNTFIGURE_TWISTER,
            STUNTFIGURE_FREESTYLE,
            STUNTFIGURE_SPINNINGMIX,
            STUNTFIGURE_FLIPPINGCHAOS,
            STUNTFIGURE_ROLLINGMADNESS,
            STUNTFIGURE_WRECKNONE,
            STUNTFIGURE_WRECKSTRAIGHTJUMP,
            STUNTFIGURE_WRECKFLIP,
            STUNTFIGURE_WRECKBACKFLIP,
            STUNTFIGURE_WRECKSPIN,
            STUNTFIGURE_WRECKAERIAL,
            STUNTFIGURE_WRECKALLEYOOP,
            STUNTFIGURE_WRECKROLL,
            STUNTFIGURE_WRECKCORKSCREW,
            STUNTFIGURE_WRECKSPINOFF,
            STUNTFIGURE_WRECKRODEO,
            STUNTFIGURE_WRECKFLIPFLAP,
            STUNTFIGURE_WRECKTWISTER,
            STUNTFIGURE_WRECKFREESTYLE,
            STUNTFIGURE_WRECKSPINNINGMIX,
            STUNTFIGURE_WRECKFLIPPINGCHAOS,
            STUNTFIGURE_WRECKROLLINGMADNESS,
            STUNTFIGURE_TIMEPENALTY,
            STUNTFIGURE_RESPAWNPENALTY,
            STUNTFIGURE_GRIND,
            STUNTFIGURE_RESET
        };
        static std::wstring     StuntFigureToString                     ( eStuntFigure value );
        static eStuntFigure     ParseStuntFigure                        ( const std::wstring& wstrName );

        enum eType
        {
            TYPE_UNKNOWN,
            TYPE_STARTLINE,
            TYPE_WAYPOINT,
            TYPE_GIVEUP,
            TYPE_RESPAWN,
            TYPE_STUNT
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        uint                    GetAngle                                () const;
        void                    SetAngle                                ( uint value );

        Id                      GetBlockId                              () const;
        void                    SetBlockId                              ( Id value );

        uint                    GetCheckpointInLap                      () const;
        void                    SetCheckpointInLap                      ( uint value );

        uint                    GetCheckpointInRace                     () const;
        void                    SetCheckpointInRace                     ( uint value );

        uint                    GetCombo                                () const;
        void                    SetCombo                                ( uint value );

        float                   GetDamages                              () const;
        void                    SetDamages                              ( float value );

        float                   GetDistance                             () const;
        void                    SetDistance                             ( float value );

        float                   GetFactor                               () const;
        void                    SetFactor                               ( float value );

        bool                    GetIsEndLap                             () const;
        void                    SetIsEndLap                             ( bool value );

        bool                    GetIsEndRace                            () const;
        void                    SetIsEndRace                            ( bool value );

        bool                    GetIsMasterJump                         () const;
        void                    SetIsMasterJump                         ( bool value );

        bool                    GetIsReverse                            () const;
        void                    SetIsReverse                            ( bool value );

        bool                    GetIsStraight                           () const;
        void                    SetIsStraight                           ( bool value );

        uint                    GetLapTime                              () const;
        void                    SetLapTime                              ( uint value );

        uint                    GetNbRespawns                           () const;
        void                    SetNbRespawns                           ( uint value );

        class CTmRaceRulesPlayer* GetPlayer                               () const;
        void                    SetPlayer                               ( class CTmRaceRulesPlayer* value );

        uint                    GetPoints                               () const;
        void                    SetPoints                               ( uint value );

        uint                    GetRaceTime                             () const;
        void                    SetRaceTime                             ( uint value );

        float                   GetSpeed                                () const;
        void                    SetSpeed                                ( float value );

        eStuntFigure            GetStuntFigure                          () const;
        void                    SetStuntFigure                          ( eStuntFigure value );

        int                     GetStuntsScore                          () const;
        void                    SetStuntsScore                          ( int value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

