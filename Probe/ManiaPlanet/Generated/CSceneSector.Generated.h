        enum { CLASSID = 0x0A004000 };

        static CSceneSector*    CreateInstance ();

        class CScene*           GetScene                                () const;
        void                    SetScene                                ( class CScene* value );

        class CHmsZone*         GetZone                                 () const;
        void                    SetZone                                 ( class CHmsZone* value );

