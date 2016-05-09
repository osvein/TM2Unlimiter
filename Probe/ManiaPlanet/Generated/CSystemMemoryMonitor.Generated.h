        enum { CLASSID = 0x0B006000 };

        static CSystemMemoryMonitor* CreateInstance ();

        StringA                 GetAddress                              () const;
        void                    SetAddress                              ( StringA value );

        float                   GetCheckpointPeriod                     () const;
        void                    SetCheckpointPeriod                     ( float value );

        uint                    GetCountToAnalyse                       () const;
        void                    SetCountToAnalyse                       ( uint value );

        class CMwNod*           GetDetachFromFid                        () const;
        void                    SetDetachFromFid                        ( class CMwNod* value );

        uint                    GetFragmentedBufferSizeMb               () const;
        void                    SetFragmentedBufferSizeMb               ( uint value );

        bool                    GetFragmentedTest                       () const;
        void                    SetFragmentedTest                       ( bool value );

        StringA                 GetHighWaterCountStr                    () const;
        void                    SetHighWaterCountStr                    ( StringA value );

        class CMwNod*           GetLogFid                               () const;
        void                    SetLogFid                               ( class CMwNod* value );

        uint                    GetLogSizeToAnalyse                     () const;
        void                    SetLogSizeToAnalyse                     ( uint value );

        float                   GetMemoryCheckPeriod                    () const;
        void                    SetMemoryCheckPeriod                    ( float value );

        uint                    GetNbNewBetweenCheckpoint               () const;
        void                    SetNbNewBetweenCheckpoint               ( uint value );

        StringA                 GetNewBytesBetweenCheckpointStr         () const;
        void                    SetNewBytesBetweenCheckpointStr         ( StringA value );

        class CMwNod*           GetNodFromAddress                       () const;
        void                    SetNodFromAddress                       ( class CMwNod* value );

        StringA                 GetTotalBytesAllocatedStr               () const;
        void                    SetTotalBytesAllocatedStr               ( StringA value );

        bool                    GetWantCheckpoint                       () const;
        void                    SetWantCheckpoint                       ( bool value );

        bool                    GetWantMemoryCheck                      () const;
        void                    SetWantMemoryCheck                      ( bool value );

        void                    AnalyseHistogram                        ();
        void                    LockBigMem                              ();
        void                    LogManagedBufferInfos                   ();
        void                    LogMemoryFragmentation                  ();
        void                    LogMemoryUsage                          ();
        void                    LogNoDbgInfo                            ();
        void                    ShowBlockAction                         ();
        void                    ShowBlocksHistogram                     ();
        void                    ShowBlocksTopHigh                       ();
