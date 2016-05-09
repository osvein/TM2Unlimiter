#pragma once

namespace ManiaPlanet
{

    class CGameCtnCollection : public CMwNod
    {
    public:
        #include "Generated/CGameCtnCollection.Generated.h"

        const wchar_t*          GetName                 () const    { return m_wstrDisplayName.CStr (); }

    private:
        List < void* >          m_CompleteZoneList;
        List < void* >          m_ZonePtrs1;
        List < void* >          m_ZonePtrs2;
        void*                   m_pDefaultZone;
        uint                    m_field40;
        void*                   m_pZoneTreeRootNode;
        uint                    m_field48;
        StringW                 m_wstrDisplayName;
        List < void* >          m_ArticleBlockInfoList;
        List < void* >          m_ArticleObjectInfoList;
        List < void* >          m_ArticleCardEventInfoList;
        List < void* >          m_field78;
        List < void* >          m_field84;
        List < void* >          m_field90;
        List < void* >          m_field9C;
        Id                      m_fieldA8;
        uint                    m_bNeedUnlock;
        NodMeta                 m_Meta;
        void*                   m_pDefaultDecoration;
        uint                    m_fieldC0;
        uint                    m_fieldC4;
        uint                    m_fieldC8;
        float                   m_fSquareSize;
        float                   m_fSquareHeight;
        float                   m_fBoardSquareHeight;
        float                   m_fBoardSquareBorder;
        float                   m_fTerrainHeightOffset;
        uint                    m_uiBlocksShadow;
        float                   m_fShadowSoftSizeInWorld;
        uint                    m_bShadowCastBack;
        uint                    m_uiBackgroundShadow;
        float                   m_fWaterTop;
        float                   m_fWaterBottomDeep;
        float                   m_fWaterBottomShallow;
        uint                    m_bIsWaterOutsidePlayField;
        uint                    m_bIsWaterMultiHeight;
        float                   m_fCameraMinHeight;
        float                   m_fWaterFogMaxDepth;
        float                   m_fWaterFogClampAboveDist;
        uint                    m_uiVertexLighting;
        float                   m_fColorVertexMin;
        float                   m_fColorVertexMax;
        uint                    m_uiLightMapMapper;
        uint                    m_bIsEditable;
        void*                   m_pIconFid;
        void*                   m_pLoadScreenFid;
        uint                    m_uiSortIndex;
        void*                   m_pMapFid;
        uint                    m_field134;
        uint                    m_field138;
        uint                    m_field13C;
        uint                    m_field140;
        Vec2D                   m_vecMapCoordElem;
        Vec2D                   m_vecMapCoordIcon;
        Vec2D                   m_vecMapCoordDesc;
        StringW                 m_wstrLongDesc;
        uint                    m_field164;
        uint                    m_field168;
        uint                    m_field16C;
        uint                    m_uiCollectionPackMask;
        uint                    m_field174;
        void*                   m_pFidFuncShaderCloudsX2;
        void*                   m_pFidPlugBitmapCloudsX2;
        void*                   m_pFolderBlockInfo;
        void*                   m_pFolderObjectInfo;
        void*                   m_pFolderDecoration;
        void*                   m_pFolderMenusIcons;
        void*                   m_pFolderCardEventInfo;
        void*                   m_pFolderMacroBlockInfo;
        void*                   m_pFolderDecalModels;
        void*                   m_pFolderMacroDecals;
        uint                    m_field1A0;
        uint                    m_field1A4;
        uint                    m_field1A8;
        uint                    m_field1AC;
        uint                    m_field1B0;
        uint                    m_field1B4;
        List < void* >          m_BaseZoneStrings;
        List < void* >          m_ReplacementZoneStrings;
        List < void* >          m_ReplacementTerrainModifiers;
        List < void* >          m_ParticleEmitterModelsFids;
        uint                    m_field1E8;
        uint                    m_field1EC;
        uint                    m_field1F0;
        List < void* >          m_DecalsTypesId;
        Vec3D                   m_vecTech3TunnelSpecularExpScaleMax;
        void*                   m_pMarksModel;
        void*                   m_pOffZoneFogMatter;
    };

}
