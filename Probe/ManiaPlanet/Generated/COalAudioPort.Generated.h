        enum { CLASSID = 0x10020000 };

        static COalAudioPort*   CreateInstance ();

        StringA                 GetAnalyzerNbSoundsStr                  () const;
        void                    SetAnalyzerNbSoundsStr                  ( StringA value );

        class CPlugAudioEnvironment* GetCurrentEnvironment                   () const;
        void                    SetCurrentEnvironment                   ( class CPlugAudioEnvironment* value );

        StringA                 GetDeviceName                           () const;
        void                    SetDeviceName                           ( StringA value );

        bool                    GetEFXEnabled                           () const;
        void                    SetEFXEnabled                           ( bool value );

        uint                    GetManager_AvailableSources             () const;
        void                    SetManager_AvailableSources             ( uint value );

        uint                    GetManager_MonoSources                  () const;
        void                    SetManager_MonoSources                  ( uint value );

        uint                    GetManager_StereoSources                () const;
        void                    SetManager_StereoSources                ( uint value );

        List < nodptr<class COalDevice> >& GetOalDevices                           () const;
        void                    SetOalDevices                           ( List < nodptr<class COalDevice> >& value );

        StringW                 GetOpenALDllPath                        () const;
        void                    SetOpenALDllPath                        ( StringW value );

        bool                    GetSettingUseEFX                        () const;
        void                    SetSettingUseEFX                        ( bool value );

        bool                    GetSettingUseHRTF                       () const;
        void                    SetSettingUseHRTF                       ( bool value );

        void                    EnumerateDevices                        ();
        void                    EnumerateDevicesNames_WriteToLog        ();
        void                    EnumerateDevices_WriteToLog             ();
