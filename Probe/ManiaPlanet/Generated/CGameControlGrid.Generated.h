        enum { CLASSID = 0x030B9000 };

        static CGameControlGrid* CreateInstance ();

        class CControlBase*     GetBaseLocalData                        () const;
        void                    SetBaseLocalData                        ( class CControlBase* value );

        class CControlButton*   GetButtonFastNextPage                   () const;
        void                    SetButtonFastNextPage                   ( class CControlButton* value );

        class CControlButton*   GetButtonFastPreviousPage               () const;
        void                    SetButtonFastPreviousPage               ( class CControlButton* value );

        class CControlButton*   GetButtonFirstPage                      () const;
        void                    SetButtonFirstPage                      ( class CControlButton* value );

        class CControlButton*   GetButtonLastPage                       () const;
        void                    SetButtonLastPage                       ( class CControlButton* value );

        class CControlButton*   GetButtonNextPage                       () const;
        void                    SetButtonNextPage                       ( class CControlButton* value );

        class CControlButton*   GetButtonPreviousPage                   () const;
        void                    SetButtonPreviousPage                   ( class CControlButton* value );

        uint                    GetCurrentPage                          () const;
        void                    SetCurrentPage                          ( uint value );

        class CControlEntry*    GetEntryPageCounter                     () const;
        void                    SetEntryPageCounter                     ( class CControlEntry* value );

        uint                    GetFastNextPageCount                    () const;
        void                    SetFastNextPageCount                    ( uint value );

        uint                    GetFastPreviousPageCount                () const;
        void                    SetFastPreviousPageCount                ( uint value );

        bool                    GetForceHideArrows                      () const;
        void                    SetForceHideArrows                      ( bool value );

        bool                    GetForceHidePageCounter                 () const;
        void                    SetForceHidePageCounter                 ( bool value );

        uint                    GetForcedPageCount                      () const;
        void                    SetForcedPageCount                      ( uint value );

        bool                    GetHaveLocalData                        () const;
        void                    SetHaveLocalData                        ( bool value );

        bool                    GetHideLocalDataIfNone                  () const;
        void                    SetHideLocalDataIfNone                  ( bool value );

        uint                    GetMaxPerColumn                         () const;
        void                    SetMaxPerColumn                         ( uint value );

        uint                    GetMaxPerRow                            () const;
        void                    SetMaxPerRow                            ( uint value );

        uint                    GetPageCount                            () const;
        void                    SetPageCount                            ( uint value );

        class CGameRemoteBufferPool* GetRemote_Pool                          () const;
        void                    SetRemote_Pool                          ( class CGameRemoteBufferPool* value );

        StringA                 GetRemote_SpecificOverTotalCount        () const;
        void                    SetRemote_SpecificOverTotalCount        ( StringA value );

        uint                    GetRemote_TotalCount                    () const;
        void                    SetRemote_TotalCount                    ( uint value );

        StringA                 GetStrPageCounter                       () const;
        void                    SetStrPageCounter                       ( StringA value );

        void                    OnCurrentPageChanged                    ();
        void                    OnFastNextPage                          ();
        void                    OnFastPreviousPage                      ();
        void                    OnFirstPage                             ();
        void                    OnLastPage                              ();
        void                    OnNextPage                              ();
        void                    OnPreviousPage                          ();
        void                    UpdateLocalData                         ();
        void                    UpdateNavigationButtons                 ();
        void                    UpdatePageCount                         ();
        void                    UpdatePageCounter                       ();
