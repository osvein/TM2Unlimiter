        enum { CLASSID = 0x09052000 };

        static CPlugSoundGauge* CreateInstance ();

        float                   GetFadeInDuration                       () const;
        void                    SetFadeInDuration                       ( float value );

        float                   GetFadeOutDuration                      () const;
        void                    SetFadeOutDuration                      ( float value );

        float                   GetFastRate                             () const;
        void                    SetFastRate                             ( float value );

        class CPlugFileSnd*     GetFileSndEmptying                      () const;
        void                    SetFileSndEmptying                      ( class CPlugFileSnd* value );

        class CPlugFileSnd*     GetFileSndEmptyingFast                  () const;
        void                    SetFileSndEmptyingFast                  ( class CPlugFileSnd* value );

        class CPlugFileSnd*     GetFileSndFilling                       () const;
        void                    SetFileSndFilling                       ( class CPlugFileSnd* value );

        class CPlugFileSnd*     GetFileSndFillingFast                   () const;
        void                    SetFileSndFillingFast                   ( class CPlugFileSnd* value );

        class CPlugFileSnd*     GetFileSndOnEmpty                       () const;
        void                    SetFileSndOnEmpty                       ( class CPlugFileSnd* value );

        class CPlugFileSnd*     GetFileSndOnFull                        () const;
        void                    SetFileSndOnFull                        ( class CPlugFileSnd* value );

        class CPlugFileSnd*     GetFileSndOnGradEmpty                   () const;
        void                    SetFileSndOnGradEmpty                   ( class CPlugFileSnd* value );

        class CPlugFileSnd*     GetFileSndOnGradFull                    () const;
        void                    SetFileSndOnGradFull                    ( class CPlugFileSnd* value );

        class CPlugFileSnd*     GetFileSndOnStartEmptying               () const;
        void                    SetFileSndOnStartEmptying               ( class CPlugFileSnd* value );

        class CPlugFileSnd*     GetFileSndOnStartFilling                () const;
        void                    SetFileSndOnStartFilling                ( class CPlugFileSnd* value );

        class CPlugFileSnd*     GetFileSndOnStopEmptying                () const;
        void                    SetFileSndOnStopEmptying                ( class CPlugFileSnd* value );

        class CPlugFileSnd*     GetFileSndOnStopFilling                 () const;
        void                    SetFileSndOnStopFilling                 ( class CPlugFileSnd* value );

        class CFuncKeysReal*    GetPitchFromRateEmptying                () const;
        void                    SetPitchFromRateEmptying                ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRateFilling                 () const;
        void                    SetPitchFromRateFilling                 ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRateOnFullOrEmpty           () const;
        void                    SetPitchFromRateOnFullOrEmpty           ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRateOnGradEmpty             () const;
        void                    SetPitchFromRateOnGradEmpty             ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRateOnGradFull              () const;
        void                    SetPitchFromRateOnGradFull              ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRateOnStartEmptying         () const;
        void                    SetPitchFromRateOnStartEmptying         ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRateOnStartFilling          () const;
        void                    SetPitchFromRateOnStartFilling          ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRateOnStopEmptying          () const;
        void                    SetPitchFromRateOnStopEmptying          ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRateOnStopFilling           () const;
        void                    SetPitchFromRateOnStopFilling           ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRatioEmptying               () const;
        void                    SetPitchFromRatioEmptying               ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRatioFilling                () const;
        void                    SetPitchFromRatioFilling                ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRatioOnFullOrEmpty          () const;
        void                    SetPitchFromRatioOnFullOrEmpty          ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRatioOnGradEmpty            () const;
        void                    SetPitchFromRatioOnGradEmpty            ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRatioOnGradFull             () const;
        void                    SetPitchFromRatioOnGradFull             ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRatioOnStartEmptying        () const;
        void                    SetPitchFromRatioOnStartEmptying        ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRatioOnStartFilling         () const;
        void                    SetPitchFromRatioOnStartFilling         ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRatioOnStopEmptying         () const;
        void                    SetPitchFromRatioOnStopEmptying         ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetPitchFromRatioOnStopFilling          () const;
        void                    SetPitchFromRatioOnStopFilling          ( class CFuncKeysReal* value );

        float                   GetRestartLoopOnChange                  () const;
        void                    SetRestartLoopOnChange                  ( float value );

        class CFuncKeysReal*    GetVolumeFromRateEmptying               () const;
        void                    SetVolumeFromRateEmptying               ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRateFilling                () const;
        void                    SetVolumeFromRateFilling                ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRateOnFullOrEmpty          () const;
        void                    SetVolumeFromRateOnFullOrEmpty          ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRateOnGradEmpty            () const;
        void                    SetVolumeFromRateOnGradEmpty            ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRateOnGradFull             () const;
        void                    SetVolumeFromRateOnGradFull             ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRateOnStartEmptying        () const;
        void                    SetVolumeFromRateOnStartEmptying        ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRateOnStartFilling         () const;
        void                    SetVolumeFromRateOnStartFilling         ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRateOnStopEmptying         () const;
        void                    SetVolumeFromRateOnStopEmptying         ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRateOnStopFilling          () const;
        void                    SetVolumeFromRateOnStopFilling          ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRatioEmptying              () const;
        void                    SetVolumeFromRatioEmptying              ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRatioFilling               () const;
        void                    SetVolumeFromRatioFilling               ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRatioOnFullOrEmpty         () const;
        void                    SetVolumeFromRatioOnFullOrEmpty         ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRatioOnGradEmpty           () const;
        void                    SetVolumeFromRatioOnGradEmpty           ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRatioOnGradFull            () const;
        void                    SetVolumeFromRatioOnGradFull            ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRatioOnStartEmptying       () const;
        void                    SetVolumeFromRatioOnStartEmptying       ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRatioOnStartFilling        () const;
        void                    SetVolumeFromRatioOnStartFilling        ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRatioOnStopEmptying        () const;
        void                    SetVolumeFromRatioOnStopEmptying        ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetVolumeFromRatioOnStopFilling         () const;
        void                    SetVolumeFromRatioOnStopFilling         ( class CFuncKeysReal* value );

