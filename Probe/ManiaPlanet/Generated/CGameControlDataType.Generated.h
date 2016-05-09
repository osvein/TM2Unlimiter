        enum { CLASSID = 0x0309C000 };

        static CGameControlDataType* CreateInstance ();

        class CGameControlCard* GetCardTemplate                         () const;
        void                    SetCardTemplate                         ( class CGameControlCard* value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

