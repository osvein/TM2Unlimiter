        enum { CLASSID = 0x0316B000 };

        static CGamePlaygroundScriptXmlRpc* CreateInstance ();

        List < nodptr<class CGamePlaygroundScriptXmlRpcEvent> >& GetPendingEvents                        () const;
        void                    SetPendingEvents                        ( List < nodptr<class CGamePlaygroundScriptXmlRpcEvent> >& value );

        void                    SendCallback                            ( StringW wstrParam1, StringW wstrParam2 );
