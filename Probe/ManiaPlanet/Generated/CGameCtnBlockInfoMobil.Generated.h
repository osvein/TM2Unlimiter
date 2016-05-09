        enum { CLASSID = 0x03122000 };

        static CGameCtnBlockInfoMobil* CreateInstance ();

        class CSceneMobil*      GetMobil                                () const;
        void                    SetMobil                                ( class CSceneMobil* value );

        uint                    GetNoDecalFrequency                     () const;
        void                    SetNoDecalFrequency                     ( uint value );

        List < nodptr<class CGameCtnSolidDecals> >& GetSolidDecals                          () const;
        void                    SetSolidDecals                          ( List < nodptr<class CGameCtnSolidDecals> >& value );

        uint                    GetSolidFrequency                       () const;
        void                    SetSolidFrequency                       ( uint value );

