        enum { CLASSID = 0x07036000 };

        static CControlListCard* CreateInstance ();

        bool                    GetAllowMultipleSelection               () const;
        void                    SetAllowMultipleSelection               ( bool value );

        List < nodptr<class CControlBase> >& GetCardsModels                          () const;
        void                    SetCardsModels                          ( List < nodptr<class CControlBase> >& value );

        uint                    GetCurrentPage                          () const;
        void                    SetCurrentPage                          ( uint value );

        List < nodptr<class CControlBase> >& GetListCards                            () const;
        void                    SetListCards                            ( List < nodptr<class CControlBase> >& value );

        uint                    GetNbColumnsPerPage                     () const;
        void                    SetNbColumnsPerPage                     ( uint value );

        uint                    GetNbLinesPerPage                       () const;
        void                    SetNbLinesPerPage                       ( uint value );

        uint                    GetPageCount                            () const;
        void                    SetPageCount                            ( uint value );

        bool                    GetTranspose                            () const;
        void                    SetTranspose                            ( bool value );

