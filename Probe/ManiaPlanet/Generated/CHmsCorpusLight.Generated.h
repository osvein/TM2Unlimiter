        enum { CLASSID = 0x0600F000 };

        static CHmsCorpusLight* CreateInstance ();

        class CHmsLight*        GetLight                                () const;
        void                    SetLight                                ( class CHmsLight* value );

