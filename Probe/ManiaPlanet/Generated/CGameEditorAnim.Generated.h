        enum { CLASSID = 0x03157000 };

        static CGameEditorAnim* CreateInstance ();

        class CPlugAnimFile*    GetAnimFile                             () const;
        void                    SetAnimFile                             ( class CPlugAnimFile* value );

        class CGameEditorAnimClip* GetClipEditor                           () const;
        void                    SetClipEditor                           ( class CGameEditorAnimClip* value );

        uint                    GetClipIndex                            () const;
        void                    SetClipIndex                            ( uint value );

        List < nodptr<class CControlListItem> >& GetClipList_Items                       () const;
        void                    SetClipList_Items                       ( List < nodptr<class CControlListItem> >& value );

        List < nodptr<class CControlListItem> >& GetSpotList_Items                       () const;
        void                    SetSpotList_Items                       ( List < nodptr<class CControlListItem> >& value );

        List < nodptr<class CControlListItem> >& GetTrackList_Items                      () const;
        void                    SetTrackList_Items                      ( List < nodptr<class CControlListItem> >& value );

        void                    AnimNew                                 ();
        void                    AnimOpen                                ();
        void                    AnimReset                               ();
        void                    AnimSave                                ();
        void                    AnimSaveAs                              ();
        void                    AnimSynchronizeClips_Player             ();
        void                    AnimTest                                ();
        void                    ClipAdd                                 ();
        void                    ClipConvertToEdition                    ();
        void                    ClipExport                              ();
        void                    ClipImport                              ();
        void                    ClipNext                                ();
        void                    ClipPrev                                ();
        void                    ClipPreviewStart                        ();
        void                    ClipRemove                              ();
        void                    ClipSelect                              ( StringA strClipName );
        void                    ConcatClips                             ();
        void                    Exit                                    ();
        void                    FirstPersonCameraAutoCreate             ();
        void                    FirstPersonCameraPreview                ();
        void                    InverseAnim                             ();
        void                    KeyInsert                               ();
        void                    KeyInsertIdentity                       ();
        void                    KeyRemove                               ();
        void                    KeysRemoveAll                           ();
        void                    ModelOpen                               ();
        void                    ModelOpenFromName                       ( StringW wstrModelName );
        void                    PoseCopy                                ();
        void                    PoseListCopy                            ();
        void                    PoseListPasteNoHips                     ();
        void                    PoseListRemove                          ();
        void                    PosePaste                               ();
        void                    Redo                                    ();
        void                    RootMotionAutoCreate                    ();
        void                    RootMotionModeSwitch                    ();
        void                    SnapOnFrame                             ();
        void                    SpotAdd                                 ();
        void                    SpotCopy                                ();
        void                    SpotPhaseClipSynchronize                ();
        void                    SpotPreviewStart                        ();
        void                    SpotRemove                              ();
        void                    SpotSwitchType                          ();
        void                    SwitchFullScreen                        ();
        void                    SwitchLayer                             ();
        void                    TimeFirstFrame                          ();
        void                    TimeFirstFrameAndPlay                   ();
        void                    TimeLastFrame                           ();
        void                    TimeLineShowFull                        ();
        void                    TimeNormalForward                       ();
        void                    TimeSlowForward                         ();
        void                    TimeStop                                ();
        void                    TimeSwitchPlayPause                     ();
        void                    Undo                                    ();
