        enum { CLASSID = 0x0311E000 };

        static CGameOfficialRecorder* CreateInstance ();

        StringA                 GetCustomAdSuffix                       () const;
        void                    SetCustomAdSuffix                       ( StringA value );

        bool                    GetCustomEnabled                        () const;
        void                    SetCustomEnabled                        ( bool value );

        StringW                 GetCustomServerName                     () const;
        void                    SetCustomServerName                     ( StringW value );

