        enum { CLASSID = 0x05042000 };

        static CFuncCurvesReal* CreateInstance ();

        List < nodptr<class CFuncKeysReal> >& GetCurves                               () const;
        void                    SetCurves                               ( List < nodptr<class CFuncKeysReal> >& value );

        Id                      GetId                                   () const;
        void                    SetId                                   ( Id value );

        List < float >&         GetXs                                   () const;
        void                    SetXs                                   ( List < float >& value );

