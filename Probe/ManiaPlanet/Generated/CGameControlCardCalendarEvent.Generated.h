        enum { CLASSID = 0x030C6000 };

        static CGameControlCardCalendarEvent* CreateInstance ();

        StringA                 GetStrDate                              () const;
        void                    SetStrDate                              ( StringA value );

        StringW                 GetStrDescription                       () const;
        void                    SetStrDescription                       ( StringW value );

