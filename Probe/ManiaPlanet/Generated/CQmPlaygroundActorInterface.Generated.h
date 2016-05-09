        enum { CLASSID = 0x2C017000 };

        static CQmPlaygroundActorInterface* CreateInstance ();

        List < nodptr<class CQmControlCardsStackAnimated> >& GetCardsStacks                          () const;
        void                    SetCardsStacks                          ( List < nodptr<class CQmControlCardsStackAnimated> >& value );

        List < nodptr<class CControlLabel> >& GetCounters                             () const;
        void                    SetCounters                             ( List < nodptr<class CControlLabel> >& value );

        List < nodptr<class CQmControlGaugeAnimated> >& GetGauges                               () const;
        void                    SetGauges                               ( List < nodptr<class CQmControlGaugeAnimated> >& value );

        class CQmPlayer*        GetPlayer                               () const;
        void                    SetPlayer                               ( class CQmPlayer* value );

