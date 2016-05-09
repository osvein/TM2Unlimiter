#pragma once

namespace ManiaPlanet
{

    class CGameCtnChallenge : public CMwNod
    {
    public:
        #include "Generated/CGameCtnChallenge.Generated.h"

        const wchar_t*          GetChallengeName        () const        { return m_wstrMapName.CStr (); }

        uint                    GetBaseHeight           () const            { return m_uiBaseHeight; }
        void                    SetBaseHeight           ( uint uiHeight )   { m_uiBaseHeight = uiHeight; }

        uint                    NumBlocks               () const        { return m_Blocks.Size (); }
        CGameCtnBlock*          GetBlock                ( uint i )      { return m_Blocks [ i ]; }

        uint                    NumZones                () const        { return m_Zones.Size (); }
        void*                   GetZone                 ( uint i )      { return m_Zones [ i ]; }

        bool                    IsPositionInRange       ( uint3 pos ) const;

        CGameCtnBlockUnit*      GetBlockUnitAtPos       ( uint3 pos );
        CGameCtnBlock*          GetBlockAtPos           ( uint3 pos );
        void                    RelinkBlockUnits        ();

    private:
        uint                    m_field14[6];
        NodMeta                 m_Meta;
        NodMeta                 m_field38;
        NodMeta                 m_field44;
        void*                   m_pModPackDesc;
        void*                   m_pCustomMusicPackDesc;
        uint                    m_uiKind;
        uint                    m_field5C;
        uint                    m_uiNbLaps;
        uint                    m_field64;
        uint                    m_field68;
        uint                    m_field6C;
        uint                    m_field70;
        uint                    m_field74;
        uint                    m_field78;
        uint                    m_bNeedUnlock;
        StringW                 m_wstrMapName;
        StringW                 m_wstrComments;
        StringA                 m_strAuthorLogin;
        StringW                 m_wstrAuthorNickName;
        StringW                 m_wstrAuthorZonePath;
        StringA                 m_fieldA8;
        Vec2D                   m_vecMapCoordOrigin;
        Vec2D                   m_vecMapCoordTarget;
        uint                    m_uiCopperPrice;
        uint                    m_fieldC4;
        uint                    m_fieldC8;
        uint                    m_fieldCC;
        uint                    m_fieldD0;
        uint                    m_fieldD4;
        uint                    m_fieldD8;
        uint                    m_fieldDC;
        uint                    m_fieldE0;
        uint                    m_fieldE4;
        uint                    m_fieldE8;
        uint                    m_fieldEC;
        uint                    m_fieldF0;
        List < void* >          m_fieldF4;
        StringW                 m_wstrObjectiveTextAuthor;
        StringW                 m_wstrObjectiveTextGold;
        StringW                 m_wstrObjectiveTextSilver;
        StringW                 m_wstrObjectiveTextBronze;
        void*                   m_pClipIntro;
        uint                    m_field124;
        uint                    m_field128[3];
        CClassicBufferMemory    m_MemBuffer;
        uint                    m_field154;
        uint3                   m_Size;
        uint                    m_field164;
        List < CGameCtnBlock* > m_Blocks;
        List < CGameCtnBlock* > m_BakedBlocks;
        List < void* >          m_field180;
        List < void* >          m_AnchoredObjects;
        List < void* >          m_field198;
        void*                   m_pBlockStock;
        List < void* >          m_field1A8;
        void*                   m_pChallengeParameters;
        uint                    m_field1B8;
        void*                   m_pMapInfo;
        Array < List < CGameCtnBlockUnit* >* >  m_BlockUnitColumns;
        Array < void* >         m_field1C8;
        Array < void* >         m_field1D0;
        Array < void* >         m_field1D8;
        Array < void* >         m_field1E0;
        Array < void* >         m_Zones;
        Array < void* >         m_field1F0;
        Array < void* >         m_field1F8;
        List < void* >          m_field200;
        List < void* >          m_field20C;
        List < void* >          m_field218;
        void*                   m_pTrafficGraph;
        uint                    m_field228;
        List < void* >          m_TrafficPathSplines;
        List < void* >          m_TrafficPathSquares;
        List < void* >          m_TrafficZoneSquares;
        List < void* >          m_TrafficElemDescs;
        uint                    m_uiVertexCount;
        CGameCtnCollection*     m_pCollection;
        CGameCtnDecoration*     m_pDecoration;
        uint                    m_uiBaseHeight;
        List < void* >          m_field26C;
        List < void* >          m_field278;
        List < void* >          m_field284;
        List < void* >          m_field290;
        uint                    m_field29C;
        uint                    m_bIsBlockHelpers;
        uint                    m_field2A4;
        uint                    m_field2A8;
        uint                    m_field2AC;
        uint                    m_bBuildAreaInitialized;
        uint                    m_field2B4;
        uint                    m_field2B8;
        uint                    m_field2BC;
        uint                    m_field2C0;
        uint                    m_field2C4;
        uint                    m_field2C8;
        uint                    m_uiDifficulty;
        uint                    m_field2D0;
        uint                    m_field2D4;
        uint                    m_field2D8;
        uint                    m_field2DC;
        uint                    m_field2E0;
        uint                    m_field2E4;
        uint                    m_field2E8;
        uint                    m_field2EC;
        uint                    m_field2F0;
        uint                    m_field2F4;
        uint                    m_field2F8;
        uint                    m_field2FC;
        uint                    m_field300;
        uint                    m_field304;
        uint                    m_uiTargetTime;
        uint                    m_field30C;
        uint                    m_field310;
        uint                    m_field314;
        uint                    m_uiAggregatedBlockInfosUncompressedSize;
        CClassicBufferMemory    m_MemBuffer2;
        List < void* >          m_field33C;
        List < void* >          m_field348;
        List < void* >          m_CarMarks;
        void*                   m_pAnimLibrary;
        List < void* >          m_field364;
        uint                    m_field370;
        void*                   m_pCustomMusic;
        uint                    m_field378;
        StringA                 m_strChallengeScript;
        uint                    m_uiTmpBlockOffsetMoulinetteY;
        void*                   m_pScriptMetadata;
        Id                      m_idChallengeStartLight;
        List < void* >          m_field390;
        List < void* >          m_field39C;
        List < void* >          m_field3A8;
        List < void* >          m_field3B4;
        uint                    m_field3C0;
        uint                    m_field3C4;
        uint                    m_field3C8;
        uint                    m_field3CC;
        List < void* >          m_field3D0;
        uint                    m_field3DC;
    };

}
