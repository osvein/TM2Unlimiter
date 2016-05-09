#include "StdInc.h"

using namespace ManiaPlanet;

EditorExtensions::EditorExtensions ()
{
    m_pToggleGroundModeButton = NULL;
    m_pSwitchSubVariantButton = NULL;
}

void EditorExtensions::Install ( CGameCtnEditorCommonInterface* pEditorInterface )
{
    CControlFrameStyled* pInterfaceRoot = pEditorInterface->GetInterfaceScene ()->GetInterfaceRoot ();
    CControlFrameStyled* pUISuperRoot = nod_cast < CControlFrameStyled* > (
        pInterfaceRoot->GetChildById ( "UISuperRoot" ) );
    if ( !pUISuperRoot )
        return;

    CControlStyleSheet* pStylesheet = pInterfaceRoot->GetStyleSheet ();
    CControlStyle* pButtonStyle = pStylesheet->GetStyle ( "TextValueSmall" );

    m_pToggleGroundModeButton = pUISuperRoot->AddButton (
        "TM2U_ToggleGroundModeButton",
        L"Auto",
        L"Toggle ground/air",
        bind ( &EditorExtensions::ToggleGroundMode, this ),
        Vec3D ( 1.18f, -0.84f, -0.2f ),
        Vec2D ( 0.09f, 0.06f ),
        pButtonStyle
    );
    m_pToggleGroundModeButton->SetAlignHorizontal ( CControlBase::ALIGNHORIZONTAL_HCENTER );
    m_pToggleGroundModeButton->SetAlignVertical ( CControlBase::ALIGNVERTICAL_VCENTER2 );

    m_pSwitchSubVariantButton = pUISuperRoot->AddButton (
        "TM2U_SwitchSubVariantButton",
        L"Auto",
        L"Switch between block variants",
        bind ( &EditorExtensions::SwitchSubVariant, this ),
        Vec3D ( 1.08f, -0.84f, -0.2f ),
        Vec2D ( 0.09f, 0.06f ),
        pButtonStyle
    );
    m_pSwitchSubVariantButton->SetAlignHorizontal ( CControlBase::ALIGNHORIZONTAL_HCENTER );
    m_pSwitchSubVariantButton->SetAlignVertical ( CControlBase::ALIGNVERTICAL_VCENTER2 );

    m_CurrentVariantCustomization.m_bEnabled = false;
    m_CurrentVariantCustomization.m_iGroundMode = -1;
    m_CurrentVariantCustomization.m_iSubVariant = -1;
}

void EditorExtensions::SetVariantParameters ( bool* pbGround, int* piVariant, int* piSubVariant )
{
    m_bAutoGroundMode = *pbGround;
    m_iAutoSubVariant = *piSubVariant;

    if ( !m_CurrentVariantCustomization.m_bEnabled )
        return;

    if ( m_CurrentVariantCustomization.m_iGroundMode != -1 )
        *pbGround = ( m_CurrentVariantCustomization.m_iGroundMode == 0 );

    if ( m_CurrentVariantCustomization.m_iSubVariant != -1 )
        *piSubVariant = m_CurrentVariantCustomization.m_iSubVariant;
}

void EditorExtensions::SetBlockConnectionValidation ( uint3 pos, bool* pbInvalidClipConnection, uint* pbConnectRoadToDirs, uint* pbDisconnectRoadFromDirs )
{
    if ( !GetEditor () )
        return;

    CGameCtnBlock* pBlock = GetEditor ()->GetChallenge ()->GetBlockAtPos ( pos );
    if ( !pBlock )
        return;

    *pbInvalidClipConnection = false;
    if ( pBlock->HasFixedVariant () )
    {
        for ( int i = 0; i < 4; i++ )
        {
            pbConnectRoadToDirs [ i ] = 0;
            pbDisconnectRoadFromDirs [ i ] = 0;
        }
    }
}

void EditorExtensions::SetBlockFlags ( CGameCtnBlock* pBlock )
{
    if ( m_CurrentVariantCustomization.m_iSubVariant != -1 )
        pBlock->SetFixedVariant ( true );
}

bool EditorExtensions::IsVariantCustomizationEnabled () const
{
    return m_CurrentVariantCustomization.m_bEnabled;
}

bool EditorExtensions::SetVariantCustomizationEnabled ( bool bEnabled )
{
    bool bPrevValue = m_CurrentVariantCustomization.m_bEnabled;
    m_CurrentVariantCustomization.m_bEnabled = bEnabled;
    return bPrevValue;
}

void EditorExtensions::DuplicateBlock ( CGameCtnBlock* pBlock )
{
    if ( !GetEditor () )
        return;

    GetEditor ()->AddBlock (
        pBlock->GetBlockInfo (),
        pBlock->GetSkin (),
        pBlock->GetCoord (),
        pBlock->GetDir (),
        pBlock->IsOnGround (),
        pBlock->GetVariant (),
        pBlock->GetSubVariant (),
        ( pBlock->GetFlags() >> 6 ) & 0x3F,
        0
    );
}

