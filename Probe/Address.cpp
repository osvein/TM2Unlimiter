#include "StdInc.h"

Address Address::Inst;

Address::Address ()
{
    CodeBase = (void *)0x401000;
    CodeSize = 0xC95000;

    operator_new = (void *)0xC86595;
    operator_delete = (void *)0xC8646F;

    // Test: a tree block placed in the air with Air mode selected can be removed again
    CGameCtnChallenge__CreateUnitsForBlocks_hookpos = (void *)0x5457EC;

    // Test: track size expansion works
    CGameCtnChallenge__InitBuildArea_hookpos = (void *)0x54AB44;

    // Test: original block is still selectable after a block was placed over it and removed
    CGameCtnChallenge__RemoveBlock_hookpos = (void *)0x54DED2;
    
    // Test: can place a non-clip side of a block directly next to a clip side of another block;
    //       blocks with custom variant are unchanged
    CGameCtnChallenge__ValidateBlockConnections = (void *)0x548260;

    // Test: the XML metadata in saved maps is tagged with an <unlimiter> element
    CGameCtnChallenge__WriteHeaderChunk_hookpos = (void *)0x5524F0;

    // Test: custom groundmode/variant buttons affect the previewed block
    CGameCtnCursor__ProcessPreviewBlockModel = (void *)0x7331F0;

    // Test: can place blocks with custom groundmode/variant
    CGameCtnEditor__AddBlock = (void *)0x7241A0;

    // (Caller of RemoveBlock when placing overlapping blocks)
    // Test: overlapped blocks are not deleted when placing a block
    CGameCtnEditor__ClearAreaForBlock_hookpos = (void *)0x723BCE;

    // Test: groundmode is preserved when a road block is connected to a direction
    CGameCtnEditor__ConnectRoadBlockToDir_hookpos = (void *)0x724E67;
    CGameCtnEditor__ConnectRoadBlockToDir_retnpos = (void *)0x724EBE;

    // Test: groundmode is preserved when a road block is disconnected from a direction
    CGameCtnEditor__DisconnectRoadBlockFromDir_hookpos = (void *)0x72392C;
    CGameCtnEditor__DisconnectRoadBlockFromDir_retnpos = (void *)0x723983;

    // Test: can draw roads with custom groundmode/variant
    CGameCtnEditor__DrawRoad = (void *)0x727B80;

    // Test: cursor can be moved into air and underground for all blocks
    CGameCtnEditor__FixCursorPos_patchpos1 = (void *)0x6D85AE;
    CGameCtnEditor__FixCursorPos_patchpos2 = (void *)0x6D8822;

    // Test: cursor can be moved underground for all blocks
    CGameCtnEditor__MoveCursorDown_patchpos = (void *)0x60B13E;

    // Test: cursor can be moved up for tunnel entrance blocks
    CGameCtnEditor__MoveCursorUp_patchpos = (void *)0x60B063;

    // Test: can place single blocks with custom groundmode/variant
    CGameCtnEditor__PlaceBlockWithTerraform = (void *)0x7275E0;

    // Test: Placing pillars that overlap a block, then removing the pillars again,
    // doesn't leave the overlapping pillar piece behind
    CGameCtnEditor__RemoveBlockPillars_hookpos = (void *)0x7227B2;

    // "The block's pillars can't be placed"
    // Test: blocks can be overlapped
    CGameCtnEditor__GetBlockGroundModeAndVariantWithError_patchpos1 = (void *)0x72601B;
    // Test: Pillars can overlap blocks
    CGameCtnEditor__GetBlockGroundModeAndVariantWithError_patchpos2 = (void *)0x726068;

    // "UISuperRoot"
    // Test: editor UI extension is visible
    CGameCtnEditorCommonInterface__InitScene2D_hookpos = (void *)0x685731;

    CGameManiaPlanet__UpdateFilesForGameResources_hookpos = (void *)0x6FD6F2;
    CGameManiaPlanet__UpdateFilesForGameResources_retnpos = (void *)0x6FD73E;

    // Test: validating a 255x255 track with blocks doesn't crash
    CHmsCollZone__AddNewCollItem_patchpos2 = (void *)0xD24D51;
    CHmsCollZone__AddNewCollItem_patchpos3 = (void *)0xD24D5E;

    // Test: validating a 255x255 track with blocks doesn't crash
    CHmsCollZone__RemoveCollItem_patchpos1 = (void *)0xD24B95;
    CHmsCollZone__RemoveCollItem_patchpos2 = (void *)0xD24BB8;

    CSystemArchiveNod__ReadExternalReferences_patchpos = (void *)0xC132E7;

    ppGbxGame = (void *)0x1323F90;
    ppEngineMain = (void *)0x130A1F8;
    pEngineManager = (void *)0x130A16C;
    ppParams = (void *)0x1091A18;

    CMwNod__Release = (void *)0xB600C0;

    CMwNod__CallMethod = (void *)0xB60340;

    CMwNod__GetProperty = (void *)0xB60160;

    CreateNodFromFid = (void *)0x41C400;

    Id__Resolve = (void *)0xB627C0;
    Id__AssignPsz = (void *)0xB62BC0;

    StringA__Reserve = (void *)0xAEF520;
    StringA__pszEmpty = (char *)0xF13508;

    StringW__Reserve = (void *)0xAEF5E0;
    StringW__pwszEmpty = (wchar_t *)0xF17908;
}
