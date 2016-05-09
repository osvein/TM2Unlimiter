        enum { CLASSID = 0x01026000 };

        static CMwRefBuffer*    CreateInstance ();

        uint                    GetCount                                () const;
        void                    SetCount                                ( uint value );

        uint                    GetNodClassId                           () const;
        void                    SetNodClassId                           ( uint value );

        List < nodptr<class CMwNod> >& GetNods                                 () const;
        void                    SetNods                                 ( List < nodptr<class CMwNod> >& value );

        bool                    GetUseAddRefRelease                     () const;
        void                    SetUseAddRefRelease                     ( bool value );

