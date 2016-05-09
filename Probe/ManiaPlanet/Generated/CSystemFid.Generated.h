        enum { CLASSID = 0x0B008000 };

        static CSystemFid*      CreateInstance ();

        bool                    GetCompressed                           () const;
        void                    SetCompressed                           ( bool value );

        class CMwNod*           GetNod                                  () const;
        void                    SetNod                                  ( class CMwNod* value );

        bool                    GetText                                 () const;
        void                    SetText                                 ( bool value );

