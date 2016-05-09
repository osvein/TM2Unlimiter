        enum { CLASSID = 0x030BA000 };

        static CGameControlGridCard* CreateInstance ();

        bool                    GetCacheAtCreation                      () const;
        void                    SetCacheAtCreation                      ( bool value );

        class CGameControlCardManager* GetCardManager                          () const;
        void                    SetCardManager                          ( class CGameControlCardManager* value );

        StringA                 GetDefaultCardName                      () const;
        void                    SetDefaultCardName                      ( StringA value );

        bool                    GetFillWithDefault                      () const;
        void                    SetFillWithDefault                      ( bool value );

        bool                    GetLeftToRight                          () const;
        void                    SetLeftToRight                          ( bool value );

        List < nodptr<class CGameControlCard> >& GetNodCards                             () const;
        void                    SetNodCards                             ( List < nodptr<class CGameControlCard> >& value );

        List < nodptr<class CMwNod> >& GetNodsToDisplay                        () const;
        void                    SetNodsToDisplay                        ( List < nodptr<class CMwNod> >& value );

        bool                    GetPushByColumns                        () const;
        void                    SetPushByColumns                        ( bool value );

        bool                    GetUpToDown                             () const;
        void                    SetUpToDown                             ( bool value );

        bool                    GetUseCustomSelection                   () const;
        void                    SetUseCustomSelection                   ( bool value );

        void                    CleanCaches                             ();
        void                    PrecacheAll                             ();
        void                    UpdateFromDatas                         ();
        void                    UpdateOnlyCards                         ();
