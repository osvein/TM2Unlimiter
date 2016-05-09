        enum { CLASSID = 0x03078000 };

        static CGameCtnMediaTrack* CreateInstance ();

        List < nodptr<class CGameCtnMediaBlock> >& GetBlocks                               () const;
        void                    SetBlocks                               ( List < nodptr<class CGameCtnMediaBlock> >& value );

        bool                    GetIsKeepPlaying                        () const;
        void                    SetIsKeepPlaying                        ( bool value );

        bool                    GetIsReadOnly                           () const;
        void                    SetIsReadOnly                           ( bool value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

