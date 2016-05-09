        enum { CLASSID = 0x0A006000 };

        static CSceneGate*      CreateInstance ();

        class CHmsPortal*       GetFirstPortal                          () const;
        void                    SetFirstPortal                          ( class CHmsPortal* value );

        class CHmsPortal*       GetSecondPortal                         () const;
        void                    SetSecondPortal                         ( class CHmsPortal* value );

