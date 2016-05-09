        enum { CLASSID = 0x03168000 };

        static CGamePodiumInfo* CreateInstance ();

        List < nodptr<class CGameCtnMediaClip> >& GetMediaClipFids                        () const;
        void                    SetMediaClipFids                        ( List < nodptr<class CGameCtnMediaClip> >& value );

