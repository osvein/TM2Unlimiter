        enum { CLASSID = 0x09030000 };

        static CPlugFileSnd*    CreateInstance ();

        uint                    GetAvgBytesPerSec                       () const;
        void                    SetAvgBytesPerSec                       ( uint value );

        uint                    GetBitsPerSample                        () const;
        void                    SetBitsPerSample                        ( uint value );

        uint                    GetBlockAlign                           () const;
        void                    SetBlockAlign                           ( uint value );

        uint                    GetChannels                             () const;
        void                    SetChannels                             ( uint value );

        uint                    GetCrc32                                () const;
        void                    SetCrc32                                ( uint value );

        uint                    GetDataSize                             () const;
        void                    SetDataSize                             ( uint value );

        float                   GetDuration                             () const;
        void                    SetDuration                             ( float value );

        uint                    GetFormatTag                            () const;
        void                    SetFormatTag                            ( uint value );

        class CMwNod*           GetKeeper                               () const;
        void                    SetKeeper                               ( class CMwNod* value );

        uint                    GetLoopEnd                              () const;
        void                    SetLoopEnd                              ( uint value );

        uint                    GetLoopStart                            () const;
        void                    SetLoopStart                            ( uint value );

        uint                    GetSamplesPerSec                        () const;
        void                    SetSamplesPerSec                        ( uint value );

        float                   GetVolumeRms                            () const;
        void                    SetVolumeRms                            ( float value );

