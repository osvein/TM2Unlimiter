        enum { CLASSID = 0x11004000 };

        static CScriptXMLDocument* CreateInstance ();

        List < nodptr<class CScriptXMLNode> >& GetNodes                                () const;
        void                    SetNodes                                ( List < nodptr<class CScriptXMLNode> >& value );

        class CScriptXMLNode*   GetRoot                                 () const;
        void                    SetRoot                                 ( class CScriptXMLNode* value );

        StringA                 GetTextContents                         () const;
        void                    SetTextContents                         ( StringA value );

        class CScriptXMLNode*   GetFirstChild                           ( StringA strName );
