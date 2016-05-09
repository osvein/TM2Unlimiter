        enum { CLASSID = 0x0A011000 };

        static CSceneMobil*     CreateInstance ();

        uint                    GetCastedShadows                        () const;
        void                    SetCastedShadows                        ( uint value );

        bool                    GetIsVisible                            () const;
        void                    SetIsVisible                            ( bool value );

        class CHmsItem*         GetItem                                 () const;
        void                    SetItem                                 ( class CHmsItem* value );

        class CMwNod*           GetLinkedObject                         () const;
        void                    SetLinkedObject                         ( class CMwNod* value );

        List < nodptr<class CSceneObjectLink> >& GetLinks                                () const;
        void                    SetLinks                                ( List < nodptr<class CSceneObjectLink> >& value );

        class CSceneMobil*      GetModel                                () const;
        void                    SetModel                                ( class CSceneMobil* value );

        class CMotion*          GetMotionSolid                          () const;
        void                    SetMotionSolid                          ( class CMotion* value );

        bool                    GetPlayerType                           () const;
        void                    SetPlayerType                           ( bool value );

        bool                    GetSelfShadow                           () const;
        void                    SetSelfShadow                           ( bool value );

        class CPlugSolid*       GetSolid                                () const;
        void                    SetSolid                                ( class CPlugSolid* value );

        class CPlugSolid*       GetSolidModel                           () const;
        void                    SetSolidModel                           ( class CPlugSolid* value );

        void                    Hide                                    ();
        void                    LinkForceUpdateAll                      ();
        void                    Show                                    ();
        void                    SolidObjectsRefresh                     ();
