        enum { CLASSID = 0x0A007000 };

        static CSceneLocation*  CreateInstance ();

        Matrix43                GetLocation                             () const;
        void                    SetLocation                             ( Matrix43 value );

