        enum { CLASSID = 0x08044000 };

        static CMotionTeamManager* CreateInstance ();

        List < nodptr<class CMotionTeamAction> >& GetActions                              () const;
        void                    SetActions                              ( List < nodptr<class CMotionTeamAction> >& value );

        List < nodptr<class CFuncTreeSubVisualSequence> >& GetAnimList                             () const;
        void                    SetAnimList                             ( List < nodptr<class CFuncTreeSubVisualSequence> >& value );

        class CFuncPathMesh*    GetFuncPathMesh                         () const;
        void                    SetFuncPathMesh                         ( class CFuncPathMesh* value );

        List < nodptr<class CPlugTree> >& GetTeamTrees                            () const;
        void                    SetTeamTrees                            ( List < nodptr<class CPlugTree> >& value );

        uint                    GetWalkAnimIndex                        () const;
        void                    SetWalkAnimIndex                        ( uint value );

        void                    AddAction                               ();
