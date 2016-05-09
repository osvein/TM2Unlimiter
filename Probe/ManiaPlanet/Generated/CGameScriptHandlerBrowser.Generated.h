        enum { CLASSID = 0x03176000 };

        static CGameScriptHandlerBrowser* CreateInstance ();

        enum eBuddyDoResult
        {
            BUDDYDORESULT_OK,
            BUDDYDORESULT_ERROR,
            BUDDYDORESULT_NOTFINISHED
        };
        static std::wstring     BuddyDoResultToString                   ( eBuddyDoResult value );
        static eBuddyDoResult   ParseBuddyDoResult                      ( const std::wstring& wstrName );

        StringW                 GetBuddyDoErrorMessage                  () const;
        void                    SetBuddyDoErrorMessage                  ( StringW value );

        eBuddyDoResult          GetBuddyDoResult                        () const;
        void                    SetBuddyDoResult                        ( eBuddyDoResult value );

        class CGameCtnChallenge* GetCurMap                               () const;
        void                    SetCurMap                               ( class CGameCtnChallenge* value );

        class CGameManiaTitle*  GetLoadedTitle                          () const;
        void                    SetLoadedTitle                          ( class CGameManiaTitle* value );

        class CGamePlayerInfo*  GetLocalUser                            () const;
        void                    SetLocalUser                            ( class CGamePlayerInfo* value );

        void                    BuddyDo                                 ( uint action, StringA strBuddyLogin, bool bIsSilent );
        void                    ShowCurMapCard                          ();
