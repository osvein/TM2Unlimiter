        enum { CLASSID = 0x10022000 };

        static COalDevice*      CreateInstance ();

        StringA                 GetAlExtensions                         () const;
        void                    SetAlExtensions                         ( StringA value );

        StringA                 GetAlcExtensions                        () const;
        void                    SetAlcExtensions                        ( StringA value );

        bool                    GetCanCapture                           () const;
        void                    SetCanCapture                           ( bool value );

        StringA                 GetDeviceSpecifier                      () const;
        void                    SetDeviceSpecifier                      ( StringA value );

        uint                    GetEFX_MaxAuxSends                      () const;
        void                    SetEFX_MaxAuxSends                      ( uint value );

        uint                    GetEFX_VersionMajor                     () const;
        void                    SetEFX_VersionMajor                     ( uint value );

        uint                    GetEFX_VersionMinor                     () const;
        void                    SetEFX_VersionMinor                     ( uint value );

        bool                    GetIsSync                               () const;
        void                    SetIsSync                               ( bool value );

        uint                    GetMixFrequency                         () const;
        void                    SetMixFrequency                         ( uint value );

        uint                    GetNbMonoSources                        () const;
        void                    SetNbMonoSources                        ( uint value );

        uint                    GetNbStereoSources                      () const;
        void                    SetNbStereoSources                      ( uint value );

        StringA                 GetOtherNames                           () const;
        void                    SetOtherNames                           ( StringA value );

        uint                    GetRefreshPeriod                        () const;
        void                    SetRefreshPeriod                        ( uint value );

        uint                    GetVersionMajor                         () const;
        void                    SetVersionMajor                         ( uint value );

        uint                    GetVersionMinor                         () const;
        void                    SetVersionMinor                         ( uint value );

        uint                    GetXRAMFree                             () const;
        void                    SetXRAMFree                             ( uint value );

        uint                    GetXRAMSize                             () const;
        void                    SetXRAMSize                             ( uint value );

