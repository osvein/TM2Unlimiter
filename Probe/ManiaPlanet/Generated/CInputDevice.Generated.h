        enum { CLASSID = 0x13007000 };

        static CInputDevice*    CreateInstance ();

        bool                    GetCanRumble                            () const;
        void                    SetCanRumble                            ( bool value );

        Id                      GetDeviceModelId                        () const;
        void                    SetDeviceModelId                        ( Id value );

        StringW                 GetDeviceModelName                      () const;
        void                    SetDeviceModelName                      ( StringW value );

        bool                    GetInputNotAvailable                    () const;
        void                    SetInputNotAvailable                    ( bool value );

        Id                      GetInstanceId                           () const;
        void                    SetInstanceId                           ( Id value );

        StringW                 GetInstanceName                         () const;
        void                    SetInstanceName                         ( StringW value );

        bool                    GetMustBePolled                         () const;
        void                    SetMustBePolled                         ( bool value );

        uint                    GetObjectCount                          () const;
        void                    SetObjectCount                          ( uint value );

        void                    ReadHardwareCurState                    ();
