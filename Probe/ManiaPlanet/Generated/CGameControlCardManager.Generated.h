        enum { CLASSID = 0x0309B000 };

        static CGameControlCardManager* CreateInstance ();

        List < nodptr<class CGameControlDataType> >& GetDataTypes                            () const;
        void                    SetDataTypes                            ( List < nodptr<class CGameControlDataType> >& value );

