        enum { CLASSID = 0x0A08B000 };

        static CSceneMgrWeather* CreateInstance ();

        class CPlugFxLightning* GetFxLightning                          () const;
        void                    SetFxLightning                          ( class CPlugFxLightning* value );

