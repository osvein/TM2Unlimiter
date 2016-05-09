        enum { CLASSID = 0x09039000 };

        static CPlugAudioEnvironment* CreateInstance ();

        float                   GetDopplerFactor                        () const;
        void                    SetDopplerFactor                        ( float value );

        float                   GetGain                                 () const;
        void                    SetGain                                 ( float value );

        float                   GetLateReverbGain                       () const;
        void                    SetLateReverbGain                       ( float value );

        float                   GetLowPassGain                          () const;
        void                    SetLowPassGain                          ( float value );

        float                   GetLowPassGainHF                        () const;
        void                    SetLowPassGainHF                        ( float value );

        float                   GetReflectionsGain                      () const;
        void                    SetReflectionsGain                      ( float value );

        float                   GetRoomFxHighGain                       () const;
        void                    SetRoomFxHighGain                       ( float value );

        float                   GetRoomFxHighGainHF                     () const;
        void                    SetRoomFxHighGainHF                     ( float value );

        float                   GetRoomFxLowGain                        () const;
        void                    SetRoomFxLowGain                        ( float value );

        float                   GetRoomFxLowGainHF                      () const;
        void                    SetRoomFxLowGainHF                      ( float value );

        float                   GetRoomFxMidGain                        () const;
        void                    SetRoomFxMidGain                        ( float value );

        float                   GetRoomFxMidGainHF                      () const;
        void                    SetRoomFxMidGainHF                      ( float value );

