#pragma once

namespace ManiaPlanet
{

    class CGameCtnBlockInfoMobil;

    class CGameCtnBlockInfoVariant : public CMwNod
    {
    public:
        #include "Generated/CGameCtnBlockInfoVariant.Generated.h"

        Array < List < CGameCtnBlockInfoMobil* >* >& GetMobilLists   () { return m_MobilLists; }

    private:
        Array < CGameCtnBlockUnitInfo* >            m_BlockUnitInfos;
        CMwNod*             m_pHelperMobil;
        CMwNod*             m_pFacultativeHelperMobil;
        CMwNod*             m_pWayPointTriggerSolid;
        uint                m_PhysicsModTriggerType;
        CMwNod*             m_pPhysicsModTriggerSolid;
        CMwNod*             m_pScreenInteractionTriggerSolid;
        Array < List < CGameCtnBlockInfoMobil* >* > m_MobilLists;
        Matrix43            m_uiSpawnLoc;
        uint                m_bHasManualSymmetryH;
        uint                m_bHasManualSymmetryV;
        uint                m_bHasManualSymmetryD1;
        uint                m_bHasManualSymmetryD2;
        uint                m_uiMultiDir;
        uint                m_uiSymmetricalVariantIndex;
        uint                m_uiCardinalDir;
        uint                m_field8C;
        uint                m_bHasVolumeSymmetryH;
        uint                m_bHasVolumeSymmetryV;
        uint                m_bHasVolumeSymmetryD1;
        uint                m_bHasVolumeSymmetryD2;
        uint                m_fieldA0;
        StringA             m_strName;
        uint3               m_Size;
        uint3               m_OffsetBoundingBoxMin;
        uint3               m_OffsetBoundingBoxMax;
    };

}
