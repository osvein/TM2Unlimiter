        enum { CLASSID = 0x2406E000 };

        static CTrackManiaControlCheckPointList* CreateInstance ();

        class CControlFrame*    GetCardModel                            () const;
        void                    SetCardModel                            ( class CControlFrame* value );

        class CControlStyle*    GetStyleName                            () const;
        void                    SetStyleName                            ( class CControlStyle* value );

        class CControlStyle*    GetStyleRank                            () const;
        void                    SetStyleRank                            ( class CControlStyle* value );

        class CControlStyle*    GetStyleTime                            () const;
        void                    SetStyleTime                            ( class CControlStyle* value );

