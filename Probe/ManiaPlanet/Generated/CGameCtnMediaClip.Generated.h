        enum { CLASSID = 0x03079000 };

        static CGameCtnMediaClip* CreateInstance ();

        uint                    GetLocalPlayerGhostId                   () const;
        void                    SetLocalPlayerGhostId                   ( uint value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        List < nodptr<class CGameCtnMediaTrack> >& GetTracks                               () const;
        void                    SetTracks                               ( List < nodptr<class CGameCtnMediaTrack> >& value );

