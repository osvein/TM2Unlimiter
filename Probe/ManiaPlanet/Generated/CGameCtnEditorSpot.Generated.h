        enum { CLASSID = 0x03175000 };

        static CGameCtnEditorSpot* CreateInstance ();

        List < nodptr<class CControlListItem> >& GetSpotModelList_Items                  () const;
        void                    SetSpotModelList_Items                  ( List < nodptr<class CControlListItem> >& value );

        void                    AnimLibraryExport                       ();
        void                    AnimLibraryImport                       ();
        void                    CenterCameraOnSelection                 ();
        void                    DeleteSelected                          ();
        void                    MoveMode                                ();
        void                    PlaceMode                               ();
        void                    Redo                                    ();
        void                    SpotAdd                                 ();
        void                    SpotModelClearUnused                    ();
        void                    SpotModelDuplicate                      ();
        void                    SpotModelNew                            ();
        void                    SpotModelRename                         ();
        void                    SpotPreview_Start                       ();
        void                    SpotRotate_Start                        ();
        void                    SpotRotate_Stop                         ();
        void                    Undo                                    ();
