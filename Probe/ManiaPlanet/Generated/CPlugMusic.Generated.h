        enum { CLASSID = 0x0901C000 };

        static CPlugMusic*      CreateInstance ();

        List < nodptr<class CPlugFileSnd> >& GetAdditionalTracks                     () const;
        void                    SetAdditionalTracks                     ( List < nodptr<class CPlugFileSnd> >& value );

