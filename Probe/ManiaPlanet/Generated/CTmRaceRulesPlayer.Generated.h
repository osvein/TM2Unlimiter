        enum { CLASSID = 0x2403D000 };

        static CTmRaceRulesPlayer* CreateInstance ();

        class CTmRaceResultNod* GetCurLap                               () const;
        void                    SetCurLap                               ( class CTmRaceResultNod* value );

        class CTmRaceResultNod* GetCurRace                              () const;
        void                    SetCurRace                              ( class CTmRaceResultNod* value );

        int                     GetCurTriggerIndex                      () const;
        void                    SetCurTriggerIndex                      ( int value );

        int                     GetCurrentNbLaps                        () const;
        void                    SetCurrentNbLaps                        ( int value );

        int                     GetRaceStartTime                        () const;
        void                    SetRaceStartTime                        ( int value );

        class CTmRaceRulesScore* GetScore                                () const;
        void                    SetScore                                ( class CTmRaceRulesScore* value );

