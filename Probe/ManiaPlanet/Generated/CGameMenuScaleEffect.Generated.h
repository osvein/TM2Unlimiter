        enum { CLASSID = 0x03032000 };

        static CGameMenuScaleEffect* CreateInstance ();

        bool                    GetAllowDecalage                        () const;
        void                    SetAllowDecalage                        ( bool value );

        bool                    GetAllowHideBeforeEffect                () const;
        void                    SetAllowHideBeforeEffect                ( bool value );

        float                   GetDownBorderScale                      () const;
        void                    SetDownBorderScale                      ( float value );

        bool                    GetIsHalf                               () const;
        void                    SetIsHalf                               ( bool value );

        bool                    GetIsInverse                            () const;
        void                    SetIsInverse                            ( bool value );

        float                   GetLeftBorderScale                      () const;
        void                    SetLeftBorderScale                      ( float value );

        uint                    GetMaxLetterScaling                     () const;
        void                    SetMaxLetterScaling                     ( uint value );

        uint                    GetPeriod                               () const;
        void                    SetPeriod                               ( uint value );

        bool                    GetReCenter                             () const;
        void                    SetReCenter                             ( bool value );

        float                   GetRightBorderScale                     () const;
        void                    SetRightBorderScale                     ( float value );

        float                   GetShift                                () const;
        void                    SetShift                                ( float value );

        float                   GetUpBorderScale                        () const;
        void                    SetUpBorderScale                        ( float value );

