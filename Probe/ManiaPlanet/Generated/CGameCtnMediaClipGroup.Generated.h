        enum { CLASSID = 0x0307A000 };

        static CGameCtnMediaClipGroup* CreateInstance ();

        List < nodptr<class CGameCtnMediaClip> >& GetClips                                () const;
        void                    SetClips                                ( List < nodptr<class CGameCtnMediaClip> >& value );

