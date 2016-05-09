#pragma once

class Address
{
public:
                        Address					();

    static Address		Inst;

    void*               CodeBase;
    dword               CodeSize;

    void*               operator_new;
    void*               operator_delete;

    void*               CGameCtnChallenge__CreateUnitsForBlocks_hookpos;
    void*               CGameCtnChallenge__InitBuildArea_hookpos;
    void*               CGameCtnChallenge__RemoveBlock_hookpos;
    void*               CGameCtnChallenge__ValidateBlockConnections;
    void*               CGameCtnChallenge__WriteHeaderChunk_hookpos;

    void*               CGameCtnCursor__ProcessPreviewBlockModel;

    void*               CGameCtnEditor__AddBlock;
    void*               CGameCtnEditor__ClearAreaForBlock_hookpos;
    void*               CGameCtnEditor__ConnectRoadBlockToDir_hookpos;
    void*               CGameCtnEditor__ConnectRoadBlockToDir_retnpos;
    void*               CGameCtnEditor__DisconnectRoadBlockFromDir_hookpos;
    void*               CGameCtnEditor__DisconnectRoadBlockFromDir_retnpos;
    void*               CGameCtnEditor__DrawRoad;
    void*               CGameCtnEditor__FixCursorPos_patchpos1;
    void*               CGameCtnEditor__FixCursorPos_patchpos2;
    void*               CGameCtnEditor__MoveCursorDown_patchpos;
    void*               CGameCtnEditor__MoveCursorUp_patchpos;
    void*               CGameCtnEditor__PlaceBlockWithTerraform;
    void*               CGameCtnEditor__RemoveBlockPillars_hookpos;
    void*               CGameCtnEditor__GetBlockGroundModeAndVariantWithError_patchpos1;
    void*               CGameCtnEditor__GetBlockGroundModeAndVariantWithError_patchpos2;

    void*               CGameCtnEditorCommonInterface__InitScene2D_hookpos;

    void*               CGameManiaPlanet__UpdateFilesForGameResources_hookpos;
    void*               CGameManiaPlanet__UpdateFilesForGameResources_retnpos;

    void*               CHmsCollZone__AddNewCollItem_patchpos2;
    void*               CHmsCollZone__AddNewCollItem_patchpos3;

    void*               CHmsCollZone__RemoveCollItem_patchpos1;
    void*               CHmsCollZone__RemoveCollItem_patchpos2;

    void*               CSystemArchiveNod__ReadExternalReferences_patchpos;

    void*               ppGbxGame;
    void*               ppEngineMain;
    void*               pEngineManager;
    void*               ppParams;

    void*               CMwNod__Release;
    void*               CMwNod__CallMethod;
    void*               CMwNod__GetProperty;

    void*               CreateNodFromFid;

    void*               Id__Resolve;
    void*               Id__AssignPsz;

    void*               StringA__Reserve;
    char*               StringA__pszEmpty;

    void*               StringW__Reserve;
    wchar_t*            StringW__pwszEmpty;
};
