        enum { CLASSID = 0x030C4000 };

        static CGameCalendarEvent* CreateInstance ();

        class CMwNod*           GetData                                 () const;
        void                    SetData                                 ( class CMwNod* value );

        StringA                 GetDate                                 () const;
        void                    SetDate                                 ( StringA value );

        StringW                 GetDescription                          () const;
        void                    SetDescription                          ( StringW value );

