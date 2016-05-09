        enum { CLASSID = 0x0901B000 };

        static CPlugSoundMood*  CreateInstance ();

        List < float >&         GetEventPeriods                         () const;
        void                    SetEventPeriods                         ( List < float >& value );

        List < nodptr<class CPlugFileSnd> >& GetEventSounds                          () const;
        void                    SetEventSounds                          ( List < nodptr<class CPlugFileSnd> >& value );

        class CPlugFileSnd*     GetInsideFileSnd                        () const;
        void                    SetInsideFileSnd                        ( class CPlugFileSnd* value );

