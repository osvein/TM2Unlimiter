        enum { CLASSID = 0x08030000 };

        static CMotionPath*     CreateInstance ();

        bool                    GetIsOrientation                        () const;
        void                    SetIsOrientation                        ( bool value );

        class CScenePath*       GetPath                                 () const;
        void                    SetPath                                 ( class CScenePath* value );

        class CSceneObject*     GetTarget                               () const;
        void                    SetTarget                               ( class CSceneObject* value );

