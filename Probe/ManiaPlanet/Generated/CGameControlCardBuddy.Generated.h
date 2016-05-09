        enum { CLASSID = 0x03152000 };

        static CGameControlCardBuddy* CreateInstance ();

        class CPlugBitmap*      GetAvatarOrLeague                       () const;
        void                    SetAvatarOrLeague                       ( class CPlugBitmap* value );

        StringW                 GetStrLoginOrNickName                   () const;
        void                    SetStrLoginOrNickName                   ( StringW value );

        StringW                 GetStrStatus                            () const;
        void                    SetStrStatus                            ( StringW value );

