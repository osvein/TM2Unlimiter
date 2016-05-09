        enum { CLASSID = 0x0A081000 };

        static CSceneVehicleCarMarksModel* CreateInstance ();

        bool                    GetDisabled                             () const;
        void                    SetDisabled                             ( bool value );

        List < nodptr<class CSceneVehicleCarMarksModelSub> >& GetModels                               () const;
        void                    SetModels                               ( List < nodptr<class CSceneVehicleCarMarksModelSub> >& value );

