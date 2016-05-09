        enum { CLASSID = 0x030D7000 };

        static CGameControlCardChampionship* CreateInstance ();

        bool                    GetCanSubscribe                         () const;
        void                    SetCanSubscribe                         ( bool value );

        bool                    GetIsPrivate                            () const;
        void                    SetIsPrivate                            ( bool value );

        class CPlugBitmap*      GetLogo                                 () const;
        void                    SetLogo                                 ( class CPlugBitmap* value );

        StringW                 GetStrDescription                       () const;
        void                    SetStrDescription                       ( StringW value );

        StringA                 GetStrLogoUrl                           () const;
        void                    SetStrLogoUrl                           ( StringA value );

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

        StringW                 GetStrPath                              () const;
        void                    SetStrPath                              ( StringW value );

