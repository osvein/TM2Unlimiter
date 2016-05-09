        enum { CLASSID = 0x03037000 };

        static CGameFid*        CreateInstance ();

        class CSystemFidFile*   GetFid                                  () const;
        void                    SetFid                                  ( class CSystemFidFile* value );

        class CSystemFidsFolder* GetFids                                 () const;
        void                    SetFids                                 ( class CSystemFidsFolder* value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        StringW                 GetPath                                 () const;
        void                    SetPath                                 ( StringW value );

        bool                    GetSelected                             () const;
        void                    SetSelected                             ( bool value );

