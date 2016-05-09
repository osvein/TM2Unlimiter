#include "StdInc.h"

using namespace ManiaPlanet;

namespace Hooks
{

    TM2Unlimiter* BlockMixHooks::ms_pUnlimiter;
    EditorExtensions* BlockMixHooks::ms_pEditorExtensions;

    void BlockMixHooks::Init ()
    {
        ms_pUnlimiter = TM2Unlimiter::GetInstance ();
        ms_pEditorExtensions = ms_pUnlimiter->GetEditorExtensions ();

        HookEntry hooks[] = {
            // Don't remove any blocks that would be overlapped by a newly placed block (except clips)
            { &Address::Inst.CGameCtnEditor__ClearAreaForBlock_hookpos, &OnClearingAreaForBlock },
            
            // Relink block units to the challenge after a block has been removed (so that
            // previously overlapped blocks become selectable again)
            { &Address::Inst.CGameCtnChallenge__RemoveBlock_hookpos, &OnBlockRemoved },

            // While removing the blocks of a pillar, if we encounter a non-pillar block,
            // find the overlapped pillar block instead
            { &Address::Inst.CGameCtnEditor__RemoveBlockPillars_hookpos, &OnRemovingPillarBlock },

            // Disable clip connection checks
            { &Address::Inst.CGameCtnChallenge__ValidateBlockConnections, &OnValidatingBlockConnections },

            // Use custom track size
            { &Address::Inst.CGameCtnChallenge__InitBuildArea_hookpos, &OnInitializingBuildArea },

            // Create GUI
            { &Address::Inst.CGameCtnEditorCommonInterface__InitScene2D_hookpos, &OnEditorInterfaceLoaded },

            // Update cursor preview block with custom ground mode/variant
            { &Address::Inst.CGameCtnCursor__ProcessPreviewBlockModel, &OnProcessingCursorPreviewBlock },

            // Activate custom ground mode/variant when placing a single block
            { &Address::Inst.CGameCtnEditor__PlaceBlockWithTerraform, &OnUserPlacingBlock },

            // Activate custom ground mode/variant when drawing a road
            { &Address::Inst.CGameCtnEditor__DrawRoad, &OnUserDrawingRoad },

            // Place blocks with custom ground mode/variant
            { &Address::Inst.CGameCtnEditor__AddBlock, &OnCreatingBlock },

            // Make sure block units are created by switching to a different variant if the
            // current variant doesn't have any unit infos.
            { &Address::Inst.CGameCtnChallenge__CreateUnitsForBlocks_hookpos, &OnCreatingBlockUnits },

            // Preserve groundmode when connecting/disconnecting road blocks to/from directions
            { &Address::Inst.CGameCtnEditor__ConnectRoadBlockToDir_hookpos, &OnConnectingRoadBlockToDir },
            { &Address::Inst.CGameCtnEditor__DisconnectRoadBlockFromDir_hookpos, &OnDisconnectingRoadBlockFromDir },

            { NULL, NULL }
        };
        InstallHooks ( hooks );

        // Allow .gbx files in Personal folder to reference each other
        *(byte *)Address::Inst.CSystemArchiveNod__ReadExternalReferences_patchpos = 0xEB;

        // Allow placing overlapping blocks
        memset ( Address::Inst.CGameCtnEditor__GetBlockGroundModeAndVariantWithError_patchpos1, 0x90, 6 );
        
        // Allow placing pillars that overlap blocks
        *(byte *)Address::Inst.CGameCtnEditor__GetBlockGroundModeAndVariantWithError_patchpos2 = 0xEB;

        // Remove cursor height restrictions (allow any block to be placed at any height)
        *(word *)Address::Inst.CGameCtnEditor__FixCursorPos_patchpos1 = 0xE990;
        *(byte *)Address::Inst.CGameCtnEditor__FixCursorPos_patchpos2 = 0xEB;
        *(word *)Address::Inst.CGameCtnEditor__MoveCursorDown_patchpos = 0xE990;
        *(byte *)Address::Inst.CGameCtnEditor__MoveCursorUp_patchpos = 0xEB;

        // Use 18 bits instead of 16 for storing the list index of collision items to avoid overflow
        static byte ucAddCollItemPatch1[] = { 0x8B, 0x11, 0x90 };
        memcpy ( Address::Inst.CHmsCollZone__AddNewCollItem_patchpos2, ucAddCollItemPatch1, sizeof(ucAddCollItemPatch1) );

        *(byte *)Address::Inst.CHmsCollZone__AddNewCollItem_patchpos3 = 0x00;

        memset ( Address::Inst.CHmsCollZone__RemoveCollItem_patchpos1, 0x90, 6 );

        *(byte *)Address::Inst.CHmsCollZone__RemoveCollItem_patchpos2 = 0xFF;
    }

    _declspec(naked) void BlockMixHooks::OnClearingAreaForBlock ()
    {
        _asm
        {
            push esi
            mov ecx, ms_pUnlimiter
            call TM2Unlimiter::PreventOverlappedBlockRemoval

            mov esi, eax
            jmp Address::Inst.CGameCtnEditor__ClearAreaForBlock_hookpos
        }
    }

    _declspec(naked) void BlockMixHooks::OnBlockRemoved ()
    {
        _asm
        {
            push ebx
            mov ecx, ms_pUnlimiter
            call TM2Unlimiter::RelinkBlockUnits

            jmp Address::Inst.CGameCtnChallenge__RemoveBlock_hookpos
        }
    }

