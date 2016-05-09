        enum { CLASSID = 0x0A106000 };

        static CBoatTeamActionDesc* CreateInstance ();

        Id                      GetTeamActionId                         () const;
        void                    SetTeamActionId                         ( Id value );

        List < nodptr<class CBoatTeamMateActionDesc> >& GetTeamMateActionDescs                  () const;
        void                    SetTeamMateActionDescs                  ( List < nodptr<class CBoatTeamMateActionDesc> >& value );

