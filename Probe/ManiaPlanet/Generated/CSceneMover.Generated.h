        enum { CLASSID = 0x0A085000 };

        static CSceneMover*     CreateInstance ();

        class CSceneController* GetController                           () const;
        void                    SetController                           ( class CSceneController* value );

        class CSceneObject*     GetObject                               () const;
        void                    SetObject                               ( class CSceneObject* value );

