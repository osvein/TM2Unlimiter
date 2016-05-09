        enum { CLASSID = 0x0A083000 };

        static CSceneVehicleCarMarksSamples* CreateInstance ();

        uint                    GetByteSize                             () const;
        void                    SetByteSize                             ( uint value );

        bool                    GetDisabled                             () const;
        void                    SetDisabled                             ( bool value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        List < uint >&          GetStops                                () const;
        void                    SetStops                                ( List < uint >& value );