    _declspec(naked) void BlockMixHooks::OnRemovingPillarBlock ()
    {
        _asm
        {
            push esi
            push edi
            mov ecx, ms_pUnlimiter
            call TM2Unlimiter::GetOverlappedPillarBlock
            mov esi, eax

            jmp Address::Inst.CGameCtnEditor__RemoveBlockPillars_hookpos
        }
    }

    _declspec(naked) void BlockMixHooks::OnValidatingBlockConnections ()
    {
        _asm
        {
            push [esp+0x20]
            push [esp+4+0x1C]
            push [esp+8+0x18]
            push [esp+0xC+0xC]
            push [esp+0x10+8]
            push [esp+0x14+4]

                push 0x20
                push 0x18 + 4
                push Address::Inst.CGameCtnChallenge__ValidateBlockConnections
                push ecx
                call CallOriginalFunction

            mov ecx, ms_pEditorExtensions
            call EditorExtensions::SetBlockConnectionValidation
            retn 0x20
        }
    }

    _declspec(naked) void BlockMixHooks::OnInitializingBuildArea ()
    {
        _asm
        {
            push esi
            mov ecx, ms_pUnlimiter
            call TM2Unlimiter::SetCustomTrackSize

            jmp Address::Inst.CGameCtnChallenge__InitBuildArea_hookpos
        }
    }

    _declspec(naked) void BlockMixHooks::OnEditorInterfaceLoaded ()
    {
        _asm
        {
            push esi
            mov ecx, ms_pEditorExtensions
            call EditorExtensions::Install

            jmp Address::Inst.CGameCtnEditorCommonInterface__InitScene2D_hookpos
        }
    }

    _declspec(naked) void BlockMixHooks::OnProcessingCursorPreviewBlock ()
    {
        _asm
        {
            push ecx

                push 1
                mov ecx, ms_pEditorExtensions
                call EditorExtensions::SetVariantCustomizationEnabled

                lea edx, [esp+4+0x14]     // piSubVariant
                push edx
                lea edx, [esp+8+0x10]     // piVariant
                push edx
                lea edx, [esp+0xC+0xC]    // pbGround
                push edx
                mov ecx, ms_pEditorExtensions
                call EditorExtensions::SetVariantParameters

                push 0
                mov ecx, ms_pEditorExtensions
                call EditorExtensions::SetVariantCustomizationEnabled
            
            pop ecx
            jmp Address::Inst.CGameCtnCursor__ProcessPreviewBlockModel
        }
    }

    _declspec(naked) void BlockMixHooks::OnUserPlacingBlock ()
    {
        _asm
        {
            push ebx
                push 0x1C
                push 4 + 4
                push Address::Inst.CGameCtnEditor__PlaceBlockWithTerraform
                push ecx

                    push 1
                    mov ecx, ms_pEditorExtensions
                    call EditorExtensions::SetVariantCustomizationEnabled
                    movzx ebx, al

                call CallOriginalFunction

                push ebx
                mov ecx, ms_pEditorExtensions
                call EditorExtensions::SetVariantCustomizationEnabled

            pop ebx
            retn 0x1C
        }
    }

    _declspec(naked) void BlockMixHooks::OnUserDrawingRoad ()
    {
        _asm
        {
            push ebx
                push 0x1C
                push 4 + 4
                push Address::Inst.CGameCtnEditor__DrawRoad
                push ecx

                    push 1
                    mov ecx, ms_pEditorExtensions
                    call EditorExtensions::SetVariantCustomizationEnabled
                    movzx ebx, al

                call CallOriginalFunction

                push ebx
                mov ecx, ms_pEditorExtensions
                call EditorExtensions::SetVariantCustomizationEnabled

            pop ebx
            retn 0x1C
        }
    }

    _declspec(naked) void BlockMixHooks::OnCreatingBlock ()
    {
        _asm
        {
            push 0x2C
            push 4
            push Address::Inst.CGameCtnEditor__AddBlock
            push ecx

                lea edx, [esp+0x10+0x24]    // piSubVariant
                push edx
                lea edx, [esp+0x14+0x20]    // piVariant
                push edx
                lea edx, [esp+0x18+0x1C]    // pbGround
                push edx
                mov ecx, ms_pEditorExtensions
                call EditorExtensions::SetVariantParameters

            call CallOriginalFunction

            push eax

                push eax
                mov ecx, ms_pEditorExtensions
                call EditorExtensions::SetBlockFlags

            pop eax
            retn 0x2C
        }
    }

    _declspec(naked) void BlockMixHooks::OnCreatingBlockUnits ()
    {
        _asm
        {
            call CGameCtnBlockInfo::GetVariantWithUnits

            mov edx, Address::Inst.CGameCtnChallenge__CreateUnitsForBlocks_hookpos
            add edx, 5
            jmp edx
        }
    }

    _declspec(naked) void BlockMixHooks::OnConnectingRoadBlockToDir ()
    {
        _asm
        {
            push 0
            push esi
            push ebp
            mov ecx, ms_pEditorExtensions
            call EditorExtensions::ReplaceBlockUsingPlacement
            jmp Address::Inst.CGameCtnEditor__ConnectRoadBlockToDir_retnpos
        }
    }

    _declspec(naked) void BlockMixHooks::OnDisconnectingRoadBlockFromDir ()
    {
        _asm
        {
            push 0
            push esi
            push eax
            mov ecx, ms_pEditorExtensions
            call EditorExtensions::ReplaceBlockUsingPlacement
            jmp Address::Inst.CGameCtnEditor__DisconnectRoadBlockFromDir_retnpos
        }
    }

}
