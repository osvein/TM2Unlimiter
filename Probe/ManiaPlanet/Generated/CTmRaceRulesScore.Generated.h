        enum { CLASSID = 0x24026000 };

        static CTmRaceRulesScore* CreateInstance ();

        class CTmRaceResultNod* GetBestLap                              () const;
        void                    SetBestLap                              ( class CTmRaceResultNod* value );

        class CTmRaceResultNod* GetBestRace                             () const;
        void                    SetBestRace                             ( class CTmRaceResultNod* value );

        class CGameCtnGhost*    GetBestRaceGhost                        () const;
        void                    SetBestRaceGhost                        ( class CGameCtnGhost* value );

        int                     GetPoints                               () const;
        void                    SetPoints                               ( int value );

        class CTmRaceResultNod* GetPrevRace                             () const;
        void                    SetPrevRace                             ( class CTmRaceResultNod* value );

        int                     GetPrevRaceDeltaPoints                  () const;
        void                    SetPrevRaceDeltaPoints                  ( int value );

        class CTmRaceResultNod* GetTempResult                           () const;
        void                    SetTempResult                           ( class CTmRaceResultNod* value );

        void                    Clear                                   ();
