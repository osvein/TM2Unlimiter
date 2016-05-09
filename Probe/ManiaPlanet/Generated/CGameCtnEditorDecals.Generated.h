        enum { CLASSID = 0x0311A000 };

        static CGameCtnEditorDecals* CreateInstance ();

        enum eEditionMode
        {
            EDITIONMODE_PLACE,
            EDITIONMODE_MODIFY,
            EDITIONMODE_DELETE,
            EDITIONMODE_PICKSIMPLE,
            EDITIONMODE_PICKMULTI
        };
        static std::wstring     EditionModeToString                     ( eEditionMode value );
        static eEditionMode     ParseEditionMode                        ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBitmap                               () const;
        void                    SetBitmap                               ( class CPlugBitmap* value );

        uint                    GetBitmapDecalSet                       () const;
        void                    SetBitmapDecalSet                       ( uint value );

        class CGameCtnDecalsBrush* GetBrushModify                          () const;
        void                    SetBrushModify                          ( class CGameCtnDecalsBrush* value );

        class CGameCtnDecalsBrush* GetBrushPlace                           () const;
        void                    SetBrushPlace                           ( class CGameCtnDecalsBrush* value );

        class CSceneDecalsManager* GetDecalsMgr                            () const;
        void                    SetDecalsMgr                            ( class CSceneDecalsManager* value );

        float                   GetDensity                              () const;
        void                    SetDensity                              ( float value );

        eEditionMode            GetEditionMode                          () const;
        void                    SetEditionMode                          ( eEditionMode value );

        uint                    GetEffectFlickerFrequency               () const;
        void                    SetEffectFlickerFrequency               ( uint value );

        class CGameCtnChallenge* GetMergeFromChallenge                   () const;
        void                    SetMergeFromChallenge                   ( class CGameCtnChallenge* value );

        uint                    GetNbDecals                             () const;
        void                    SetNbDecals                             ( uint value );

        uint                    GetNbDecalsInBrush                      () const;
        void                    SetNbDecalsInBrush                      ( uint value );

        class CScene*           GetScene                                () const;
        void                    SetScene                                ( class CScene* value );

        bool                    GetShowHelpers                          () const;
        void                    SetShowHelpers                          ( bool value );

        bool                    GetTestDensity                          () const;
        void                    SetTestDensity                          ( bool value );

        float                   GetUVDistMax                            () const;
        void                    SetUVDistMax                            ( float value );

        void                    BitmapCellGridShowHide                  ();
        void                    BitmapDecalSetAdd                       ();
        void                    BitmapDecalSetDuplicate                 ();
        void                    BitmapDecalSetFlipX                     ();
        void                    BitmapDecalSetNext                      ();
        void                    BitmapDecalSetPrev                      ();
        void                    BitmapDecalSetRemove                    ();
        void                    BitmapDecalSetRemoveInvalidDecals       ();
        void                    BitmapDecalSetRemoveInvalidDecalsAllSets();
        void                    BitmapDecalSetRemoveTooCloseDecals      ();
        void                    BitmapEditionPlaneShowHide              ();
        void                    BitmapSave                              ();
        void                    BrushApply                              ();
        void                    BrushFlipU                              ();
        void                    BrushModelOrAtlasInc                    ();
        void                    BrushModelOrAtlasPrev                   ();
        void                    BrushOpacityDec                         ();
        void                    BrushOpacityInc                         ();
        void                    BrushPickMulti                          ();
        void                    BrushPickSimple                         ();
        void                    BrushReset                              ();
        void                    BrushRollDec                            ();
        void                    BrushRollInc                            ();
        void                    BrushSizeDec                            ();
        void                    BrushSizeInc                            ();
        void                    BrushSwitchProj                         ();
        void                    BrushThicknessDec                       ();
        void                    BrushThicknessInc                       ();
        void                    DecalBoxesShowHide                      ();
        void                    DecalFillZone                           ();
        void                    DecalSnapOnOff                          ();
        void                    EditionModeModify                       ();
        void                    EditionModePlace                        ();
        void                    SceneBitmapsDecals_Create               ();
        void                    SceneBitmapsDecals_Destroy              ();
        void                    SnapOnLandscape                         ();
        void                    Undo_Clear                              ();
        void                    Undo_Forward                            ();
        void                    Undo_Rewind                             ();
