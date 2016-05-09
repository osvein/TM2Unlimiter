        enum { CLASSID = 0x01029000 };

        static CMwStatsValue*   CreateInstance ();

        bool                    GetAutoBuckets                          () const;
        void                    SetAutoBuckets                          ( bool value );

        Array < float >&        GetBucketsRanges                        () const;
        void                    SetBucketsRanges                        ( Array < float >& value );

        Array < float >&        GetBucketsRatio                         () const;
        void                    SetBucketsRatio                         ( Array < float >& value );

        bool                    GetComputeBuckets                       () const;
        void                    SetComputeBuckets                       ( bool value );

        bool                    GetComputeDeviatedMean                  () const;
        void                    SetComputeDeviatedMean                  ( bool value );

        bool                    GetComputeMedian                        () const;
        void                    SetComputeMedian                        ( bool value );

        float                   GetDeviatedMean                         () const;
        void                    SetDeviatedMean                         ( float value );

        float                   GetLatest                               () const;
        void                    SetLatest                               ( float value );

        float                   GetMax                                  () const;
        void                    SetMax                                  ( float value );

        float                   GetMean                                 () const;
        void                    SetMean                                 ( float value );

        float                   GetMeanInv                              () const;
        void                    SetMeanInv                              ( float value );

        float                   GetMedian                               () const;
        void                    SetMedian                               ( float value );

        float                   GetMedianStdDev                         () const;
        void                    SetMedianStdDev                         ( float value );

        float                   GetMin                                  () const;
        void                    SetMin                                  ( float value );

        uint                    GetNbMaxSamples                         () const;
        void                    SetNbMaxSamples                         ( uint value );

        uint                    GetNbSamples                            () const;
        void                    SetNbSamples                            ( uint value );

        uint                    GetReductionRatio                       () const;
        void                    SetReductionRatio                       ( uint value );

        float                   GetStdDev                               () const;
        void                    SetStdDev                               ( float value );

        float                   GetStdDevRatio                          () const;
        void                    SetStdDevRatio                          ( float value );

        StringA                 GetSummary                              () const;
        void                    SetSummary                              ( StringA value );

        void                    Log                                     ();
