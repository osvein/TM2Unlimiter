        enum { CLASSID = 0x07030000 };

        static CControlPager*   CreateInstance ();

        class CControlButton*   GetButtonFastNextPage                   () const;
        void                    SetButtonFastNextPage                   ( class CControlButton* value );

        class CControlButton*   GetButtonFastPrevPage                   () const;
        void                    SetButtonFastPrevPage                   ( class CControlButton* value );

        class CControlButton*   GetButtonFirstPage                      () const;
        void                    SetButtonFirstPage                      ( class CControlButton* value );

        class CControlButton*   GetButtonLastPage                       () const;
        void                    SetButtonLastPage                       ( class CControlButton* value );

        class CControlButton*   GetButtonNextPage                       () const;
        void                    SetButtonNextPage                       ( class CControlButton* value );

        class CControlButton*   GetButtonPrevPage                       () const;
        void                    SetButtonPrevPage                       ( class CControlButton* value );

        uint                    GetFastPrevNextIncrement                () const;
        void                    SetFastPrevNextIncrement                ( uint value );

        class CControlLabel*    GetLabelPageCounter                     () const;
        void                    SetLabelPageCounter                     ( class CControlLabel* value );

        class CControlQuad*     GetQuadPageCounter                      () const;
        void                    SetQuadPageCounter                      ( class CControlQuad* value );

        StringA                 GetStackPageCountText                   () const;
        void                    SetStackPageCountText                   ( StringA value );

        bool                    GetUseCounter                           () const;
        void                    SetUseCounter                           ( bool value );

        bool                    GetUseCounterQuadBackground             () const;
        void                    SetUseCounterQuadBackground             ( bool value );

        bool                    GetUseFastPrevNext                      () const;
        void                    SetUseFastPrevNext                      ( bool value );

        bool                    GetUseFirstLast                         () const;
        void                    SetUseFirstLast                         ( bool value );

        bool                    GetUseUpDown                            () const;
        void                    SetUseUpDown                            ( bool value );

        void                    OnFastNextPage                          ();
        void                    OnFastPrevPage                          ();
        void                    OnFirstPage                             ();
        void                    OnLastPage                              ();
        void                    OnNextPage                              ();
        void                    OnPrevPage                              ();
