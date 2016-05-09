        enum { CLASSID = 0x07035000 };

        static CControlScriptConsole* CreateInstance ();

        StringW                 GetHistoryText                          () const;
        void                    SetHistoryText                          ( StringW value );

