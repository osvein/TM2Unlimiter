        enum { CLASSID = 0x090D0000 };

        static CPlugTrafficPathSquares* CreateInstance ();

        Id                      GetId                                   () const;
        void                    SetId                                   ( Id value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        List < uint3 >&         GetSquares                              () const;
        void                    SetSquares                              ( List < uint3 >& value );

