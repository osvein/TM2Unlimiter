        enum { CLASSID = 0x0A089000 };

        static CSceneMgrTrafficVis* CreateInstance ();

        bool                    GetDoRenderVehicles                     () const;
        void                    SetDoRenderVehicles                     ( bool value );

        void                    RemoveAll                               ();
