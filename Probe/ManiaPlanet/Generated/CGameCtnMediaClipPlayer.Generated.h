        enum { CLASSID = 0x03086000 };

        static CGameCtnMediaClipPlayer* CreateInstance ();

        class CGameCtnMediaClip* GetClip                                 () const;
        void                    SetClip                                 ( class CGameCtnMediaClip* value );

        List < nodptr<class CGameCtnMediaTrack> >& GetEdMediaTracks                        () const;
        void                    SetEdMediaTracks                        ( List < nodptr<class CGameCtnMediaTrack> >& value );

        uint                    GetLocalPlayerGameMobilId               () const;
        void                    SetLocalPlayerGameMobilId               ( uint value );

        class CGameCtnGhost*    GetLocalPlayerGhost                     () const;
        void                    SetLocalPlayerGhost                     ( class CGameCtnGhost* value );

        class CScene2d*         GetScene2d                              () const;
        void                    SetScene2d                              ( class CScene2d* value );

