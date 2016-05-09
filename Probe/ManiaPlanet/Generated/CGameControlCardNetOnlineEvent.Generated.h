        enum { CLASSID = 0x030DB000 };

        static CGameControlCardNetOnlineEvent* CreateInstance ();

        uint                    GetId                                   () const;
        void                    SetId                                   ( uint value );

        StringW                 GetStrContent                           () const;
        void                    SetStrContent                           ( StringW value );

        StringA                 GetStrEndDate                           () const;
        void                    SetStrEndDate                           ( StringA value );

        StringW                 GetStrSenderName                        () const;
        void                    SetStrSenderName                        ( StringW value );

        StringA                 GetStrStartDate                         () const;
        void                    SetStrStartDate                         ( StringA value );

        StringW                 GetStrTitle                             () const;
        void                    SetStrTitle                             ( StringW value );

        void                    OnUseManiaCode                          ();
