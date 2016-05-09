        enum { CLASSID = 0x0A03A000 };

        static CSceneFxNod*     CreateInstance ();

        class CSceneFx*         GetFx                                   () const;
        void                    SetFx                                   ( class CSceneFx* value );

        bool                    GetIsActive                             () const;
        void                    SetIsActive                             ( bool value );

        class CSceneFxNod*      GetNodInput                             () const;
        void                    SetNodInput                             ( class CSceneFxNod* value );

