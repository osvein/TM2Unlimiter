        enum { CLASSID = 0x0310D000 };

        static CGameCtnMacroBlockInfo* CreateInstance ();

        bool                    GetConnected                            () const;
        void                    SetConnected                            ( bool value );

        class CGameCtnBlockInfo* GetGeneratedBlockInfo                   () const;
        void                    SetGeneratedBlockInfo                   ( class CGameCtnBlockInfo* value );

        class CGameCtnBlockInfo* GetGeneratedBlockModel                  () const;
        void                    SetGeneratedBlockModel                  ( class CGameCtnBlockInfo* value );

        bool                    GetHasCheckpoint                        () const;
        void                    SetHasCheckpoint                        ( bool value );

        bool                    GetHasFinish                            () const;
        void                    SetHasFinish                            ( bool value );

        bool                    GetHasStart                             () const;
        void                    SetHasStart                             ( bool value );

        bool                    GetInitialized                          () const;
        void                    SetInitialized                          ( bool value );

        bool                    GetIsGround                             () const;
        void                    SetIsGround                             ( bool value );

        bool                    GetIsPureTerrain                        () const;
        void                    SetIsPureTerrain                        ( bool value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        class CScriptTraitsMetadata* GetScriptMetadata                       () const;
        void                    SetScriptMetadata                       ( class CScriptTraitsMetadata* value );

        List < nodptr<class CPlugSpline3D> >& GetTrafficPathSplines                   () const;
        void                    SetTrafficPathSplines                   ( List < nodptr<class CPlugSpline3D> >& value );

