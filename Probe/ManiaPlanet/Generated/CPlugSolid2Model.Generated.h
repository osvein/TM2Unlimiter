        enum { CLASSID = 0x090BB000 };

        static CPlugSolid2Model* CreateInstance ();

        uint                    GetDamageZoneCount                      () const;
        void                    SetDamageZoneCount                      ( uint value );

        List < Id >&            GetMaterialIds                          () const;
        void                    SetMaterialIds                          ( List < Id >& value );

        List < nodptr<class CPlugMaterial> >& GetMaterials                            () const;
        void                    SetMaterials                            ( List < nodptr<class CPlugMaterial> >& value );

        class CPlugSkel*        GetSkel                                 () const;
        void                    SetSkel                                 ( class CPlugSkel* value );

        void                    Log                                     ();
        void                    SkelJointsSort                          ();
