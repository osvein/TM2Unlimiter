        enum { CLASSID = 0x090DF000 };

        static CPlugTrafficGraph* CreateInstance ();

        List < nodptr<class CPlugTrafficFlowDescriptor> >& GetFlowDescriptors                      () const;
        void                    SetFlowDescriptors                      ( List < nodptr<class CPlugTrafficFlowDescriptor> >& value );

        List < nodptr<class CPlugSpline3D> >& GetSplines                              () const;
        void                    SetSplines                              ( List < nodptr<class CPlugSpline3D> >& value );

