        enum { CLASSID = 0x2D016000 };

        static CSmArenaInterface* CreateInstance ();

        uint                    GetFlipCheck_Duration                   () const;
        void                    SetFlipCheck_Duration                   ( uint value );

        uint                    GetFlipCheck_PitchSumMin                () const;
        void                    SetFlipCheck_PitchSumMin                ( uint value );

        class CSmPlayer*        GetGUIPlayer                            () const;
        void                    SetGUIPlayer                            ( class CSmPlayer* value );

        class CSmArenaInterfaceUI* GetInterfaceUI                          () const;
        void                    SetInterfaceUI                          ( class CSmArenaInterfaceUI* value );

        float                   GetMouse_Accel                          () const;
        void                    SetMouse_Accel                          ( float value );

        bool                    GetMouse_AccelEnabled                   () const;
        void                    SetMouse_AccelEnabled                   ( bool value );

        bool                    GetMouse_Filter                         () const;
        void                    SetMouse_Filter                         ( bool value );

        bool                    GetMouse_InvertY                        () const;
        void                    SetMouse_InvertY                        ( bool value );

        float                   GetMouse_SensitivityCoefY               () const;
        void                    SetMouse_SensitivityCoefY               ( float value );

        float                   GetMouse_SensitivityUser                () const;
        void                    SetMouse_SensitivityUser                ( float value );

        bool                    GetSkippedInputs                        () const;
        void                    SetSkippedInputs                        ( bool value );

        bool                    GetSpeaking                             () const;
        void                    SetSpeaking                             ( bool value );

