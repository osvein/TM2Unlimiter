        enum { CLASSID = 0x03076000 };

        static CGameLadderRanking* CreateInstance ();

        uint                    GetChildsCount                          () const;
        void                    SetChildsCount                          ( uint value );

        bool                    GetIsFolder                             () const;
        void                    SetIsFolder                             ( bool value );

        StringA                 GetLogin                                () const;
        void                    SetLogin                                ( StringA value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        StringW                 GetPath                                 () const;
        void                    SetPath                                 ( StringW value );

        uint                    GetRanking                              () const;
        void                    SetRanking                              ( uint value );

        uint                    GetRanking2                             () const;
        void                    SetRanking2                             ( uint value );

        uint                    GetScore                                () const;
        void                    SetScore                                ( uint value );

        StringA                 GetScoreStr                             () const;
        void                    SetScoreStr                             ( StringA value );

        uint                    GetStars                                () const;
        void                    SetStars                                ( uint value );

