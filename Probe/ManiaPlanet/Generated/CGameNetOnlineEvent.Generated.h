        enum { CLASSID = 0x03020000 };

        static CGameNetOnlineEvent* CreateInstance ();

        StringW                 GetContent                              () const;
        void                    SetContent                              ( StringW value );

        StringA                 GetEndDate                              () const;
        void                    SetEndDate                              ( StringA value );

        uint                    GetId                                   () const;
        void                    SetId                                   ( uint value );

        StringA                 GetManiaCode                            () const;
        void                    SetManiaCode                            ( StringA value );

        StringW                 GetManiaCodeText                        () const;
        void                    SetManiaCodeText                        ( StringW value );

        StringW                 GetPath                                 () const;
        void                    SetPath                                 ( StringW value );

        uint                    GetPriority                             () const;
        void                    SetPriority                             ( uint value );

        StringW                 GetSenderName                           () const;
        void                    SetSenderName                           ( StringW value );

        StringA                 GetStartDate                            () const;
        void                    SetStartDate                            ( StringA value );

        StringW                 GetTitle                                () const;
        void                    SetTitle                                ( StringW value );

