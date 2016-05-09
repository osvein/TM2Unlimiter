        enum { CLASSID = 0x08045000 };

        static CMotionTeamAction* CreateInstance ();

        List < nodptr<class CMotionTeamActionInfo> >& GetTeamMates                            () const;
        void                    SetTeamMates                            ( List < nodptr<class CMotionTeamActionInfo> >& value );

        void                    AddTeamMate                             ();
