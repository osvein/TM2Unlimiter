        enum { CLASSID = 0x0502E000 };

        static CFuncGroup*      CreateInstance ();

        List < nodptr<class CFuncGroupElem> >& GetElems                                () const;
        void                    SetElems                                ( List < nodptr<class CFuncGroupElem> >& value );

        Id                      GetIdName                               () const;
        void                    SetIdName                               ( Id value );

