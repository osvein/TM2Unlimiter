        enum { CLASSID = 0x010C1000 };

        static _010C1000*       CreateInstance ();

        StringA                 GetCrc                                  () const;
        void                    SetCrc                                  ( StringA value );

        class CMwNod*           GetCur                                  () const;
        void                    SetCur                                  ( class CMwNod* value );

        List < nodptr<class CMwNod> >& GetNods                                 () const;
        void                    SetNods                                 ( List < nodptr<class CMwNod> >& value );

        void                    Select                                  ( StringA strId );
