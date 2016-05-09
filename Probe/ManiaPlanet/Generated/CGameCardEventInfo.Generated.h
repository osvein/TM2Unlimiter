        enum { CLASSID = 0x03107000 };

        static CGameCardEventInfo* CreateInstance ();

        StringA                 GetEventId                              () const;
        void                    SetEventId                              ( StringA value );

