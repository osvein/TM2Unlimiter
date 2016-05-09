        enum { CLASSID = 0x03121000 };

        static CGameCtnSolidDecals* CreateInstance ();

        uint                    GetDecalFrequency                       () const;
        void                    SetDecalFrequency                       ( uint value );

        uint                    GetDecalsCount                          () const;
        void                    SetDecalsCount                          ( uint value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        Id                      GetTypeId                               () const;
        void                    SetTypeId                               ( Id value );

        uint                    GetTypeIntensity                        () const;
        void                    SetTypeIntensity                        ( uint value );

