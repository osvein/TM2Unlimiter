        enum { CLASSID = 0x11005000 };

        static CScriptXMLNode*  CreateInstance ();

        List < nodptr<class CScriptXMLNode> >& GetChildren                             () const;
        void                    SetChildren                             ( List < nodptr<class CScriptXMLNode> >& value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        StringW                 GetTextContents                         () const;
        void                    SetTextContents                         ( StringW value );

        bool                    GetAttributeBoolean                     ( StringW wstrName, bool bDefaultValue );
        int                     GetAttributeInteger                     ( StringW wstrName, int iDefaultValue );
        float                   GetAttributeReal                        ( StringW wstrName, float fDefaultValue );
        StringW                 GetAttributeText                        ( StringW wstrName, StringW wstrDefaultValue );
        class CScriptXMLNode*   GetFirstChild                           ( StringA strName );
