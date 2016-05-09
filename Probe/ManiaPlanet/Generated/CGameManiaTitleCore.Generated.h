        enum { CLASSID = 0x03012000 };

        static CGameManiaTitleCore* CreateInstance ();

        class CGameCtnCollection* GetCollectionCommonFid                  () const;
        void                    SetCollectionCommonFid                  ( class CGameCtnCollection* value );

        class CGameManiaPlanet* GetManiaPlanet                          () const;
        void                    SetManiaPlanet                          ( class CGameManiaPlanet* value );

        StringW                 GetModeScriptFolderName                 () const;
        void                    SetModeScriptFolderName                 ( StringW value );

        bool                    GetWithLocalMultiplayer                 () const;
        void                    SetWithLocalMultiplayer                 ( bool value );

