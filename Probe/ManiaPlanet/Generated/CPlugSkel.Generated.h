        enum { CLASSID = 0x090BA000 };

        static CPlugSkel*       CreateInstance ();

        List < uint >&          GetJointLodMasks                        () const;
        void                    SetJointLodMasks                        ( List < uint >& value );

        List < Id >&            GetJointNames                           () const;
        void                    SetJointNames                           ( List < Id >& value );

        List < uint >&          GetJointParentIndexs                    () const;
        void                    SetJointParentIndexs                    ( List < uint >& value );

        Id                      GetName                                 () const;
        void                    SetName                                 ( Id value );

        List < Matrix43 >&      GetRefGlobalJoints                      () const;
        void                    SetRefGlobalJoints                      ( List < Matrix43 >& value );

        class CPlugSkelSetup*   GetSetup                                () const;
        void                    SetSetup                                ( class CPlugSkelSetup* value );

        uint                    GetcJoint                               () const;
        void                    SetcJoint                               ( uint value );

        void                    BreakDbg                                ();
        void                    CreateSetup3dsMaxBiped                  ();
        void                    JointsSort                              ();
        void                    Log                                     ();
