#pragma once

class TM2Unlimiter
{
public:
    static TM2Unlimiter*        GetInstance                     ();

    EditorExtensions*           GetEditorExtensions             ()  { return &m_EditorExtensions; }

    ManiaPlanet::CGameCtnBlock* PreventOverlappedBlockRemoval   ( ManiaPlanet::CGameCtnBlock* pBlock );
    void                        RelinkBlockUnits                ( ManiaPlanet::CGameCtnChallenge* pChallenge );
    ManiaPlanet::CGameCtnBlock* GetOverlappedPillarBlock        ( ManiaPlanet::CGameCtnEditorCommon* pEditor, ManiaPlanet::CGameCtnBlock* pBlock );
    void                        SetCustomTrackSize              ( ManiaPlanet::CGameCtnChallenge* pChallenge );

    void                        EnrichChallengeXml              ( ManiaPlanet::CGameCtnChallenge* pChallenge, ManiaPlanet::StringA* pstrXml );

private:
    EditorExtensions            m_EditorExtensions;
    ResourceManager             m_ResourceManager;
};
