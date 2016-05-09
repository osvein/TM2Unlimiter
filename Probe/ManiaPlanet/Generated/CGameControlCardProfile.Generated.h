        enum { CLASSID = 0x030C7000 };

        static CGameControlCardProfile* CreateInstance ();

        class CPlugBitmap*      GetAvatar                               () const;
        void                    SetAvatar                               ( class CPlugBitmap* value );

        StringW                 GetStrLogin                             () const;
        void                    SetStrLogin                             ( StringW value );

        StringW                 GetStrNickName                          () const;
        void                    SetStrNickName                          ( StringW value );

        void                    OnChooseProfile                         ();
        void                    OnConnectProfile                        ();
        void                    OnRemoveProfile                         ();
