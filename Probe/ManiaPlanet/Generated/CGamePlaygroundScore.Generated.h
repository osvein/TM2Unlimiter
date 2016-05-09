        enum { CLASSID = 0x03111000 };

        static CGamePlaygroundScore* CreateInstance ();

        bool                    GetIsRegisteredForLadderMatch           () const;
        void                    SetIsRegisteredForLadderMatch           ( bool value );

        int                     GetLadderRankSortValue                  () const;
        void                    SetLadderRankSortValue                  ( int value );

        float                   GetLadderScore                          () const;
        void                    SetLadderScore                          ( float value );

        class CGamePlayerInfo*  GetUser                                 () const;
        void                    SetUser                                 ( class CGamePlayerInfo* value );

