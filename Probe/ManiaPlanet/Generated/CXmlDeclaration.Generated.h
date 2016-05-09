        enum { CLASSID = 0x14004000 };

        static CXmlDeclaration* CreateInstance ();

        StringA                 GetEncoding                             () const;
        void                    SetEncoding                             ( StringA value );

        StringA                 GetStandalone                           () const;
        void                    SetStandalone                           ( StringA value );

        StringA                 GetVersion                              () const;
        void                    SetVersion                              ( StringA value );

