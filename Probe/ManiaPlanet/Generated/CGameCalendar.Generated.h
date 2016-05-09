        enum { CLASSID = 0x030C3000 };

        static CGameCalendar*   CreateInstance ();

        List < nodptr<class CGameCalendarEvent> >& GetEvents                               () const;
        void                    SetEvents                               ( List < nodptr<class CGameCalendarEvent> >& value );

