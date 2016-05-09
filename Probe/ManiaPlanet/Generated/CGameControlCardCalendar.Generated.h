        enum { CLASSID = 0x030C5000 };

        static CGameControlCardCalendar* CreateInstance ();

        StringW                 GetStrCurrentDate                       () const;
        void                    SetStrCurrentDate                       ( StringW value );

        StringW                 GetStrToday                             () const;
        void                    SetStrToday                             ( StringW value );

        StringA                 GetTodayTextModifier                    () const;
        void                    SetTodayTextModifier                    ( StringA value );

