        enum { CLASSID = 0x0A009000 };

        static CScenePoc*       CreateInstance ();

        class CHmsPoc*          GetHmsPoc                               () const;
        void                    SetHmsPoc                               ( class CHmsPoc* value );

        bool                    GetIsActive                             () const;
        void                    SetIsActive                             ( bool value );

