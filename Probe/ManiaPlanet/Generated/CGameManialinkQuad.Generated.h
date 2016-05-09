        enum { CLASSID = 0x03109000 };

        static CGameManialinkQuad* CreateInstance ();

        bool                    GetDownloadInProgress                   () const;
        void                    SetDownloadInProgress                   ( bool value );

        StringA                 GetImageUrl                             () const;
        void                    SetImageUrl                             ( StringA value );

        void                    ChangeImageUrl                          ( StringA strfieldName );
