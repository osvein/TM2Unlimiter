        enum { CLASSID = 0x03070000 };

        static CGameControlCameraEffectGroup* CreateInstance ();

        List < nodptr<class CGameControlCameraEffect> >& GetEffects                              () const;
        void                    SetEffects                              ( List < nodptr<class CGameControlCameraEffect> >& value );

