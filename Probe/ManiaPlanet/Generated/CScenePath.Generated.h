        enum { CLASSID = 0x0A008000 };

        static CScenePath*      CreateInstance ();

        Array < class CFuncKeysPath* >& GetPaths                                () const;
        void                    SetPaths                                ( Array < class CFuncKeysPath* >& value );

        Array < class CSceneSector* >& GetSectors                              () const;
        void                    SetSectors                              ( Array < class CSceneSector* >& value );

