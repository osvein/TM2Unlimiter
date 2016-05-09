        enum { CLASSID = 0x11003000 };

        static CScriptXMLManager* CreateInstance ();

        List < nodptr<class CScriptXMLDocument> >& GetDocuments                            () const;
        void                    SetDocuments                            ( List < nodptr<class CScriptXMLDocument> >& value );

        class CScriptXMLDocument* Create                                  ( StringA strContents );
        void                    Destroy                                 ( class CScriptXMLDocument* pDocument );
