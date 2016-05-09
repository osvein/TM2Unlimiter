        enum { CLASSID = 0x030E4000 };

        static CGameEditorModel* CreateInstance ();

        enum eComponentMode
        {
            COMPONENTMODE_VERTEX,
            COMPONENTMODE_EDGE,
            COMPONENTMODE_VERTEX_EDGE,
            COMPONENTMODE_FACE
        };
        static std::wstring     ComponentModeToString                   ( eComponentMode value );
        static eComponentMode   ParseComponentMode                      ( const std::wstring& wstrName );

        enum eErrorMode
        {
            ERRORMODE_NO_ERROR,
            ERRORMODE_ERRORS_ON_RAW,
            ERRORMODE_ERRORS_ON_EQUI,
            ERRORMODE_ERRORS_ON_EDGES,
            ERRORMODE_ALL_ERRORS
        };
        static std::wstring     ErrorModeToString                       ( eErrorMode value );
        static eErrorMode       ParseErrorMode                          ( const std::wstring& wstrName );

        enum eNavigationMode
        {
            NAVIGATIONMODE_EDIT3D,
            NAVIGATIONMODE_FREELOOK
        };
        static std::wstring     NavigationModeToString                  ( eNavigationMode value );
        static eNavigationMode  ParseNavigationMode                     ( const std::wstring& wstrName );

        enum eOperation
        {
            OPERATION_NONE,
            OPERATION_DRAW,
            OPERATION_MOVE,
            OPERATION_SPLIT_EDGE,
            OPERATION_MERGE_POINTS,
            OPERATION_ROTATE,
            OPERATION_UV_MAPPING
        };
        static std::wstring     OperationToString                       ( eOperation value );
        static eOperation       ParseOperation                          ( const std::wstring& wstrName );

        enum ePivotMode
        {
            PIVOTMODE_LOCAL,
            PIVOTMODE_USERDEFINE
        };
        static std::wstring     PivotModeToString                       ( ePivotMode value );
        static ePivotMode       ParsePivotMode                          ( const std::wstring& wstrName );

        enum eSelectionMode
        {
            SELECTIONMODE_ADJACENT,
            SELECTIONMODE_PLANAR,
            SELECTIONMODE_OBJECT,
            SELECTIONMODE_MATERIAL
        };
        static std::wstring     SelectionModeToString                   ( eSelectionMode value );
        static eSelectionMode   ParseSelectionMode                      ( const std::wstring& wstrName );

        bool                    GetAlignX                               () const;
        void                    SetAlignX                               ( bool value );

        bool                    GetAlignY                               () const;
        void                    SetAlignY                               ( bool value );

        bool                    GetAlignZ                               () const;
        void                    SetAlignZ                               ( bool value );

        bool                    GetAllPickable                          () const;
        void                    SetAllPickable                          ( bool value );

        float                   GetAngle                                () const;
        void                    SetAngle                                ( float value );

        uint                    GetBaseVisualLevel                      () const;
        void                    SetBaseVisualLevel                      ( uint value );

        class CSceneCamera*     GetCamera                               () const;
        void                    SetCamera                               ( class CSceneCamera* value );

        eComponentMode          GetComponentMode                        () const;
        void                    SetComponentMode                        ( eComponentMode value );

        float                   GetComponentModeChangeEffect_Duration   () const;
        void                    SetComponentModeChangeEffect_Duration   ( float value );

        float                   GetComponentModeChangeEffect_SizeCoef   () const;
        void                    SetComponentModeChangeEffect_SizeCoef   ( float value );

        class CMwNod*           GetControlCameraOrbital                 () const;
        void                    SetControlCameraOrbital                 ( class CMwNod* value );

        class CPlugCrystal*     GetCrystal                              () const;
        void                    SetCrystal                              ( class CPlugCrystal* value );

        StringW                 GetCurrentErrorMessage                  () const;
        void                    SetCurrentErrorMessage                  ( StringW value );

        float                   GetCursorCoordsX                        () const;
        void                    SetCursorCoordsX                        ( float value );

        float                   GetCursorCoordsY                        () const;
        void                    SetCursorCoordsY                        ( float value );

        float                   GetCursorCoordsZ                        () const;
        void                    SetCursorCoordsZ                        ( float value );

        float                   GetDbgSmooth                            () const;
        void                    SetDbgSmooth                            ( float value );

        float                   GetDeltaScale                           () const;
        void                    SetDeltaScale                           ( float value );

        float                   GetDifferentModeAlphaDivider            () const;
        void                    SetDifferentModeAlphaDivider            ( float value );

        bool                    GetDisplayEditedCrystal                 () const;
        void                    SetDisplayEditedCrystal                 ( bool value );

        bool                    GetDisplayEditionCrystal                () const;
        void                    SetDisplayEditionCrystal                ( bool value );

        float                   GetEdgeAlpha                            () const;
        void                    SetEdgeAlpha                            ( float value );

        float                   GetEdgeAlphaFocused                     () const;
        void                    SetEdgeAlphaFocused                     ( float value );

        float                   GetEdgeAlphaFocusedSelected             () const;
        void                    SetEdgeAlphaFocusedSelected             ( float value );

        float                   GetEdgeAlphaSelected                    () const;
        void                    SetEdgeAlphaSelected                    ( float value );

        uint                    GetEdgeCount                            () const;
        void                    SetEdgeCount                            ( uint value );

        float                   GetEdgeWidth                            () const;
        void                    SetEdgeWidth                            ( float value );

        float                   GetEdgeWidthFocused                     () const;
        void                    SetEdgeWidthFocused                     ( float value );

        float                   GetEdgeWidthFocusedSelected             () const;
        void                    SetEdgeWidthFocusedSelected             ( float value );

        float                   GetEdgeWidthSelected                    () const;
        void                    SetEdgeWidthSelected                    ( float value );

        class CMwNod*           GetEditPos3D                            () const;
        void                    SetEditPos3D                            ( class CMwNod* value );

        eErrorMode              GetErrorMode                            () const;
        void                    SetErrorMode                            ( eErrorMode value );

        float                   GetFaceAlpha                            () const;
        void                    SetFaceAlpha                            ( float value );

        float                   GetFaceAlphaFocused                     () const;
        void                    SetFaceAlphaFocused                     ( float value );

        float                   GetFaceAlphaFocusedSelected             () const;
        void                    SetFaceAlphaFocusedSelected             ( float value );

        float                   GetFaceAlphaSelected                    () const;
        void                    SetFaceAlphaSelected                    ( float value );

        uint                    GetFaceCount                            () const;
        void                    SetFaceCount                            ( uint value );

        bool                    GetFillPolygon                          () const;
        void                    SetFillPolygon                          ( bool value );

        class CMwNod*           GetGameEditorTexCoords                  () const;
        void                    SetGameEditorTexCoords                  ( class CMwNod* value );

        float                   GetGridStep                             () const;
        void                    SetGridStep                             ( float value );

        color                   GetHelperColor                          () const;
        void                    SetHelperColor                          ( color value );

        color                   GetHelperColorDraw                      () const;
        void                    SetHelperColorDraw                      ( color value );

        color                   GetHelperColorError                     () const;
        void                    SetHelperColorError                     ( color value );

        color                   GetHelperColorFocused                   () const;
        void                    SetHelperColorFocused                   ( color value );

        color                   GetHelperColorFocusedSelected           () const;
        void                    SetHelperColorFocusedSelected           ( color value );

        color                   GetHelperColorMerge                     () const;
        void                    SetHelperColorMerge                     ( color value );

        color                   GetHelperColorMove                      () const;
        void                    SetHelperColorMove                      ( color value );

        color                   GetHelperColorRotate                    () const;
        void                    SetHelperColorRotate                    ( color value );

        color                   GetHelperColorScale                     () const;
        void                    SetHelperColorScale                     ( color value );

        color                   GetHelperColorSelected                  () const;
        void                    SetHelperColorSelected                  ( color value );

        color                   GetHelperColorSplit                     () const;
        void                    SetHelperColorSplit                     ( color value );

        bool                    GetIsKeepInfo                           () const;
        void                    SetIsKeepInfo                           ( bool value );

        bool                    GetIsKeepTexCoordOrientation            () const;
        void                    SetIsKeepTexCoordOrientation            ( bool value );

        bool                    GetIsShowEdge                           () const;
        void                    SetIsShowEdge                           ( bool value );

        bool                    GetIsShowFace                           () const;
        void                    SetIsShowFace                           ( bool value );

        bool                    GetIsShowPivot                          () const;
        void                    SetIsShowPivot                          ( bool value );

        bool                    GetIsShowVertex                         () const;
        void                    SetIsShowVertex                         ( bool value );

        bool                    GetIsUndoEnabled                        () const;
        void                    SetIsUndoEnabled                        ( bool value );

        uint                    GetLastRawSize                          () const;
        void                    SetLastRawSize                          ( uint value );

        uint                    GetLastSize                             () const;
        void                    SetLastSize                             ( uint value );

        uint                    GetLodLevel                             () const;
        void                    SetLodLevel                             ( uint value );

        class CSceneMobil*      GetMobilHelper                          () const;
        void                    SetMobilHelper                          ( class CSceneMobil* value );

        eNavigationMode         GetNavigationMode                       () const;
        void                    SetNavigationMode                       ( eNavigationMode value );

        uint                    GetNbEdges                              () const;
        void                    SetNbEdges                              ( uint value );

        uint                    GetNbFaces                              () const;
        void                    SetNbFaces                              ( uint value );

        uint                    GetNbVertexs                            () const;
        void                    SetNbVertexs                            ( uint value );

        uint                    GetNbVisualLevel                        () const;
        void                    SetNbVisualLevel                        ( uint value );

        eOperation              GetOperation                            () const;
        void                    SetOperation                            ( eOperation value );

        float                   GetPickMinScreenDist                    () const;
        void                    SetPickMinScreenDist                    ( float value );

        class CHmsPicker*       GetPicker                               () const;
        void                    SetPicker                               ( class CHmsPicker* value );

        ePivotMode              GetPivotMode                            () const;
        void                    SetPivotMode                            ( ePivotMode value );

        uint                    GetPolyNbEdge                           () const;
        void                    SetPolyNbEdge                           ( uint value );

        float                   GetPolyRadius                           () const;
        void                    SetPolyRadius                           ( float value );

        float                   GetScaleValue                           () const;
        void                    SetScaleValue                           ( float value );

        bool                    GetScaleX                               () const;
        void                    SetScaleX                               ( bool value );

        bool                    GetScaleY                               () const;
        void                    SetScaleY                               ( bool value );

        bool                    GetScaleZ                               () const;
        void                    SetScaleZ                               ( bool value );

        class CScene3d*         GetScene                                () const;
        void                    SetScene                                ( class CScene3d* value );

        eSelectionMode          GetSelectionMode                        () const;
        void                    SetSelectionMode                        ( eSelectionMode value );

        uint                    GetTotalUpdate                          () const;
        void                    SetTotalUpdate                          ( uint value );

        Vec3D                   GetTranslation                          () const;
        void                    SetTranslation                          ( Vec3D value );

        float                   GetVertexAlpha                          () const;
        void                    SetVertexAlpha                          ( float value );

        float                   GetVertexAlphaFocused                   () const;
        void                    SetVertexAlphaFocused                   ( float value );

        float                   GetVertexAlphaFocusedSelected           () const;
        void                    SetVertexAlphaFocusedSelected           ( float value );

        float                   GetVertexAlphaSelected                  () const;
        void                    SetVertexAlphaSelected                  ( float value );

        uint                    GetVertexCount                          () const;
        void                    SetVertexCount                          ( uint value );

        float                   GetVertexWidth                          () const;
        void                    SetVertexWidth                          ( float value );

        float                   GetVertexWidthFocused                   () const;
        void                    SetVertexWidthFocused                   ( float value );

        float                   GetVertexWidthFocusedSelected           () const;
        void                    SetVertexWidthFocusedSelected           ( float value );

        float                   GetVertexWidthSelected                  () const;
        void                    SetVertexWidthSelected                  ( float value );

        float                   GetVisualLevelDistance                  () const;
        void                    SetVisualLevelDistance                  ( float value );

        uint                    GetVisualLevelIndex                     () const;
        void                    SetVisualLevelIndex                     ( uint value );

        uint                    GetVisualLevelValue                     () const;
        void                    SetVisualLevelValue                     ( uint value );

        float                   GetWeldDist                             () const;
        void                    SetWeldDist                             ( float value );

        bool                    Getm_LimitSelection                     () const;
        void                    Setm_LimitSelection                     ( bool value );

        void                    AddVisualLevel                          ();
        void                    AlignObject                             ();
        void                    AlignVertex                             ();
        void                    CheckErrors                             ();
        void                    CleanGuide                              ();
        void                    ComponentModeEdge                       ();
        void                    ComponentModeFace                       ();
        void                    ComponentModeVertex                     ();
        void                    ComponentModeVertexAndEdge              ();
        void                    Copy                                    ();
        void                    CreateEdge_Cancel                       ();
        void                    CreateEdge_Draw                         ();
        void                    CreateEdge_Finish                       ();
        void                    CreateEdge_SelectVertex                 ();
        void                    CreateEdge_Start                        ();
        void                    CreateFaceFromSel                       ();
        void                    CreateGuide                             ();
        void                    CreatePolygon                           ();
        void                    CreatePortal                            ();
        void                    CreateQuadFromSel                       ();
        void                    CreateTriangleFromSel                   ();
        void                    CursorOnPivot                           ();
        void                    CursorSnap                              ();
        void                    CurveObject                             ();
        void                    Delete                                  ();
        void                    DeleteIsolatedVertexs                   ();
        void                    DrawEdge_Cancel                         ();
        void                    DrawEdge_SelectVertex                   ();
        void                    DrawEdge_Start                          ();
        void                    EditTexCoords_CopyMaterialAndUvs        ();
        void                    EditTexCoords_HackNextMaterial          ();
        void                    EditTexCoords_HackPrevMaterial          ();
        void                    EditTexCoords_QuickSelect               ();
        void                    EditTexCoords_Redo                      ();
        void                    EditTexCoords_RotateUvsCcw              ();
        void                    EditTexCoords_RotateUvsCw               ();
        void                    EditTexCoords_Select                    ();
        void                    EditTexCoords_Start                     ();
        void                    EditTexCoords_Stop                      ();
        void                    EditTexCoords_Undo                      ();
        void                    Exit                                    ();
        void                    Extrude                                 ();
        void                    FindFacesFromEdge                       ();
        void                    InvertSel                               ();
        void                    MergePoints_Cancel                      ();
        void                    MergePoints_SelectVertex                ();
        void                    MergePoints_Start                       ();
        void                    Move_Cancel                             ();
        void                    Move_Finish                             ();
        void                    Move_Start                              ();
        void                    Paste                                   ();
        void                    QuadsToTriangles                        ();
        void                    QuickSelect                             ();
        void                    Redo                                    ();
        void                    RemoveVisualLevel                       ();
        void                    Rotate_Cancel                           ();
        void                    Rotate_Finish                           ();
        void                    Rotate_RightAngleXCcw                   ();
        void                    Rotate_RightAngleXCw                    ();
        void                    Rotate_RightAngleYCcw                   ();
        void                    Rotate_RightAngleYCw                    ();
        void                    Rotate_RightAngleZCcw                   ();
        void                    Rotate_RightAngleZCw                    ();
        void                    Rotate_SmallAngleXCcw                   ();
        void                    Rotate_SmallAngleXCw                    ();
        void                    Rotate_SmallAngleYCcw                   ();
        void                    Rotate_SmallAngleYCw                    ();
        void                    Rotate_SmallAngleZCcw                   ();
        void                    Rotate_SmallAngleZCw                    ();
        void                    Rotate_Start                            ();
        void                    Scale_Cancel                            ();
        void                    Scale_DoubleAll                         ();
        void                    Scale_DoubleX                           ();
        void                    Scale_DoubleY                           ();
        void                    Scale_DoubleZ                           ();
        void                    Scale_Finish                            ();
        void                    Scale_HalfAll                           ();
        void                    Scale_HalfX                             ();
        void                    Scale_HalfY                             ();
        void                    Scale_HalfZ                             ();
        void                    Scale_SmallDecAll                       ();
        void                    Scale_SmallDecX                         ();
        void                    Scale_SmallDecY                         ();
        void                    Scale_SmallDecZ                         ();
        void                    Scale_SmallIncAll                       ();
        void                    Scale_SmallIncX                         ();
        void                    Scale_SmallIncY                         ();
        void                    Scale_SmallIncZ                         ();
        void                    Scale_Start                             ();
        void                    SelectGroup1                            ();
        void                    SelectGroup2                            ();
        void                    SelectGroup3                            ();
        void                    SelectGroup4                            ();
        void                    SelectGroup5                            ();
        void                    SelectGroup6                            ();
        void                    SelectGroup7                            ();
        void                    SelectGroup8                            ();
        void                    SelectGroup9                            ();
        void                    SeparateFaces                           ();
        void                    SetAlignVertex                          ();
        void                    SetCursorToPickedVertex                 ();
        void                    SetLowerLimit                           ();
        void                    SetPivotFromCursor                      ();
        void                    SetPivotFromObject                      ();
        void                    SetUpperLimit                           ();
        void                    ShowHideHelpers                         ();
        void                    ShowHideVertexNormals                   ();
        void                    SimpleSelect                            ();
        void                    SnapAllEpsilon                          ();
        void                    SnapObjectToGrid                        ();
        void                    SnapVertexsToGrid                       ();
        void                    SplitEdge2_Cancel                       ();
        void                    SplitEdge2_Split                        ();
        void                    SplitEdge2_Start                        ();
        void                    SplitEdge_Cancel                        ();
        void                    SplitEdge_Split                         ();
        void                    SplitEdge_Start                         ();
        void                    SwapFaceNormal                          ();
        void                    SwitchSmooth                            ();
        void                    Symetric                                ();
        void                    TrianglesToQuads                        ();
        void                    Undo                                    ();
        void                    UpdateEditedCrystal                     ();
        void                    WeldFaces                               ();
