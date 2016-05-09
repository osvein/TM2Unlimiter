#pragma once

class EditorExtensions
{
public:
                                        EditorExtensions                ();

    void                                Install                         ( ManiaPlanet::CGameCtnEditorCommonInterface* pEditorInterface );

    void                                SetVariantParameters            ( bool* pbGround, int* piVariant, int* piSubVariant );
    void                                SetBlockFlags                   ( ManiaPlanet::CGameCtnBlock* pBlock );
    void                                SetBlockConnectionValidation    ( ManiaPlanet::uint3 pos, bool* pbInvalidClipConnection, uint* pbConnectRoadToDirs, uint* pbDisconnectRoadFromDirs );

    bool                                IsVariantCustomizationEnabled   () const;
    bool                                SetVariantCustomizationEnabled  ( bool bEnabled );

    void                                DuplicateBlock                  ( ManiaPlanet::CGameCtnBlock* pBlock );
    ManiaPlanet::CGameCtnBlock*         ReplaceBlockUsingPlacement      ( ManiaPlanet::CGameCtnBlock* pBlock, ManiaPlanet::BlockPlacementInfo* pPlacement, ManiaPlanet::CGameCtnBlockSkin* pSkin );
    ManiaPlanet::CGameCtnBlock*         ReplaceBlockUsingBlock          ( ManiaPlanet::CGameCtnBlock* pBlock, ManiaPlanet::CGameCtnBlock* pPlacementInfoBlock, ManiaPlanet::CGameCtnBlockSkin* pSkin );

private:
    ManiaPlanet::CGameCtnEditorCommon*  GetEditor                       ();

    void                                ToggleGroundMode                ();
    void                                SwitchSubVariant                ();

    void                                SetGroundMode                   ( int iGroundMode );
    void                                SetSubVariant                   ( int iSubVariant );

    void                                BackupVariantCustomization      ();
    void                                RestoreVariantCustomization     ();

    ManiaPlanet::CControlButton*        m_pToggleGroundModeButton;
    ManiaPlanet::CControlButton*        m_pSwitchSubVariantButton;

    bool                                m_bAutoGroundMode;
    int                                 m_iAutoSubVariant;

    struct VariantCustomization
    {
    public:
                VariantCustomization    ()
        {
            m_bEnabled = false;
            m_iGroundMode = -1;
            m_iSubVariant = -1;
        }

        bool    m_bEnabled;
        int     m_iGroundMode;
        int     m_iSubVariant;
    };

    VariantCustomization                m_CurrentVariantCustomization;
    std::vector<VariantCustomization>   m_VariantCustomizationStack;
};
