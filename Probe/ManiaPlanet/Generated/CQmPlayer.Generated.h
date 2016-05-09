        enum { CLASSID = 0x2C007000 };

        static CQmPlayer*       CreateInstance ();

        uint                    GetBestTurn                             () const;
        void                    SetBestTurn                             ( uint value );

        uint                    GetCurrentManipulableActorIndex         () const;
        void                    SetCurrentManipulableActorIndex         ( uint value );

        uint                    GetLevel                                () const;
        void                    SetLevel                                ( uint value );

        class CGameActorList*   GetManipulableActorList                 () const;
        void                    SetManipulableActorList                 ( class CGameActorList* value );

        uint                    GetStepId                               () const;
        void                    SetStepId                               ( uint value );

        uint                    GetTurn                                 () const;
        void                    SetTurn                                 ( uint value );

