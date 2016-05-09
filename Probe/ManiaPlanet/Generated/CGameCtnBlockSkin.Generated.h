        enum { CLASSID = 0x03059000 };

        static CGameCtnBlockSkin* CreateInstance ();

        bool                    GetIsDirty                              () const;
        void                    SetIsDirty                              ( bool value );

        class CSystemPackDesc*  GetPackDesc                             () const;
        void                    SetPackDesc                             ( class CSystemPackDesc* value );

        class CSystemPackDesc*  GetParentPackDesc                       () const;
        void                    SetParentPackDesc                       ( class CSystemPackDesc* value );

        StringW                 GetText                                 () const;
        void                    SetText                                 ( StringW value );

