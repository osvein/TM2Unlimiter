        enum { CLASSID = 0x030C1000 };

        static CGameControlCardLadderRanking* CreateInstance ();

        uint                    GetChildsCount                          () const;
        void                    SetChildsCount                          ( uint value );

        bool                    GetDoSelectionOnChildsCount             () const;
        void                    SetDoSelectionOnChildsCount             ( bool value );

        class CPlugBitmap*      GetLogo                                 () const;
        void                    SetLogo                                 ( class CPlugBitmap* value );

        float                   GetManiaStarsRatio                      () const;
        void                    SetManiaStarsRatio                      ( float value );

        uint                    GetMedals                               () const;
        void                    SetMedals                               ( uint value );

        uint                    GetMedals2                              () const;
        void                    SetMedals2                              ( uint value );

        uint                    GetRanking                              () const;
        void                    SetRanking                              ( uint value );

        uint                    GetRanking2                             () const;
        void                    SetRanking2                             ( uint value );

        uint                    GetScore2                               () const;
        void                    SetScore2                               ( uint value );

        StringA                 GetStrLogin                             () const;
        void                    SetStrLogin                             ( StringA value );

        StringA                 GetStrLogoUrl                           () const;
        void                    SetStrLogoUrl                           ( StringA value );

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

        StringW                 GetStrPath                              () const;
        void                    SetStrPath                              ( StringW value );

        StringW                 GetStrScore                             () const;
        void                    SetStrScore                             ( StringW value );

        StringA                 GetStrSubGroupLogoUrl                   () const;
        void                    SetStrSubGroupLogoUrl                   ( StringA value );

        class CPlugBitmap*      GetSubGroupLogo                         () const;
        void                    SetSubGroupLogo                         ( class CPlugBitmap* value );

        bool                    GetUseTop3Medals                        () const;
        void                    SetUseTop3Medals                        ( bool value );

