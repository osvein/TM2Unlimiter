        enum { CLASSID = 0x01067000 };

        static CMwCmdBlockMain* CreateInstance ();

        StringA                 GetScriptText                           () const;
        void                    SetScriptText                           ( StringA value );

        class CMwNod*           GetThisClass                            () const;
        void                    SetThisClass                            ( class CMwNod* value );

