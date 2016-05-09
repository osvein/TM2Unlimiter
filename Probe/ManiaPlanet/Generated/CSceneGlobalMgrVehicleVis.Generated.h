        enum { CLASSID = 0x0A08F000 };

        static CSceneGlobalMgrVehicleVis* CreateInstance ();

        List < nodptr<class CSceneVehicleVisModelHandle> >& GetModelHandles                         () const;
        void                    SetModelHandles                         ( List < nodptr<class CSceneVehicleVisModelHandle> >& value );

