        enum { CLASSID = 0x2C022000 };

        static CQmBoardSquare*  CreateInstance ();

        class CGameActorList*   GetActorList                            () const;
        void                    SetActorList                            ( class CGameActorList* value );

        uint                    GetCoordX                               () const;
        void                    SetCoordX                               ( uint value );

        uint                    GetCoordY                               () const;
        void                    SetCoordY                               ( uint value );

        uint                    GetCoordZ                               () const;
        void                    SetCoordZ                               ( uint value );

        uint                    GetDir                                  () const;
        void                    SetDir                                  ( uint value );

        StringA                 GetIdName                               () const;
        void                    SetIdName                               ( StringA value );

        List < nodptr<class CQmBoardSquare> >& GetNeighbourSquares                     () const;
        void                    SetNeighbourSquares                     ( List < nodptr<class CQmBoardSquare> >& value );

