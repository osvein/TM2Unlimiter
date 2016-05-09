        enum { CLASSID = 0x2D019000 };

        static CSmArena*        CreateInstance ();

        class CSmArenaPhysics*  GetArenaPhysics                         () const;
        void                    SetArenaPhysics                         ( class CSmArenaPhysics* value );

        List < nodptr<class CSmBase> >& GetBases                                () const;
        void                    SetBases                                ( List < nodptr<class CSmBase> >& value );

        List < nodptr<class CSmBlockPole> >& GetBlockPoles                           () const;
        void                    SetBlockPoles                           ( List < nodptr<class CSmBlockPole> >& value );

        List < nodptr<class CSmBlockSpawn> >& GetBlockSpawns                          () const;
        void                    SetBlockSpawns                          ( List < nodptr<class CSmBlockSpawn> >& value );

        List < nodptr<class CSmBlock> >& GetBlocks                               () const;
        void                    SetBlocks                               ( List < nodptr<class CSmBlock> >& value );

        List < nodptr<class CSmGauge> >& GetGauges                               () const;
        void                    SetGauges                               ( List < nodptr<class CSmGauge> >& value );

        List < nodptr<class CSmItem> >& GetItems                                () const;
        void                    SetItems                                ( List < nodptr<class CSmItem> >& value );

        List < nodptr<class CSmPlayer> >& GetPlayers                              () const;
        void                    SetPlayers                              ( List < nodptr<class CSmPlayer> >& value );

        List < nodptr<class CSmSector> >& GetSectors                              () const;
        void                    SetSectors                              ( List < nodptr<class CSmSector> >& value );

        List < nodptr<class CSmTurret> >& GetTurrets                              () const;
        void                    SetTurrets                              ( List < nodptr<class CSmTurret> >& value );

