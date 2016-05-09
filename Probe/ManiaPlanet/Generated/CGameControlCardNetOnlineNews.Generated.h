        enum { CLASSID = 0x030C0000 };

        static CGameControlCardNetOnlineNews* CreateInstance ();

        class CPlugBitmap*      GetIcon                                 () const;
        void                    SetIcon                                 ( class CPlugBitmap* value );

        StringW                 GetStrContent                           () const;
        void                    SetStrContent                           ( StringW value );

        StringA                 GetStrIconUrl                           () const;
        void                    SetStrIconUrl                           ( StringA value );

        StringW                 GetStrPath                              () const;
        void                    SetStrPath                              ( StringW value );

        StringA                 GetStrRepliesTotalCount                 () const;
        void                    SetStrRepliesTotalCount                 ( StringA value );

        StringA                 GetStrStartDate                         () const;
        void                    SetStrStartDate                         ( StringA value );

        StringW                 GetStrTitle                             () const;
        void                    SetStrTitle                             ( StringW value );

        StringA                 GetStrUrlToReply                        () const;
        void                    SetStrUrlToReply                        ( StringA value );

        void                    OnEditReply                             ();
        void                    OnUseManiaCode                          ();
        void                    OnViewReplies                           ();
