        enum { CLASSID = 0x0A107000 };

        static CBoatTeamMateActionDesc* CreateInstance ();

        Id                      GetAnimAfterId                          () const;
        void                    SetAnimAfterId                          ( Id value );

        bool                    GetAnimAfterIsLooping                   () const;
        void                    SetAnimAfterIsLooping                   ( bool value );

        bool                    GetAnimAfterIsTimeStop                  () const;
        void                    SetAnimAfterIsTimeStop                  ( bool value );

        Id                      GetAnimBeforeId                         () const;
        void                    SetAnimBeforeId                         ( Id value );

        Id                      GetDestLocationId                       () const;
        void                    SetDestLocationId                       ( Id value );

        Id                      GetTeamMateId                           () const;
        void                    SetTeamMateId                           ( Id value );

        float                   GetWalkSpeed                            () const;
        void                    SetWalkSpeed                            ( float value );

