        enum { CLASSID = 0x03170000 };

        static CGamePlayerProfileChunk_ScriptPersistentTraits* CreateInstance ();

        class CScriptTraitsPersistent* GetScriptPersistentTraits               () const;
        void                    SetScriptPersistentTraits               ( class CScriptTraitsPersistent* value );

