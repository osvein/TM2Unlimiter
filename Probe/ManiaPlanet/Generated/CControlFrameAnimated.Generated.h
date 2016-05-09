        enum { CLASSID = 0x07032000 };

        static CControlFrameAnimated* CreateInstance ();

        bool                    GetDoScrolling                          () const;
        void                    SetDoScrolling                          ( bool value );

        bool                    GetIsClippingContainer                  () const;
        void                    SetIsClippingContainer                  ( bool value );

        float                   GetScrollCycleTime                      () const;
        void                    SetScrollCycleTime                      ( float value );

        float                   GetScrollHorizontalDistance             () const;
        void                    SetScrollHorizontalDistance             ( float value );

        float                   GetScrollHorizontalHistory              () const;
        void                    SetScrollHorizontalHistory              ( float value );

        float                   GetScrollPeriod                         () const;
        void                    SetScrollPeriod                         ( float value );

        float                   GetScrollVerticalDistance               () const;
        void                    SetScrollVerticalDistance               ( float value );

        float                   GetScrollVerticalHistory                () const;
        void                    SetScrollVerticalHistory                ( float value );

        float                   GetScrolledHorizontalDistance           () const;
        void                    SetScrolledHorizontalDistance           ( float value );

        float                   GetScrolledVerticalDistance             () const;
        void                    SetScrolledVerticalDistance             ( float value );

