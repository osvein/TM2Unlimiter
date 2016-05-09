        enum { CLASSID = 0x05043000 };

        static CFuncCurves2Real* CreateInstance ();

        List < nodptr<class CFuncCurvesReal> >& GetCurves2                              () const;
        void                    SetCurves2                              ( List < nodptr<class CFuncCurvesReal> >& value );

        Id                      GetId                                   () const;
        void                    SetId                                   ( Id value );

        List < float >&         GetXs                                   () const;
        void                    SetXs                                   ( List < float >& value );

