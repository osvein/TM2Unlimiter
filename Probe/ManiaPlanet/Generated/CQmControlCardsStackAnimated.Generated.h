        enum { CLASSID = 0x2C012000 };

        static CQmControlCardsStackAnimated* CreateInstance ();

        class CControlFrame*    GetCardsCache                           () const;
        void                    SetCardsCache                           ( class CControlFrame* value );

        class CGameControlFrameInventory* GetCardsContainer                       () const;
        void                    SetCardsContainer                       ( class CGameControlFrameInventory* value );

        uint                    GetCardsCount                           () const;
        void                    SetCardsCount                           ( uint value );

        uint                    GetFocusedCard                          () const;
        void                    SetFocusedCard                          ( uint value );

        StringA                 GetIdName                               () const;
        void                    SetIdName                               ( StringA value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        uint                    GetSelectedCard                         () const;
        void                    SetSelectedCard                         ( uint value );

        uint                    GetZoomedCard                           () const;
        void                    SetZoomedCard                           ( uint value );

