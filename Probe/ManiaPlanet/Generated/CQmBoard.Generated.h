        enum { CLASSID = 0x2C021000 };

        static CQmBoard*        CreateInstance ();

        List < nodptr<class CQmBoardSquare> >& GetSquares                              () const;
        void                    SetSquares                              ( List < nodptr<class CQmBoardSquare> >& value );

