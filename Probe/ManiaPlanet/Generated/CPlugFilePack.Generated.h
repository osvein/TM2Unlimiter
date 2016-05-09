        enum { CLASSID = 0x09019000 };

        static CPlugFilePack*   CreateInstance ();

        StringA                 GetAuthorLogin                          () const;
        void                    SetAuthorLogin                          ( StringA value );

        StringW                 GetAuthorNickName                       () const;
        void                    SetAuthorNickName                       ( StringW value );

        StringW                 GetAuthorZonePath                       () const;
        void                    SetAuthorZonePath                       ( StringW value );

        StringW                 GetComment                              () const;
        void                    SetComment                              ( StringW value );

        StringA                 GetCreationBuildInfo                    () const;
        void                    SetCreationBuildInfo                    ( StringA value );

        StringA                 GetInfoManialinkUrl                     () const;
        void                    SetInfoManialinkUrl                     ( StringA value );

        StringA                 GetTitleId                              () const;
        void                    SetTitleId                              ( StringA value );

        StringA                 GetUsageSubDir                          () const;
        void                    SetUsageSubDir                          ( StringA value );

        uint                    GetVersion                              () const;
        void                    SetVersion                              ( uint value );

        StringA                 GetXmlHeader                            () const;
        void                    SetXmlHeader                            ( StringA value );

