        enum { CLASSID = 0x03108000 };

        static CGameCardEvent*  CreateInstance ();

        class CGameCardEventInfo* GetCardEventInfo                        () const;
        void                    SetCardEventInfo                        ( class CGameCardEventInfo* value );

