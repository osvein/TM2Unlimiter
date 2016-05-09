        enum { CLASSID = 0x090B0000 };

        static CPlugAnimFile*   CreateInstance ();

        List < nodptr<class CPlugSkel> >& GetSkels                                () const;
        void                    SetSkels                                ( List < nodptr<class CPlugSkel> >& value );

        uint                    GetcBakedClips                          () const;
        void                    SetcBakedClips                          ( uint value );

        uint                    GetcClip                                () const;
        void                    SetcClip                                ( uint value );

        uint                    GetcEditionClips                        () const;
        void                    SetcEditionClips                        ( uint value );

        uint                    GetcJointGroup                          () const;
        void                    SetcJointGroup                          ( uint value );

        void                    Dbg                                     ();
        StringW                 ImportFbx                               ( StringW wstrFbxFileName );
        StringW                 ImportFromXml                           ( StringW wstrXmlFileName );
        void                    Log                                     ();