CGameCtnBlock* EditorExtensions::ReplaceBlockUsingPlacement ( CGameCtnBlock* pBlock, BlockPlacementInfo* pPlacement, CGameCtnBlockSkin* pSkin )
{
    if ( !GetEditor () )
        return NULL;

    bool bGround = pBlock->IsOnGround ();
    int iVariant = pBlock->GetVariant ();
    uint uiFlags = pBlock->GetFlags ();
    
    GetEditor ()->RemoveBlock ( pBlock, 0, 1 );
    return GetEditor ()->PlaceBlock (
        pPlacement->m_pBlockInfo,
        pSkin,
        pPlacement->m_Pos,
        pPlacement->m_iDir,
        pPlacement->m_iSubVariant,
        -1,
        false,
        true,
        (uiFlags >> 0xD) & 1,
        bGround,
        iVariant
    );
}

CGameCtnBlock* EditorExtensions::ReplaceBlockUsingBlock ( ManiaPlanet::CGameCtnBlock* pBlock, ManiaPlanet::CGameCtnBlock* pPlacementInfoBlock, ManiaPlanet::CGameCtnBlockSkin* pSkin )
{
    BlockPlacementInfo placement;
    placement.m_pBlockInfo = pPlacementInfoBlock->GetBlockInfo ();
    placement.m_Pos = pPlacementInfoBlock->GetCoord ();
    placement.m_iDir = pPlacementInfoBlock->GetDir ();
    placement.m_iSubVariant = pPlacementInfoBlock->GetSubVariant ();
    return ReplaceBlockUsingPlacement ( pBlock, &placement, pSkin );
}

CGameCtnEditorCommon* EditorExtensions::GetEditor ()
{
    CGameCtnApp* pApp = CGbxGame::GetInstance ()->GetGame ();
    if ( !pApp )
        return NULL;

    return nod_cast < CGameCtnEditorCommon* > ( pApp->GetEditor () );
}

void EditorExtensions::ToggleGroundMode ()
{
    if ( !GetEditor () )
        return;

    int iNextGroundMode = m_CurrentVariantCustomization.m_iGroundMode + 1;
    if ( iNextGroundMode > 1 )
        iNextGroundMode = -1;

    SetGroundMode ( iNextGroundMode );
}

void EditorExtensions::SwitchSubVariant ()
{
    if ( !GetEditor () )
        return;

    CGameCtnBlockInfo* pBlockInfo = GetEditor ()->GetCurrentBlockInfo ();
    if ( !pBlockInfo )
        return;

    bool bGroundMode;
    if ( m_CurrentVariantCustomization.m_iGroundMode == -1 )
        bGroundMode = m_bAutoGroundMode;
    else
        bGroundMode = (m_CurrentVariantCustomization.m_iGroundMode == 0);

    CGameCtnBlockInfoVariant* pVariant =
        bGroundMode
        ? static_cast < CGameCtnBlockInfoVariant* > ( pBlockInfo->GetVariantGround () )
        : static_cast < CGameCtnBlockInfoVariant* > ( pBlockInfo->GetVariantAir () );
    if ( !pVariant )
        return;

    SetSubVariant ( m_CurrentVariantCustomization.m_iSubVariant >= pVariant->GetMobilLists ().Size () - 1 ? -1 : m_CurrentVariantCustomization.m_iSubVariant + 1 );
}

void EditorExtensions::SetGroundMode ( int iGroundMode )
{
    if ( !GetEditor () )
        return;

    m_CurrentVariantCustomization.m_iGroundMode = iGroundMode;
    GetEditor ()->GetCursor ()->SetBlockModelChanged ( true );
    
    const wchar_t* pwszGroundMode = NULL;
    switch ( iGroundMode )
    {
        case -1:
            pwszGroundMode = L"Auto";
            break;

        case 0:
            pwszGroundMode = L"Gnd";
            break;

        case 1:
            pwszGroundMode = L"Air";
            break;
    }

    m_pToggleGroundModeButton->SetLabel ( pwszGroundMode );
    SetSubVariant ( -1 );
}

void EditorExtensions::SetSubVariant ( int iSubVariant )
{
    if ( !GetEditor () )
        return;

    m_CurrentVariantCustomization.m_iSubVariant = iSubVariant;
    GetEditor ()->GetCursor ()->SetBlockModelChanged ( true );

    if ( m_CurrentVariantCustomization.m_iSubVariant == -1 )
        m_pSwitchSubVariantButton->SetLabel ( L"Auto" );
    else
        m_pSwitchSubVariantButton->SetLabel ( StringUtil::Format ( L"%d", iSubVariant ).c_str () );
}

void EditorExtensions::BackupVariantCustomization ()
{
    m_VariantCustomizationStack.push_back ( m_CurrentVariantCustomization );
}

void EditorExtensions::RestoreVariantCustomization ()
{
    m_CurrentVariantCustomization = m_VariantCustomizationStack.back ();
    m_VariantCustomizationStack.pop_back ();
}
