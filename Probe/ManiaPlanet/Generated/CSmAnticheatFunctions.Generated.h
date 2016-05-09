        enum { CLASSID = 0x2D01D000 };

        static CSmAnticheatFunctions* CreateInstance ();

        class CSmPlayer*        GetLocalPlayer                          () const;
        void                    SetLocalPlayer                          ( class CSmPlayer* value );

        List < nodptr<class CSmAnticheatEvent> >& GetPendingEvents                        () const;
        void                    SetPendingEvents                        ( List < nodptr<class CSmAnticheatEvent> >& value );

        List < nodptr<class CSmPlayer> >& GetPlayers                              () const;
        void                    SetPlayers                              ( List < nodptr<class CSmPlayer> >& value );

        bool                    CheckOcclusionBetween                   ( Vec3D vecSource, Vec3D vecDestination );
        void                    CreateFakePlayer                        ();
        bool                    GenerateUnreachablePosition             ( Vec3D vecPlayerPosition );
        class CSmPlayer*        GetPlayerUnderCrossHair                 ( class CSmPlayer* pPlayer );
        void                    PopEvent                                ( class CSmAnticheatEvent* pEvent );
        void                    RemoveFakePlayer                        ();
        void                    SetFakePlayerAim                        ( Vec3D vecAimDirection );
        void                    SetFakePlayerPos                        ( Vec3D vecPosition );
