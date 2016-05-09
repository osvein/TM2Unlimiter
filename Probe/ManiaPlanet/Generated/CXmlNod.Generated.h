        enum { CLASSID = 0x14001000 };

        static CXmlNod*         CreateInstance ();

        List < nodptr<class CXmlAttribute> >& GetAttributes                           () const;
        void                    SetAttributes                           ( List < nodptr<class CXmlAttribute> >& value );

        List < nodptr<class CMwNod> >& GetUIChilds                             () const;
        void                    SetUIChilds                             ( List < nodptr<class CMwNod> >& value );

