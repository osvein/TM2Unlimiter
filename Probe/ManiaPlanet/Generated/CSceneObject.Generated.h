        enum { CLASSID = 0x0A005000 };

        static CSceneObject*    CreateInstance ();

        class CMwNod*           GetMotion                               () const;
        void                    SetMotion                               ( class CMwNod* value );

        class CScene*           GetScene                                () const;
        void                    SetScene                                ( class CScene* value );

        void                    SetLocation                             ( Matrix43 location, class CSceneSector* pSector );
